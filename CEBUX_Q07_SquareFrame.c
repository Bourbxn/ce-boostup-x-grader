#include "stdio.h"
int main(){
	int num;
	scanf("%d",&num);
	if(num<1){
		printf("ERROR!");
	}
	for(int i=0;i<num;i++){
		for(int j=0;j<num;j++){
			if(i==0 || i==num-1) printf("#");
			else if(i!=0 && i!=num-1 && (j==0 || j==num-1)) printf("#");
			else printf(" ");
		}
		printf("\n");
	}
	return 0;
}