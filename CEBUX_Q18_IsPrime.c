#include "stdio.h"
int main(){
	long num;
	int factorAm=0;
	int factor = 2;
	scanf("%ld",&num);
	if(num<2){
		printf("%ld is NOT PRIME",num);
		return 0;
	}
	while(factor<=(num/2)+1){
		if(num%factor==0){
			factorAm++;
			if(factorAm>0) break;
		}
		factor++;
	}
	if(factorAm>0){
		printf("%ld is NOT PRIME",num);
	}
	else{
		printf("%ld is PRIME",num);
	}
	return 0;
}