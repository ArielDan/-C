#include<stdio.h>
void change(int *p, int *q){
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
}
void main(){
	int x = 3, y = 5;
	change(&x, &y);
	printf("Chnaged:x=%d,	y=%d",x,y);
}