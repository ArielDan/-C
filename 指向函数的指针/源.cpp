#include<stdio.h>
int sum(int x, int y){
	int z;
	z = x + y;
	return z;
}
void main(){
	int (*p)(int ,int );	//����ָ������ָ�����
	int a, b, c;
	p = sum;	//sum ��������ڵ�ַ����ָ�����p
	scanf("%d %d", &a, &b);
	c = (*p)( a,b);	//��ָ������ָ��������ú���
	printf("a=%d,b=%d,sum=%d", a, b, c);
}

