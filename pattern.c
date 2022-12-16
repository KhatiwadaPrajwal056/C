#include<stdio.h>
int main()
{
	int n;
	int i=1;
	scanf("%d",&n);
	int num=n;
	while(n>0)
	{
	    for(i=1;i<=num;i++)
	    {
	    printf("%d ",i);
	    }
	    printf("\n");
	    n--;
	}
} 