/*
#include<stdio.h>
#include<math.h>
void main (){
    float cod1,cod2;
    printf("Enter the two coordinates x,y: ");
    scanf("%f,%f",&cod1,&cod2);
    if (cod1>0 && cod2>0)
        printf("This coordinate of a rectangle lies in first quadrant\n");
    else if (cod1<0 && cod2>0)
        printf("This coordinate of a rectangle lies in second quadrant\n"); 
    else if (cod1<0 && cod2<0)
        printf("This coordinate of a rectangle lies in third quadrant\n"); 
    else if (cod1>0 && cod2<0)
        printf("This coordinate of a rectangle lies in fourth quadrant\n"); 
    else if (cod1>0 && cod2==0)
        printf("This coordinate of a rectangle lies in X-axis\n"); 
    else if (cod1==0 && cod2>0)
        printf("This coordinate of a rectangle lies in Y-axis\n"); 
    else
        printf("This coordinate of a rectangle lies in origin\n"); 
}


#include <stdio.h>
#include <math.h>

void main()
{
        int n,i=0,sum=0,j=0,m;
        printf("Enter the value of n:");
        scanf("%d", &n);
        m= fabs(n);
		if(n>0)
		{
			for(i=n;i<=2*n;i++)
			{
                sum= sum+i;
                if(i<(2*n)){
                printf(" %d +",i);
                }
                else
                printf(" %d",i);
		    }
		}
		else if(n<0)
		{
			for(j=(2*m);j>=m;j--)
			{
                sum=sum+j;
                if(j>m){
                printf(" %d +",j);
                }
                else 
                printf(" %d",j);
			}
	    }
	printf(" =%d",sum);
} */



#include <stdio.h>
#include <math.h>

void main()
{
	int n,i,j,k,sum=0;
	printf("enter a number:");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
            if (i%2==1)
            {
                j=1;
            }
            
            else if (i%2==0)
            {
                j=-1;	
            }
        k= j * i*i;
        sum= sum+ k ;
	}
	printf("the sum is: %d\n", sum);

}

