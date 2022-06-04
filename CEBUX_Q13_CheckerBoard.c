#include "stdio.h"
int main(){
	int w,l;
	int ox = 'O';
	scanf("%d %d",&w,&l);
	if(w<3||l<3){
		printf("ERROR!");
		return 0;
	}
	for(int i=0;i<w;i++){
		for(int j=0;j<l;j++){
			if(ox=='O'){
				printf("O");
				ox = 'X';
				if(l%2==0 && j==l-1){
					ox = 'O';
				}
			}
			else{
				printf("X");
				ox = 'O';
				if(l%2==0 && j==l-1){
					ox = 'X';
				}
			}
		}
		printf("\n");
	}
	return 0;
}