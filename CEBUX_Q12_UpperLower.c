#include "stdio.h"
#include "string.h"
int main(){
	char text[1000];
	scanf("%[^\n]",text);
	for(int i=0;i<strlen(text);i++){
		if(text[i]>='A' && text[i]<='Z'){
			text[i]+='a'-'A';
		}
		else if(text[i]>='a' && text[i] <= 'z'){
			text[i]-='a'-'A';
		}
	}
	printf("%s",text);
	return 0;
}