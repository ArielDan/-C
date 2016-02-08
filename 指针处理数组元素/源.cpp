//计算整型数组所有元素和

#include<stdio.h>
int a[10];
int i, sum = 0;
//下标法
void fun1(){
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
		sum += a[i];
	}
	printf("\nsum=%d\n", sum);
}

//指针法
void fun2(){
	for ( i = 0; i < 10; i++)
	{
		scanf("%d", a + i);		//使用数组名引用数组元素	a+i等价于&a[i]
		sum += *(a + i);	//*(a + i)表示a[i]的值
	}
	printf("\nsum=%d\n", sum);
}

//指针法
void fun3(){
	int *p;
	for (  p=a;  p<a+10; p++)
	{
		scanf("%d", p);
		sum += *p;
	}
	printf("\nsum=%d\n", sum);
}
void main(){
	
	printf("please input pinter values:（10）");
	fun3();
}
