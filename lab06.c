/*#include <stdio.h>
void main(){
    int arr1[100];
    int n, i, j, tmp;
    printf("Input the size of an array : ");
    scanf("%d", &n);
	printf("Enter numbers: ",i);
       for(i=0;i<n;i++){
	      scanf("%d",&arr1[i]);
	    }
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(arr1[j] <arr1[i]){
                tmp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = tmp;
            }
        }
    }
    printf("Numbers in ascending order: ");
    for(i=0; i<n; i++){
        printf("%d  ", arr1[i]);
    }
}
#include <stdio.h>
void main(){
  int n, c, d, a[100], b[100];
  printf("Enter the number of elements in array: ");
  scanf("%d", &n);
  printf("Enter array elements: ");
  for (c = 0; c < n ; c++)
    scanf("%d", &a[c]);
  for (c = n - 1, d = 0; c >= 0; c--, d++)
    b[d] = a[c];
  for (c = 0; c < n; c++)
    a[c] = b[c];
  printf("Reversed array: ");
  for (c = 0; c < n; c++)
    printf("%d", a[c]);
} 
#include <stdio.h>
void main() {
  int i,j,a[10][10], transpose[10][10], r, c;
  printf("Enter rows and columns: ");
  scanf("%d %d", &r, &c);
  for (int i = 0; i < r; i++)
  for (j = 0; j < c; j++){
    printf("Enter element of a matrix a%d%d: ", i + 1, j + 1);
    scanf("%d", &a[i][j]);
  }
  for (i = 0; i < r; i++)
  for (j = 0; j < c; j++){
    transpose[j][i] = a[i][j];
  }
  printf("\nTranspose of a matrix:\n");
  for i = 0; i < c; i++)
  for (int j = 0; j < r; j++){
    printf("%d  ", transpose[i][j]);
    if (j == r - 1)
    printf("\n");
  }
} 
#include<stdio.h>
    int main(){
 		int arr[100];
        int i,j,swap,n; 
        printf("Enter the size of an array: ");
        scanf("%d",&n);
        printf("Enter elements of an array: ");
        for (i=0;i<n;i++)
            scanf("%d",&arr[i]);
	for (i=0;i<=n/2;i++){
			swap = arr[i];
			arr[i]=arr[n-i-1];
		    arr[n-i-1]=swap;
	}
	printf("Reversed arrays: ");
        for (i=0;i<n;i++)
            printf("%d", arr[i]);
    return 0;
}*/


