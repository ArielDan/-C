#include<stdio.h>
int* max(int *p, int *q){
	if (*p>*p)
	{
		return p;
	}else
	{
		return q;
	}
}
void main(){
	int *pointer, x, y;
	x = 3;
	y = 5;
	pointer = max(&x, &y);
	printf("%d\n", *pointer);
}