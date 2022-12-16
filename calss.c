/*
#include<stdio.h>
#include<math.h>
void main (){
    long int a,i=0,b=0,c=0,sum=0;
    float avg=0;
    printf("Enter numbers: ");
    while(1){
        scanf("%ld",&a);
        for(i;i<=10;i++){
            if (a<0){
            }
            else if(a%9==1 && a&&6==0){
                c++;
            }
            else if(a%9==0&&a<100){
                b++;
                sum=sum+a;
        }   }
        for(i=0;i>10;i++){
            if (i>10){
                printf("You have entered %d numbers. Would you like to enter more? ",i);
                scanf("%d",&i);
            }
            if (a<0){
            }
            else if(a%9==1&&a&6==0){
                c++;
            }
            else if(a%9==0&&a<100){
                b++;
                sum=sum+a;
        }   }
    }
    if (b==0){
        printf("No any number entered that is divisible by 9\n");
        printf("Sum = %ld\n",sum);
    }
    else{
        avg=sum/b;
        printf("Sum of numbers divisible by 9 = %ld\n",sum);
        printf("Avg of numbers divisible by 9 = %.2f\n",avg);
    }
} */
#include<stdio.h>
#include<math.h>

void main()
{
    int a[20][20], b[20][20], c[20][20], row1, row2, col1, col2, i, j, k;
    printf("Enter the no. of rows and columns for the first matrix: ");
    scanf("%d %d", &row1, &col1);
    printf("Enter the no. of rows and columns for second matrix: ");
    scanf("%d %d", &row2, &col2);
    if(col1 == row2)
    {
        printf("Enter the elements for first matrix: ");
        for(i=0;i<row1;i++)
        {
            for (j=0;j<col1;j++)
            {
                printf("A[%d][%d]:",i,j);
                scanf("%d", &a[i][j]);
            }
        }

        printf("Enter the elements for second matrix: ");
        for(i=0;i<row2;i++)
        {
            for (j=0;j<col2;j++)
            {
                printf("B[%d][%d]: ", i, j);
                scanf("%d", &b[i][j]);
            }
        }
        for(i=0; i<row1; i++)
        {
            for(j=0; j<col2; j++)
            {
                c[i][j]=0;
                for(k=0; k<col1; k++)
                {
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        for(i=0; i<row1; i++)
        {
            for(j=0; j<col2; j++)
            {
                printf("%d\t "), c[i][j];
            }
            printf("\n");
        }
    }
    else
    {
        printf("Invalid rows and columns!\n");
    }

} /*
#include<stdio.h>
#include<math.h>
void main()
{
	int a1[20][20] , a2[20][20] ,a3[20][20],i,j,k,m,n,p,q;
	printf ("No. of rows and column for matrix A:");
	scanf ("%d %d",&n,&m);
	printf ("No. of rows and column for matrix B:");
	scanf ("%d %d",&q,&p);
	
	if ( m == q)
	{
		printf ("Enter the element of array A:\n");
		for (i=0 ; i<n; i++)
		{
			for (j=0;j <m;j++)
			{
				printf ("Element of [%d][%d]",i,j);
				scanf ("%d",& a1[i][j]);
		
			}
		}
		printf ("Enter the element of array B:\n");
		for (i=0 ; i<q; i++)
		{
			for (j=0;j <p;j++)
			{ 
				printf ("Element of [%d][%d]",i,j);
				scanf ("%d",& a2[i][j]);
			}
		}
		for (i=0 ; i<n; i++)
		{
			for (j=0;j<p; j++)
			{
				a3[i][j]=0;
				for (k=0; k<m; k++)
				{
					a3[i][j]+=a1[i][k]*a2[k][j];
		    	}
			
			}
		}
		for (i=0 ; i<n; i++)
		{
			for (j=0;j<p; j++)
			{
				printf ("%d\t",a3[i][j]);
			}
			printf ("\n");
    	}
	}
	else
	{
		printf ("Invalid rows and coloumns.");
	}
} */

