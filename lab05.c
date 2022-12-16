/*
#include <stdio.h>
int sum(int);
int main(){
    int num,result;
    printf("Enter numbers: ");
    scanf("%d",&num);
    result = sum(num);
    while (1){
		if (result/10==0)
		break;
		else
		result= sum(result);
	}
    printf("Sum of digits %d is %d\n", num, result);
    return 0;
}
int sum(int n){
    if (n == 0)
       return 0;
    else
        return (n % 10 + sum(n / 10));
} 
#include <stdio.h>
#include<math.h>
int sum(int);
int main(){
    int term,ans;
    printf("Enter number of terms:");
    scanf("%d",&term);
    ans=sum(term);
    printf("Required sum = %d\n", ans);
    return 0;
}
int sum(int term){
    if (term<=0){
        return 0;
    }
    else
        return (term +10 * sum(term-1) );
} */
#include <stdio.h>
int num(int);
int main(){
    int dec,ans;
    printf("Enter a decimal number: ");
    scanf("%d",&dec);
    ans=num(dec);
    printf("Its conversion to binary = %d\n", ans);
    return 0;
}
int num(int dec){
    if (dec == 0)
        return 0;
    else
        return (dec%2+10*num(dec/2));
} 