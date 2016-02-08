#include<stdio.h>

void operate(int x,int y,int (*funC)(int,int)){
	int result;
	result = (*funC)(x, y);
	printf("%d\n", result);
}

int sum(int x, int y){
	return x + y;
}

int sub(int x, int y){
	return x - y;
}

int mul(int x, int y){
	return x*y;
}

int div(int x, int y){
	return x / y;
}
void main(){
	int x, y;
	printf("please input x and y:");
	scanf("%d,%d", &x, &y);
	printf("sum=");
	operate(x, y, sum);	//sum函数的入口地址传给operate
	printf("sub=");
	operate(x, y, sub);

}