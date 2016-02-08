#include<stdio.h>
void main(){
	int i;
	int a[] = {1,2,3,4};
	int b[] = { 2, 3, 4, 5 };
	int c[] = { 3, 4, 5, 6 };
	int *p[3];
	p[0] = a;
	p[1] = b + 1;
	p[2] = c + 2;
	for (int  i = 0; i < 3; i++)
	{
		printf("%3d\n", **(p + i));
	}
}