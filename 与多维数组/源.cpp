#include<stdio.h>
#include<Windows.h>
//4行3列数组，输出各元素值
int a[4][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 }, { 10, 11, 12 } };

//下标法
void fun1(){
	int row, col;
	for (row = 0; row < 4; row++)
	{
		for (col = 0; col < 3; col++)
		{
			printf("%3d", a[row][col]);
			if ((col + 1) % 3 == 0)	//	每行输出3个
			{
				printf("\n");
			}
		}
	}
}

void fun2(){
	int *p;
	for ( p = a[0]	; p < a[0]+12	; p++)
	{
		if ((p-a[0])%3==0)
		{
			printf("\n");
		}
		printf("%4d", *p);
	}
	printf("\n");
	system("pause");
}
void main(){
	fun2();
}