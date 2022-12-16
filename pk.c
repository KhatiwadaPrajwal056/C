#include <stdio.h>
int main(){
    int a=2,b=3,c;
    a = (b++) + (++b) + a;
    printf("%d %d %d\n",a,b,c);
    c = a>b?a:b;
    printf("%d %d %d\n",a,b,c);
    b = (a++) + (b--) + a ;
    printf("%d %d %d\n",a,b,c);
    c = c++ * b--;
    printf("%d %d %d\n",a,b,c);
}