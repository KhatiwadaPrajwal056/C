/*
#include <stdio.h>

int main()
{
    float c,f;
    printf("Enter the temperature in celsius: ");
    scanf("%f", &c);
    f=((c*9)/5+32);
    printf("Temperature in fahrenheit is: %f\n", f);
    return 0;
}  */

#include<stdio.h>
#include<math.h>
void main(){
    float k,p ;
    printf("Enter a weight in kg: ");
    scanf("%f",&k);
    p = k*2.2 ;
    printf("Weight in pound is %f\n",p);
}