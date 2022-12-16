/*
#include<stdio.h>
#include<math.h>
int npr(int);
int ncr(int);
int fac(int);

void main()
{    
    int n, r;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter r: ");
    scanf("%d", &r);
    if (n>=r){
        printf("Permutation = %d\n",n,r, npr(n,r));    
        printf("Combination = %d\n",n,r, ncr(n,r));
    }
    else 
        printf("WRONG INPUT,Please enter the correct values.\n"); 
}
int npr(int n, int r)
{
    return fac(n) / fac(n-r);
}
int ncr(int n, int r)
{
    return npr(n, r) / fac(r);
}
int fac(int num)
{
    int fac = 1;
    while(num > 0)
    {
        fac *= num;
        num--;
    }
    return fac;
} 
*/
#include <stdio.h>
#include <math.h>
int f(int);
void main()
{
	int a,b;
	printf("Enter number of terms for fibonnaci series: ");
	scanf("%d",&a);
	for (b=1;b<=a;b++)
	{
		printf("%d  ",f(b));
	}
}

int f(c)
{
	if (c==1 || c==2)
	{
		return c-1;
	}
	else if (c>2) 
	{
		return f(c-1) + f(c-2);
	}
	else
	printf("Invalid input!\n");
}

/*
#include <stdio.h>
#include <math.h>
int swapping(int *, int *);
void main() {
    int a, b, c;

    printf("Enter a & b: ");
    scanf("%d %d", &a, &b);
    printf("Value before swapping:\n");
    printf("a = %d \nb = %d \n", a, b);
    swapping(&a, &b);
    printf("Value after swapping:\n");
    printf("a = %d \nb = %d \n", a, b);
}

int swapping(int *n1, int *n2) {
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
} 
#include <stdio.h>
int main() {
   int rows, coef = 1, space, i, j;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 0; i < rows; i++) {
      for (space = 1; space <= rows - i; space++)
         printf("  ");
      for (j = 0; j <= i; j++) {
         if (j == 0 || i == 0)
            coef = 1;
         else
            coef = coef * (i - j + 1) / j;
         printf("%4d", coef);
      }
      printf("\n");
   }
   return 0;
}

#include<stdio.h>
int f(int);
int main(){
    int a, b, c;
    printf("Enter the rows for pascal triangle: ");
    scanf("%d",&b);
    for ( a = 0 ; a < b; a++ ){
        for ( c = 0 ; c <= ( b - a - 2 ) ; c++ )
        printf(" ");
        for( c = 0 ; c <= a ; c++ )
            printf("%d ",f(a)/(f(c)*f(a-c)));
            printf("\n");
    }
    return 0;
}
int f(int b){
    int c;    
    int result = 1;
    for( c = 1 ; c <= b; c++ )
    result = result*c;
    return ( result);
}
*/