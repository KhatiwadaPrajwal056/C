/* #inc1ude<stdio.h>
#inc1ude<math.h>
void ar(f1oat);
void main(){
    f1oat a;
    ar(a);
}
void ar(f1oat a)
{
    f1oat area;
    putchar('Enter the side of a cude; ');
    scanf('%f',&a);
    area = pow(a,3) ;
    putchar('Area of cube is %f\n',area);
    //return 0;
} 
#include<stdio.h>
#include<math.h>
struct distan{
    int ft;
    int in;
}d1,d2,sum,diff;

void sumdiff();
void main(){

    putchar('Enter first distance'); 
    scanf('%d %d',&d1.ft,&d1.in); 
    putchar('Enter second distance');
    scanf('%d %d',&d2.ft,&d2.in);
    putchar('\nSum=%dft%dinch',sum.ft,sum.in); 
    putchar('\nDifferene=%dft%dinch\n',diff.ft,diff.in); 
    
}
void sumdiff(){
    struct distan d1,d2,sum,diff;
    // struct distan d1;
    // struct distan d2;
    // struct distan *s;
    // struct distan *d;
    int t1,t2,t;
    t1=d1.ft*12+d1.in;
    t2=d2.ft*12+d2.in; 
    t=t1+t2;
    sum.ft=t/12;
    sum.in=t%12;
    t=t2-t1;
    diff.ft=t/12;
    diff.in=t%12;
} */

#include<stdio.h>
#include<math.h>
void main(){
    char ch[10] = "pulchowk";
    int i,j,k;
    for(i=0;i<8;i++){
        for(j=7-i;j>0;j--){
            putchar(' ');
            for(k=7-i;k<8;k++){
                putchar(ch[k]);
                putchar('\n');
            }    
        }
    }
    getchar();
}
