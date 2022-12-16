/*

#include<stdio.h>
#include<math.h>
void main(){
    int a;
    printf("Enter a positive integer: ");
    scanf("%d",&a);
    switch(a%2){
        case(0):
         printf("Entered number is even\n");
        break;

        case(1):
            printf("Entered number is odd\n");
        break;
        
        default:
            printf("Error\n");
        break;
    }
} 
#include<stdio.h>
#include<math.h>
#include<ctype.h>
void main (){
    char c;
    //char a,e,i,o,u,A,E,I,O,U;
    printf("Enter a character: ");
    scanf("%c",&c);
    if (!isalpha(c)){
      printf("Error! Non-alphabetic character.\n");
    }
    else if(c=='a' && c=='e' && c=='i' && c=='o' && c=='u' && c=='A' && c=='E' && c=='I' && c=='O' && c=='U'){
        printf("%c Character is Vowel.\n",c);
    }
    else
        printf("Character is Consonant.\n");
} 

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


#include<stdio.h>
#include<math.h>
void main(){
    float amt,tax;
    printf("Enter an amount: ");
    scanf("%f",&amt);
    if (amt>175000){t6
        tax=0.25*amt;
        printf("Tax to be paid is %f\n",tax);
    }
    else if (amt>100000 && amt<=175000){
        tax=0.15*amt;
        printf("Tax to be paid is %f\n",tax);
    }
    else
        printf("No taxable amount\n");
}

#include<stdio.h>
#include<math.h>
void main(){
    int a,q,amt;
    printf("  DEPPARTMENTAL STORE");
    printf("\n S.N\tItem\tPrice\(Rs.\)");
    printf("\n  1 \tBread\t30");
    printf("\n  2\tJam\t90");
    printf("\n  3\tButter\t120\n");
    printf("Please enter your choice \(1,2 or 3\): ");
    scanf("%d",&a);
    printf("Quantity: ");
    scanf("%d",&q);
    if (a==1){
        amt = q*30;
        printf("Your total cost is Rs.%d\n",amt);
    }
    else if (a==2){
        amt = q*90;
        printf("Your total cost is Rs.%d\n",amt);
    }
    else if (a==3){
        amt = q*120;
        printf("Your total cost is Rs.%d\n",amt);
    }
    else
        printf("Iteam unavailabe\n");
} */

#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,p,Root1,Root2,real,img;
    printf("Give the coefficients of the quadratic equation\n");
    printf("a=");
    scanf("%f",&a);
    printf("b=");
    scanf("%f",&b);
    printf("c=");
    scanf("%f",&c);
    p=b*b-4*a*c ;
    if (p<0){ 
        printf("The roots of equation %.2lfx^2+%.2lfx+%.2lf=0 are imaginary.\n",a,b,c);
        real=(-b)/(2*a) ;
        img=sqrt(fabs(p))/(2*a) ;
        printf("Root1 = %.2lf-%.2lfi\n",real,img); 
        printf("Root2 = %.2lf+%.2lfi\n",real,img);
    }
    else if(p==0){
        printf("The roots of equation %fx^2+%fx+%f=0 are real and equal\n",a,b,c);
        Root1= Root2= (-b)/(2*a) ;
        printf("Root1 = Root2 = %.2lf\n",Root1);
    }
    else {
        printf("The roots of equation %fx^2+%fx+%f=0 are real and unequal\n",a,b,c);
        Root1=(-b+sqrt(p))/2*a ;
        Root2=(-b-sqrt(p))/2*a ;
        printf("Root1 = %.2lf\n",Root1);
        printf("Root2 = %.2lf\n",Root2);        
    }

} 
