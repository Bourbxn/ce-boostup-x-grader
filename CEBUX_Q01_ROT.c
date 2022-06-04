#include "stdio.h"
#include "string.h"
int main(){
	char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char lower[] = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";
	char text[1000];
	char oldText[1000];
	int rot,size=0,rotLoop;
	scanf("%d %s",&rot,text);
	while(text[++size]!='\0');
	rotLoop = rot;
	while(rotLoop>26){
		rotLoop-=26;
	}
	strcpy(oldText, text);
	for(int i=0;i<size;i++){
		if(text[i] >= 'A' && text[i] <= 'Z'){
			text[i]=upper[text[i]-'A'+ rotLoop];
		}
		else if(text[i] >= 'a' && text[i] <= 'z'){
			text[i]=lower[text[i]-'a'+rotLoop];
		}
	}

	if(rotLoop<=0){
		printf("ERROR");
	}
	else{
		printf("ROT%d of %s is %s",rot,oldText,text);
	}
	return 0;
}