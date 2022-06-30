#include "stdio.h"
#include "string.h"
int main(){
	char num1[1000],num2[1000];
	scanf("%s %s",num1,num2);
	int lenNum2 = strlen(num2),lenNum1=strlen(num1);
	int most=0;
	if(lenNum1>lenNum2){
		most =1;
		char numTemp[lenNum2];
		for(int i=0;i<lenNum2;i++){
			numTemp[i]=num2[i];
		}
		int pos = 0;
		for(int i=0;i<lenNum1;i++){
			if(i<lenNum1-lenNum2){
				num2[i]='0';
			}
			else{
				num2[i]=numTemp[pos++];
			}
		}
	}
	else if(lenNum1<lenNum2){
		most = 2;
		char numTemp[lenNum1];
		for(int i=0;i<lenNum1;i++){
			numTemp[i]=num1[i];
		}
		int pos = 0;
		for(int i=0;i<lenNum2;i++){
			if(i<lenNum2-lenNum1){
				num1[i]='0';
			}
			else{
				num1[i]=numTemp[pos++];
			}
		}
	}

	int isCareer = 0;

	if(most==1 || most==0){
		char result[strlen(num1)];
		for(int i=strlen(num1)-1;i>=0;i--){
			result[i]=num2[i]+num1[i]-'0';
			if(isCareer){
				result[i]+=1;
				isCareer = 0;
			}
			if(result[i]>'9'){
				isCareer = 1;
				result[i]-=10;
			}
		}
		if(isCareer) printf("1");
		for(int i=0;i<lenNum1;i++) printf("%c",result[i]);
	}
	else if(most==2){
		char result[strlen(num2)];
		for(int i=strlen(num2)-1;i>=0;i--){
			result[i]=num2[i]+num1[i]-'0';
			if(isCareer){
				result[i]+=1;
				isCareer = 0;
			}
			if(result[i]>'9'){
				isCareer = 1;
				result[i]-=10;
			}
		}
		if(isCareer) printf("1");
		for(int i=0;i<lenNum2;i++) printf("%c",result[i]);
	}
	return 0;
}





