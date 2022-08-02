#include "stdio.h"
int main(){
	int num,fib=1,temp=0;
	scanf("%d",&num);
	while(fib<num){
		fib+=temp;
		temp=fib-temp;
	}
	if(fib==num || num==0){
		printf("%d is FIBONACCI",num);
	}
	else{
		printf("%d is NOT FIBONACCI",num);
	}
}
