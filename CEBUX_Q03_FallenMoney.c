#include "stdio.h"
int main(){
  int num;
  char items;
  scanf("%d",&num );
  if(num>0){
    items = '$';
  }
  else if(num<0){
    num*=-1;
    items = 'o';
  }
  if(num==0) printf("ERROR!");
  else if(num%2!=0){
    for(int i=1;i<=(num-1)/2;i++){    
      for(int j=1;j<=((num+1)/2)-1;j++) printf("%c ",items);
      printf("%c\n",items);
      for(int j=1;j<=((num+1)/2)-1;j++)printf(" %c",items);
      printf("\n");
    }
    for(int i=1;i<=((num+1)/2)-1;i++) printf("%c ",items);   
    printf("%c",items);
  }
  else{
    for(int i=1;i<=num/2;i++){     
      for(int j=1;j<=((num)/2)-1;j++) printf("%c ",items);
      printf("%c\n",items);
      for(int j=1;j<=((num)/2)-1;j++)printf(" %c",items);
      printf(" %c",items);
      if(i!=num/2)printf("\n");
    }
  }
  return 0;
}