#include "stdio.h"
int main(){
	int num;
	scanf("%d",&num);
	if(num<2){
		printf("ERROR!");
		return 0;
	}
	for(int i=0;i<num;i++){
		for(int j=0;j<i+1;j++){
			for(int l=0;l<i;l++) printf(" ");
			for(int l=0;l<num;l++) printf("#");
			printf("\n");
		}
	}
	return 0;
}

