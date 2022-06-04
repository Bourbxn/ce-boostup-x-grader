#include<stdio.h>
#include "string.h"

int main() {
    char str[] = "000HelloWorld";
   	char str2[1000];
 	for(int i=4;i<strlen(str);i++){
 		strncat(str2, &str[i], 1);
 	}
    printf("%s %d", str2,strlen(str2));
    return 0;
}