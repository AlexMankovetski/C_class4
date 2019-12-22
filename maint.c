#include <stdio.h>
#include "find.h"

#define LINE 256
#define WORD 30

int main(){

char a_OR_b;
char w[WORD];
char c;
char w2[WORD];
char line[LINE];
int count =0;
	
	while((c=getc(stdin))!=' '){
		w[count]=c;
		count++;
	}
	w[count]='\0';
	count=1;

	while((c=getc(stdin))!='\n'){
		if(c=='a'){
			a_OR_b='a';}
		if(c=='b'){
			a_OR_b='b';}
	}

	if(a_OR_b=='a'){
		while((c=getc(stdin))!=EOF){
			line[0]=c;
			while((c=getc(stdin))!='\n'){
				line[count]=c;
				count++;
			}
			line[count]='\n';
			count=1;
			if(subString(line,w)==1){
				printf("%s",line);
			}
		}	
	}
	if(a_OR_b=='b'){
		c=getc(stdin);
		count=0;
		while((c=getc(stdin))!=EOF){
			if(c=='\n' || c=='\t' || c==' '){
				w2[count]='\0';
				count=0;
				if(similar(w2,w,1)){
					printf("%s\n",w2);
				}
				if(similar(w2,w,0)){
					printf("%s\n",w2);
				}
				
			}
			else{
				w2[count]=c;
				count++;
			}
		}
	}
return 0;
}
