#include<stdio.h>
int main(int argc ,char *argv[])
{
	int v,d,i,j=65;
	v=atoi(argv[1]);
	char arr[26];
	for(i=0;i<26;i++)
	{
		arr[i]=j;
		j+=1;
	}
	if(v<54)
	{
	if(v>26)
	{
		d=v-26;
		for(i=0;i<d;i++)
		{
			printf("%c",arr[i]);
		}
	}
	else
	{
	printf("%c",arr[v-1]);
	}
	}
	else
	{
		printf("ALL");
	}
}
