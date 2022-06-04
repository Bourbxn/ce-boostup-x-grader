#include<stdio.h>
int main(){
  int date,month,year,day_num,allday=0;
  char day[3];
  int dateEdit,monthEdit,yearEdit,day_numEdit;
  scanf("%s %d/%d/%d", day, &date, &month, &year);
  if(day[0]=='M' && day[1]=='O' && day[2]=='N')day_num=1;
  else if(day[0]=='T' && day[1]=='U' && day[2]=='E')day_num=2;
  else if(day[0]=='W' && day[1]=='E' && day[2]=='D')day_num=3;
  else if(day[0]=='T' && day[1]=='H' && day[2]=='U')day_num=4;
  else if(day[0]=='F' && day[1]=='R' && day[2]=='I')day_num=5;
  else if(day[0]=='S' && day[1]=='A' && day[2]=='T')day_num=6;
  else if(day[0]=='S' && day[1]=='U' && day[2]=='N')day_num=7;
  while(1){
    int yearAD=year-543;
    if(day_num==1 && month==8 && date<=7)break;
    if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
      if(date==32){
        month+=1;
        date=1;
      }
      else{
        date+=1;
        allday+=1;
        day_num+=1;
        if(day_num==8)day_num=1;
      }
    }
    else if(month==4 || month==6 || month==9 || month==11){
      if(date==31){
        month+=1;
        date=1;
      }
      else{
        date+=1;
        allday+=1;
        day_num+=1;
        if(day_num==8)day_num=1;
      }
    }
    else if(month==2){
      if((yearAD%4==0 && yearAD%100!=0)||(yearAD%4==0 && yearAD%100==0 && yearAD%400==0)){ //29
        if(date==30){
          month+=1;
          date=1;
        }
        else{
          date+=1;
          allday+=1;
          day_num+=1;
          if(day_num==8)day_num=1;
        }
      }
      else if((yearAD%4!=0)||(yearAD%4==0 && yearAD%100==0 && yearAD%400!=0)){ //28
        if(date==29){
          month+=1;
          date=1;
        }
        else{
          date+=1;
          allday+=1;
          day_num+=1;
          if(day_num==8)day_num=1;
        }
      }
    }
    else if(month==13){
      year+=1;
      month=1;
      date=1;
    }
  }
  printf("KMITL Semester starts: ");
  printf("MON ");
  if(date<10)printf("0%d/", date);
  else{printf("%d/", date);}
  printf("08/");
  printf("%d\n", year);
  printf("Days left to starts Semester: %d",allday);
  return 0;
}