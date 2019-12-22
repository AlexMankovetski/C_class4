#include <stdio.h>
#include "sort.h"

#define size 50

int main(){
int array[size];
printf("\nChoose %d values for your Array -->\n",size);
int num;
for(int i =0 ;i<size ;i++){
	scanf("%d",&num);
	*(array + i)=num;
}

int numOfElements = sizeof(array)/sizeof(int);
insertion_sort(array,numOfElements);

for(int i = 0; i<size ; i++){
	printf("%d,",*(array + i));
}

return 0;
}
