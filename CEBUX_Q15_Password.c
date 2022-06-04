#include "stdio.h"
#include "string.h"
int main(){
	char text[1000];
	int sum=0;
	int digitPow=1;
	scanf("%s",text);
	for(int i=strlen(text)-1;i>=0;i--){
		if(text[i]>='0' && text[i]<='9'){
			sum+=(text[i]-'0')*digitPow;
			if(text[i-1]>='0'&&text[i-1]<='9'){
				digitPow *= 10;
			}
		}
		else{
			digitPow = 1;
		}
	}
	printf("%04d",sum);
}

