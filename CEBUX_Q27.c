#include "stdio.h"
#include "string.h"
int main(){
	char text[1000];
	int num1=0,num2=0,commaPos=0,pow=1;
	scanf("%s",text);
	for(int i=0;i<strlen(text);i++){
		if(text[i]==','){
			break;
		}
		commaPos++;
	}
	for(int i=commaPos-1;i>0;i--){
		num1+=(text[i]-'0')*pow;
		pow*=10;
	}
	pow = 1;
	for(int i=strlen(text)-2;i>commaPos;i--){
		num2+=(text[i]-'0')*pow;
		pow*=10;
	}
	if(text[0]=='('){
		num1++;
	}
	if(text[strlen(text)-1]==')'){
		num2--;
	}
	printf("{");
	for(int i=num1;i<=num2;i++){
		printf("%d",i);
		if(i!=num2){
			printf(",");
		}
	}
	printf("}");
}

// (8,8)
// (1,5)
// [1,5]