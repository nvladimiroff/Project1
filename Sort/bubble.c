#include "sort.h"
#include <stdio.h>
#include <stdlib.h>
#include "extra.h"

void bubble(int *array,int count, compare cmp)
{
	int i=0, j=0;
	int temp;

	for(i=0; i<count;i++){
		int flag=0;
		for(j=0; j<count-1; j++){
			if(cmp(array[j], array[j+1])>0){
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
				flag=1;
			}
		}
		if(flag==0)break;
	}
	printarray(array,count);
}	
