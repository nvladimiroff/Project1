#include "extra.h"
#include <stdio.h>
#include <stdlib.h>

void printarray(int *a,int size){
	int i;
	for(i=0; i<size; i++){
		printf("%d\t", a[i]);
	}
	printf ("\n");
}

int descending(int a, int b)
{
	return b-a;
}

int ascending(int a, int b)
{
	return a-b;
}

