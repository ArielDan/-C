#include<stdio.h>
//定义一个指针数组color，初始化后color中的每个元素分别指向5个字符串中的一个
void main(){
	char *color[] = { "red", "yellow", "blue", "black", "green", "white" };//C语言中，字符串通过字符数组存储
	char **p;	//定义指向指针数据的指针变量
	for (int i = 0; i < 5; i++)
	{
		p = color + i;		//p是指向指针的指针变量，依次指向5个字符串
		printf("%s\n", *p);
	}
}