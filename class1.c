#include<stdio.h>
//#include <conio.h>
void main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d",&year);
    if (year%4==0)
    {
        if (year%100==0)
        {
            if (year%400==0)
                printf("Year %d is a leap year.\n",year);
            else
                printf("Year %d is not leap year.\n",year);

        }
        else
            printf("Year %d is a leap year.\n",year);
    }
    else
        printf("Year %d is not a leap year.`\n",year);

}
/*
#include <stdio.h>
#include <math.h>

void main()
{
	int num,mod,e=0,o=0;
	printf("enter a number:");
	while (1)
	{
		scanf("%d", &num);
		if (num!=-1)
		{
			mod= num%2;
			switch(mod)
			{
				case 0:
					e= e+1;
					break;
				
				case 1:
					o= o+1;
					break;
			}
		continue;
		}
		else if (num==-1)
		break;
	}
	printf("\nnumber of odd entered=%d \n",o);
	printf("nnumber of even entered=%d \n",e);

}
*/