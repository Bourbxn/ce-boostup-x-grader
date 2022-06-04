#include "stdio.h"
int main(){
	char input[10000];
	int size = 0,isRun = 1;
	int blckOpen[]={0,0},blckClose[]={0,0},quoteOpen[]={0,0},quoteClose[]={0,0},squoteOpen[]={0,0},squoteClose[]={0,0};
	scanf("%[^\n]",input);
	while(input[++size]!='\0');
	for(int i=0;i<size;i++){
		if(input[i]=='('){
			blckOpen[0]+=1;
			if(blckOpen[0]==1) blckOpen[1]=i;
		}
		else if(input[i]==')'){
			blckClose[0]+=1;
			if(blckClose[0]==1) blckClose[1]=i;
		}
		else if(input[i]=='\"' && quoteOpen[0]==0){
			quoteOpen[0]+=1;
			if(quoteOpen[0]==1) quoteOpen[1]=i;
	
		}
		else if(input[i]=='\"' && quoteClose[0]==0){
			quoteClose[0]+=1;
			if(quoteClose[0]==1) quoteClose[1]=i;
		}
		else if(input[i]=='\'' && squoteOpen[0]==0){
			squoteOpen[0]+=1;
			if(squoteOpen[0]==1) squoteOpen[1]=i;
		}
		else if(input[i]=='\''&& squoteClose[0]==0){
			squoteClose[0]+=1;
			if(squoteClose[0]==1) squoteClose[1]=i;	
		}
	}

	//print error
	if(input[0]!='p' || input[1]!='r' || input[2]!='i' || input[3]!='n' || input[4]!='t'){
		isRun = 0;
	}
	for(int i=5;i<blckOpen[1];i++){
		if(input[i]!=' '){
			isRun = 0;
			break;
		}
	}
	//blacket error
	if(blckOpen[0]>1 || blckOpen[1] > blckClose[1] || blckClose[0]>1){
		isRun = 0;
	}
	for(int i=blckClose[1]+1;i<size;i++){
		if(input[i]!=' '){
			isRun = 0;
			break;
		}
	}
	//quote error
	if(quoteOpen[0]>1 || quoteOpen[1] > blckClose[1] || quoteClose[0]>1){
		isRun = 0;
	}
	//squote error
	if(squoteOpen[0]>1 || squoteOpen[1] > squoteClose[1] || squoteClose[0]>1){
		isRun = 0;
	}
	//quote and squote error
	if((quoteOpen[0]==1 && quoteClose[0] != 1)||(squoteOpen[0]==1 && squoteClose[0] != 1)){
		isRun = 0;
	}
	if(quoteOpen[0]==0 && quoteClose[0]==0 && squoteOpen[0]==0 && squoteClose[0]==0){
		isRun = 0;
	}
	//quote and blacker error
	if(quoteClose[0]>0 && quoteOpen[0]>0){
		for(int i=blckOpen[1]+1;i<quoteOpen[1];i++){
			if(input[i]!=' '){
				isRun = 0;
				break;
			}
		}
		for(int i=quoteClose[1]+1;i<blckClose[1];i++){
			if(input[i]!=' '){
				isRun = 0;
				break;
			}
		}
	}
	//squote and blacker error
	if(squoteClose[0]>0 && squoteOpen[0]>0){
		for(int i=blckOpen[1]+1;i<squoteOpen[1];i++){
			if(input[i]!=' '){
				isRun = 0;
				break;
			}
		}
		for(int i=squoteClose[1]+1;i<blckClose[1];i++){
			if(input[i]!=' '){
			isRun = 0;
			break;
			}
		}
	}

	printf("> ");
	if(isRun){
		if(quoteOpen[0]==1 && quoteClose[0]==1){
			for(int i=quoteOpen[1]+1;i<quoteClose[1];i++){
				printf("%c",input[i]);
			}
		}
		else if(squoteOpen[0]==1 && squoteClose[0]==1){
			for(int i=squoteOpen[1]+1;i<squoteClose[1];i++){
				printf("%c",input[i]);
			}
		}
	}
	else{
		printf("SYNTAX ERROR");
	}
}