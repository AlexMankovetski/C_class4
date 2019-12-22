#include <stdio.h>
#include "find.h"

#define LINE 256
#define WORD 30

int subString(char *str1 ,char *str2){
	int index1 = 0;
	int index2 = 0;
	int length = 0;
	
	while(*(str2 + length*sizeof(char))!='\0'){
		length++;
	}

while(*(str1 + index1*sizeof(char))!='\n' && *(str2 + index2*sizeof(char))!='\0'){
			if(*(str1 + index1)==*(str2 + index2)){
				index2++;
			}else{
				index2 = 0;
			}
			if(index2 == length){
				return 1;
			}
			index1++;
	}
	return 0;
}

int similar(char *s, char *t, int n){
	int length1 = 0,length2 = 0; 
	int index1 = 0, index2 = 0 ,count = 0;

	while(*(s + length1)!='\0'){
		length1++;
	}
	while(*(t + length2)!='\0'){
		length2++;
	}
	if((length1-length2)!=n){
		return 0;
	}
	while(index1<length1 && index2<length2){
		if(*(s+index1)==*(t+index2)){
			index1++;
			index2++;
		}
		else{
			index1++;
			count++;
			if(count>n){
				return 0;
			}
		}	
	}
	return 1;
	
}
