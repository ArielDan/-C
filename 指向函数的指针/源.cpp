#include<stdio.h>
int sum(int x, int y){
	int z;
	z = x + y;
	return z;
}
void main(){
	int (*p)(int ,int );	//定义指向函数的指针变量
	int a, b, c;
	p = sum;	//sum 函数的入口地址赋给指针变量p
	scanf("%d %d", &a, &b);
	c = (*p)( a,b);	//用指向函数的指针变量调用函数
	printf("a=%d,b=%d,sum=%d", a, b, c);
}

