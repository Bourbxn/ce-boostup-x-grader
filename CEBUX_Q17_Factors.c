#include "stdio.h"
int main(){
	int num;
	int factor = 2;
	int sumFactor = 1;
	int numCopy;
	scanf("%d",&num);
	if(num<2){
		printf("ERROR!");
		return 0;
	}
	numCopy = num;
	while(num!=1){
		if(num%factor==0){
			printf("%d",factor);
			num=num/factor;
			sumFactor*=factor;
			if(sumFactor!=numCopy){
				printf(" x ");
			}
		}
		else{
			factor++;
		}
	}
	return 0;
}