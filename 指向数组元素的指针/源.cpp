#include<stdio.h>
void main(){
	int a[5] = { 100, 200, 300, 400, 500 };
	int *p1, *p2, *p3;
	p1 = a;
	p2 = &a[2];
	printf("pointer value :");
	printf("p1=%p	,*p1=%d	,&p1=%p\n", p1, *p1, &p1);
	//ָ��ӷ�
	p3 = p1 + 4;
	printf("\nAdding an int to a pointer:");
	printf("p1+4=%p	,*(p1+3)=%d\n", p1 + 4, *(p1 + 3));
	//ָ������
	p1++;
	printf("\nvalue after p1++:");
	printf("p1=%p	,*p1=%d	,&p1=%p\n", p1, *p1, &p1);
	//ָ���Լ�
	--p2;
	printf("\nvalue after --p2:");
	printf("p2=%p	,*p2=%d	,&p2=%p\n", p2, *p2, &p2);
	//�ָ���ʼֵ
	--p1;
	++p2;
	printf("\nreset pointer value to original values:");
	printf("p1=%p,p2=%p", p1, p2);
	//ָ�����
	printf("\nSubtracting one pointer from another:");
	printf("p2=%p	,p1=%p	,p2-p1=%d\n", p2, p1, p2 - p1);
	//ָ���ȥһ������
	printf("\nSubtracting a int from pointer:");
	printf("p3=%p	,p3-2=%p\n", p3, p3 - 2);
}