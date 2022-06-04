#include "stdio.h"
#include "string.h"
int main(){
	char text[1000];
	int pointAmount = 0;
	int pointPos;
	int isZero = 1;
	int startPos = 1;
	int stopPos = 1;
	scanf("%s",text);
	for(int i=0;i<strlen(text);i++){
		if((text[i]<'0' || text[i]>'9') && text[i]!='.'){
			printf("ERROR!");
			return 0;
		}
		if(text[i]=='.'){
			pointPos=i;
			pointAmount++;
			if(pointAmount>1){
				printf("ERROR!");
				return 0;
			}
		}
	}

	for(int i=pointPos+1;i<strlen(text)-1;i++){
		if(text[i]!='0'){
			isZero = 0;
		}
	}

	for(int i=0;i<strlen(text);i++){
		if(text[i]!='0'){
			startPos = i;
			break;
		}
	}

	for(int i=strlen(text)-1;i>=0;i--){
		if(text[i]!='0'){
			stopPos = i;
			break;
		}
	}
	if(isZero==1){
		stopPos--;
	}
	if(pointAmount==0){
		stopPos=strlen(text);
	}
	for(int i=startPos;i<stopPos+1;i++){
		printf("%c",text[i]);
	}
	printf(" is ");

	if(pointAmount==0){
		printf("INTEGER");
	}
	else if(pointAmount==1 && isZero==1){
		printf("INTEGER");
	}
	else{
		printf("DECIMAL");
	}
	return 0;
}