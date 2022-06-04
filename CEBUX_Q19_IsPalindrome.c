#include "stdio.h"
#include "string.h"
int main(){
	char numTextOld[10000];
	char numText[10000];
	int isPalindrome = 1;
	int isZero = 0;
	int nonZeroPos=0;
	scanf("%s",numTextOld);
	int sizeOld = strlen(numTextOld);
	for(int i=0;i<sizeOld;i++){
		if(numTextOld[i]!='0'){
			nonZeroPos = i;
			break;
		}
		if(i==sizeOld-1){
			isZero = 1;
		}
	}

	if(isZero){
		char zero = '0';
		strncat(numText, &zero,1);
	}
	else{
		for(int i=nonZeroPos;i<sizeOld;i++){
			strncat(numText, &numTextOld[i], 1);
		}
	}

	int size = strlen(numText);

	if(size%2!=0){
		for(int i=0;i<(size-1)/2;i++){
			int pos = ((size-1)/2)+1+i;
			if(numText[pos]!=numText[pos-((i+1)*2)]){
				isPalindrome = 0;
			}
		}
	}
	else{
		for(int i=0;i<size/2;i++){
			int pos = (size/2)+i;
			if(numText[pos]!=numText[size-pos-1]){
				isPalindrome = 0;
			}
		}
	}

	if(isPalindrome){
		printf("%s is PALINDROME",numText);
	}
	else{
		printf("%s is NOT PALINDROME",numText);
	}
}

