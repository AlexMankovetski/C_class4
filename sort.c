#include <stdio.h>
#include "sort.h"

void shift_element(int *arr, int *i){
int temp;
	for(temp = *i; i>arr && *(i-1)>temp;i--){
		*i=*(i-1);
	}
	*i=temp;
}

void insertion_sort(int *arr, int len){
int *i;
int *last = arr + len;
	for(i = arr + 1; i<last ; i++){
		if(*i < *(i-1)){
			shift_element(arr,i);
		}
	}
}


