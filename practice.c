/*
//TO find reverse of a number
include<stdio.h>

int main() {
    int n, reverse=0, remainder;
    printf("Enter the number to find its reverse:");
    scanf("%d", & n);

    while (n != 0) {

        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }
    printf("Reverse of the is %d\n", reverse);
}
*/
//To check Strong number
#include<stdio.h>
void main(){
    int num,temp,sum=0;
    printf("Enter a number to check strong number: ");
    scanf("%d",&num);
    temp=num;
    while(num!=0){
        int i=1,fact=1,r;
        r = num%10;
        for(i=1;i<=r;i++){
            fact=fact*i;
        }       
        sum = sum+fact;
        num = num/10;
    }
    if(temp==sum){
        printf("It is a strong number\n");
    }
    else
        printf("It is not a strong numner\n");

}