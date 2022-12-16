
/*
#include <stdio.h>
#include<math.h>
void main(){
    int n,i=0,j=0,p,sum=0;
    printf("Enter a number: ");

    scanf("%d",&n);

    if(n>0){
        for(i=n;i<=2*n;i++){
            sum=sum+i;
            if(i<(2*n)){
                printf("%d+",i);
            }
            else
                printf("%d",i);
        }
    }
    else if(n<0){
        p=fabs(n);
        for(j=2*p;j>=p;j--){
            sum=sum+j;
            if(j>p){
                printf("%d+",j);
            }
            else
                printf("%d",j); 
        } 
    }
    printf(" = %d\n",sum);

} 
#include <stdio.h>
#include <math.h>

int main()
{
    int i=1, num, square1, square2, sum1=0, sum2=0, sum;
    printf("Enter a number:");
    scanf("%d",&num);
    while (i<=num)
    {
        if (i%2!=0)
        {
            square1=i*i;
            sum1 = sum1 + square1;
            i++;
        }
        else
        {
            square2=i*i;
            sum2 = sum2 + square2;
        }

    }
    sum = sum1 - sum2;
    printf("%d",sum);

    return 0;
} 

#include <stdio.h>
#include <math.h>
void main (){
    int a,b=0,c=0;

    while (1){
        printf("Enter a number: ");

        scanf("%d",&a);
        if(a==-1){
            break;
        }
        else if(a%2==0){
            b++;
        }
        else if(a%2==1){
            c++;
        }
    }
    printf("Total Even numbers = %d\n",b);
    printf("Total Odd numbers = %d\n",c);
}
*/

