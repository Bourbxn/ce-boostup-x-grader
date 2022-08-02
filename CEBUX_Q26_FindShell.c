#include "stdio.h"
int main(){
	int x,y;
	scanf("(%d,%d)",&x,&y);
	if(x>10||y>10 || x<1 || y<1){
		printf("ERROR!");
		return 0;
	}
	for(int i=1;i<=10;i++){
		for(int j=1;j<=10;j++){
			if(i==y&&j==x){
				printf("@");
			}
			else{
				printf("#");
			}
		}
		printf("\n");
	}
	return 0;
}