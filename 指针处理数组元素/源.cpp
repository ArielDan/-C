//����������������Ԫ�غ�

#include<stdio.h>
int a[10];
int i, sum = 0;
//�±귨
void fun1(){
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
		sum += a[i];
	}
	printf("\nsum=%d\n", sum);
}

//ָ�뷨
void fun2(){
	for ( i = 0; i < 10; i++)
	{
		scanf("%d", a + i);		//ʹ����������������Ԫ��	a+i�ȼ���&a[i]
		sum += *(a + i);	//*(a + i)��ʾa[i]��ֵ
	}
	printf("\nsum=%d\n", sum);
}

//ָ�뷨
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
	
	printf("please input pinter values:��10��");
	fun3();
}
