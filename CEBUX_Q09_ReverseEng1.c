#include "stdio.h"
int main(){
	long num,sum=0,temp;
	char minusSign = '\0';
	scanf("%ld",&num);
	if(num<0){
		minusSign = '-';
		num*=-1;
	}
	do{
		while(num>0){    
			temp=num%10;    
			sum=sum+temp;    
			num=num/10;
		}
		num=sum; 
		sum=0;
	}while(num/10>0);
	printf("%c%ld",minusSign,num);
}
