
#include <stdio.h>
#include <math.h>
int main (){
    int a,b=0,sum=0;
    float avg;
    while (1){
        printf("Enter a positive integer: ");
        scanf("%d",&a);
        if(a<0){
        }
        else if(a==0){
            break;
        }
        else if(a%2==0){
            b++;
            sum=sum+a;
        }
    }
    if (b==0){
        printf("No any positive even number entered,So average is indeterminant.\n");hhhghghghghghgjyoiuytrkan077bct056@kec.edu.npkan077bct056@kec.edu.npkan077bct056@kec.edu.npkan077bct056@kec.edu.npkan077bct056@kec.edu.npkan077bct056@kec.edu.npkan077bct056@kec.edu.npkan077bct056@kec.edu.npkan077bct056@kec.edu.npkan077bct056@kec.edu.npkan077bct056@kec.edu.npkan077bct056@kec.edu.npkan077bct056@kec.edu.npkan077bct056@kec.edu.npkan077bct056@kec.edu.np
    }
    else{
        avg=sum/b;
        printf("Average of even numbers = %.2f\n",avg);
    }

}