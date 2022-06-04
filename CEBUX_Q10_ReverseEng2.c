#include "stdio.h"
int main(){
	char firstChar;
	char secondChar;
	scanf("%c%c",&firstChar,&secondChar);
	printf("%d",firstChar^secondChar);
}