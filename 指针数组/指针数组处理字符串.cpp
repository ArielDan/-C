#include<stdio.h>
#include<string.h>

int search(char *str,char  *keywords[], int n){
	int i, j, k;
	for ( i = 1; i <=n; i++)
	{
		if (strcmp(str,keywords[i])==0)
		{
			return i;
		}
	}
	return 0;
}
void main(){
	int i;
	char keystr[10];
	char *keywords[8],*id=keystr;

	//赋值指针数组
	keywords[1] = "Monday";
	keywords[2] = "Tuesday";
	keywords[3] = "Wednesday";
	keywords[4] = "Thursday";
	keywords[5] = "Friday";
	keywords[6] = "Saturday";
	keywords[7] = "Sunday";
	printf("input a keyword:");
	scanf("%s", id);
	i = search(id, keywords, 7);
	if (i==0)
	{
		printf("Not Found!\n");
	}
	else{
		printf("Found i=%d\n", i);
	}

}