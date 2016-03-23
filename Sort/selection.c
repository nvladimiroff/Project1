#include "sort.h"
#include <stdio.h>
#include <stdlib.h>
#include "extra.h"

void selection(int *array,int count, compare cmp)
{
	int iMin,temp;
	for(int i=0; i<count; i++){
		iMin=i;
		for(int j=i+1; j<count; j++){
			if(cmp(array[iMin],array[j])>0){
				iMin=j;
			}
		}
		temp = array[i];
		array[i]=array[iMin];
		array[iMin]=temp;
	}
	printarray(array,count);
}

