#include "stdio.h"
#include "string.h"
int main(){
	char input[1000];
	int sum=0,pos = 0,numList[100],pow=-1,sumAll=0;
	scanf("%s",input);
	for(int i=strlen(input)-1;i>=0;i--){
		if(input[i]>='0' && input[i]<='9'){
			pow++;
			int sumPow=1;
			for(int j=0;j<pow;j++) sumPow*=10;
			sum+=(input[i]-'0')*sumPow;
		}
		else if(input[i]=='-'){
			sum = sum*(-1);
			numList[pos++]=sum;
			sum=0;
			pow=-1;
		}
		else{
			numList[pos++]=sum;
			sum=0;
			pow=-1;
		}
		if(i==0){
			numList[pos]=sum;
		}
	}

	if(input[0]=='-') pos-=1;
	
	for(int i=0;i<pos+1;i++){
		sumAll+=numList[i];
	}

	printf("%d",sumAll);
	return 0;
}



