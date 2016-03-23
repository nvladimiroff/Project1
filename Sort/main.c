#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
#include "extra.h"
int main()
{
	int size = 2;
	int *array=(int*) malloc(size);
	int i =0;
	int a;
	for(;scanf("%d",&a)!=EOF;i++)
	{
		if(i<size){
			array[i]=a;
		}else{
			array=(int *)realloc(array,2*size);
			size=size*2;
		}
	}

	printf("Original array:\n");
	printarray(array,i);

	printf("\nThis is Bubble Sort:");
	printf("\n");
	bubble(array,i,descending);
	bubble(array,i,ascending);
	printf("\n");

	printf("This is selection sort:\n");
	selection(array,i,descending);
	selection(array,i,ascending);
	printf("\n");
	return 0;
}
