/*
//PATTERN PRINTING

#include <stdio.h>
#include<string.h>
int main (){
    char str[] = "NepaL";
    int i , j,space;
    for (i=0;i<5;i++){
        for (space=0;space<(5-i);space++){
            printf("  ");
        }
        for(j= 0;j<=(2*i);j++){
            printf("%c ",str[i]);
           // printf("\n");
           //printf("*");
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main()
{
  // variable
  char str[]= "NEPAL";

  // take input
  // printf("Enter a string: ");
  // scanf("%s",str);

  // print pattern
  // outer loop for row
  for(int i=0; i<5; i++)
  {
    // inner loop for column
    for(int j=0; j<=i; j++)
    {
      // display
      printf("%c", str[j]); 
    }

    printf("\n"); // new line
    
  }
  for(int i=1; i<5; i++){
    for(int j=i; j<5; j++){
      printf("%c", str[j]); 
    
    }
    printf("\n"); // new line
  }

  return 0;
*/

// #include<stdio.h>
// void main(){
//   char str[] = "NEPAL";
//   for(int i = 1;i<=5;i++){
//     for (int j=5;j>i;j--){
//       putchar('  ');
//     }
//     for(int j=5-i;j<5;j++){
//       printf("%c", str[j]); 
//     }
//     printf("\n");

//   }
//   for(int i = 1;i<5;i++){
//     for (int j=0;j<i;j++){
//       putchar('  ');
//     }
//     for(int j=i;j<5;j++){
//       printf("%c", str[j]); 

//     }
//     printf("\n");

//   }
// }


#include<stdio.h>
void main (){
    char str[] = "pulchowk";
    int i , j,k;
    for (i=8;i>0;i--){
        for (j=0;j<i;j++){
            putchar(' ');
        }
        for(k= i-1;k<8;k++){
          putchar(str[k]);
           // printf("\n");
           //printf("*");

        }
        printf("\n");

    }
   // return 0;
}