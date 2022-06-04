#include "stdio.h"
int main(){
	int num;
	scanf("%d",&num);
	if(num<1){
		printf("ERROR!");
		return 0;
	}
	for(int i=0;i<num;i++){
		for(int j=0;j<num-i;j++){
			printf("%d",j+1);
		}
	}
	return 0;
}