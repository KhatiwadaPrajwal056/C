#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,s,area ;
    printf("Enter 3 sides of a triangle: ");
    scanf("%f %f %f",&a,&b,&c);
    if ((a+b)>c && (b+c)>a && (a+c)>b)
    {
        s = (a+b+c)/2 ;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        printf("The are of triangle is %f \n", area);
    }
    else
    {
        printf("given value doesnot form a traingle \n");
    }
}