#include "stdio.h"
#include "string.h"
int main(){
	char text[1000];
	scanf("%s",text);
	for(int i=0;i<strlen(text);i++){
		for(int j=(strlen(text)-1)*2-(i*2);j>0;j--) printf(" ");
		for(int j=i;j>0;j--) printf("%c ",text[j]);
		printf("%c",text[0]);
		for(int j=1;j<=i;j++) printf(" %c",text[j]);
		if(i!=strlen(text)-1) printf("\n");
	}
}