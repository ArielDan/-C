#include<stdio.h>
//����һ��ָ������color����ʼ����color�е�ÿ��Ԫ�طֱ�ָ��5���ַ����е�һ��
void main(){
	char *color[] = { "red", "yellow", "blue", "black", "green", "white" };//C�����У��ַ���ͨ���ַ�����洢
	char **p;	//����ָ��ָ�����ݵ�ָ�����
	for (int i = 0; i < 5; i++)
	{
		p = color + i;		//p��ָ��ָ���ָ�����������ָ��5���ַ���
		printf("%s\n", *p);
	}
}