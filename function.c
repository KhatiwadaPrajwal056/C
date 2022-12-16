/*
#include <stdio.h>
#include<math.h>
float ar(float,float,float);        

void main()
{
    float n1,n2,n3,area;

    printf("Enter three numbers: ");
    scanf("%f %f %f",&n1,&n2,&n3);
    area = ar(n1,n2,n3);       
}

float ar(float n1,float n2,float n3)
{           
    if ((n1+n2)>n3 && (n2+n3)>n1 && (n1+n3>n2))

    {   float area,s;
        s=(n1+n2+n3)/2 ;
        area = sqrt(s*(s-n1)*(s-n2)*(s-n3));
        printf("Area of triangle = %f\n",area);
        return 0 ;
    }        
    else 
    {
        printf("Triangle doesnot exists,Enter the correct values.\n")  ;          
    }
}
*/