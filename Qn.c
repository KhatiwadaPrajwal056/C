#include<stdio.h>
//#include<stdlib.h>
#include<math.h>
void main(){
    float x,y,z,a;
    printf("Enter 3 numbers: ");
    scanf("%f %f %f",&x,&y,&z);
    a = x+ fabs(y-z) ;
    printf("output = %f\n",a);
}