#include "stdio.h"
int main(){
  int num,i,j;
  scanf("%d",&num);
  if(num<3){
    printf("ERROR!");
    return 0;
  }
  if(num%2==0){
    int cnt1 = num/2, cnt2= num/2;
    for(int i=1;i<=num;i++){
      for(int j=1;j<=num-1;j++){
        if(j==cnt1||j==cnt2){
          printf("*");
        }
        else{
          printf("-");
        }
      }
      if(i<num) printf("\n");
      if(i<num/2){
        cnt1--;cnt2++;
      }
      else if(i>num/2){
        cnt1++;cnt2--;
      }
    }
  }
  else{
    int cnt1 = num/2+1, cnt2= num/2+1;
    for(int i=1;i<=num;i++){
      for(int j=1;j<=num;j++){
        if(j==cnt1||j==cnt2){
          printf("*");
        }
        else{
          printf("-");
        }
      }
      if(i<num) printf("\n");
      if(i<num/2+1){
        cnt1--;cnt2++;
      }
      else {
        cnt1++;cnt2--;
      }
    }
  }
  return 0;
}