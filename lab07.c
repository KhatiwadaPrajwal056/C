/*
#include<stdio.h>
int main(){
    char str[10];
    int i,v=0,c=0,d=0,spaces=0,specialChar=0;
    printf("Enter a line of text: ");
    gets(str);
    for(i=0;str[i]!='\0';i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||str[i]=='o' || str[i]=='u' || str[i]=='A' ||str[i]=='E' || str[i]=='I' || str[i]=='O' ||str[i]=='U'){
            v++;
        }
        else if((str[i]>='a'&& str[i]<='z') || (str[i]>='A'&& str[i]<='Z')){
            c++;
        }
        else if(str[i]>='0' && str[i]<=9){
            d++;
        }
        else if (str[i]==' '){
            spaces++;
        }
        else
            specialChar++;   
    }
    printf("Vowels in the text = %d\n",v);
    printf("Consonants in the text  = %d\n",c);
    printf("Digits in the text = %d\n",d);
    printf("White spaces in the text = %d\n",spaces);
    printf("Special characters in the text = %d\n",specialChar); 
    return 0;
} 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//function to display array
void display(char array[][30]){
    int size_of_arrray;
  for(int i=0; i<size_of_array; i++){
    printf("%s ", array[i]);
  }
  printf("\n");
}
 
int main()
{
  //create an array of strings
  char array[size_of_array][30];

  //Inputting names
  printf("Enter %d Strings: \n", size_of_array);
  for(int i=0; i<size_of_array; i++){
    scanf("%s", array[i]);
  }

  //display the original array
  printf("Original array: ");
  display(array);

  char temp[30];

  //Sort array using the Buuble Sort algorithm
  for(int i=0; i<size_of_array; i++){
    for(int j=0; j<size_of_array-1-i; j++){
      if(strcmp(array[j], array[j+1]) > 0){
        //swap array[j] and array[j+1]
        strcpy(temp, array[j]);
        strcpy(array[j], array[j+1]);
        strcpy(array[j+1], temp);
      }
    }
  }

  //display the sorted array
  printf("Sorted Array: ");
  display(array);

  return 0;
}  
#include<stdio.h>
#include <string.h>
int word(char [][10],int);
int main(){
    char name[10][10];
    int i,n;
    printf("Number of words?: ");
    scanf("%d", &n);
    printf("Enter %d words:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%s", name[i]);
    }    
    word(name,n);
    return 0;
}
int word(char name[][10],int n){
    int i,j;
    char temp[10][10];
    for (i = 0; i < n ; i++){
        for (j = i + 1; j < n; j++){
            if (strcmp(name[i], name[j]) > 0) {
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);
            }
        }
    }
    printf("Sorted names:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", name[i]);
    }
}

#include <stdio.h>
#include <string.h>
void compare(char [][15],int);
int main()
{
	char str[15][15];
	int i,n;
	printf("enter number of words:");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("enter word:");
		scanf("%s",str[i]);
	}
	compare(str,n);
	return 0;
}
void compare(char s[][15],int n)
{
	int i,j,temp[15][15];
	for (i=0;i<n;i++)
	{
		for (j=i+1;j<n;j++)
		{
			if (strcmp(s[i],s[j]) >0)
			{
				strcpy(temp,s[i]);
				strcpy(s[i],s[j]);
				strcpy(s[j],temp);
			}
	
		}
	}
	for (i=0;i<n;i++)
	{
		printf("%s",s[i]);
		printf("\n");
	}
}  
#include <stdio.h>
int compare(char [10],char[10]);
int main()
{
	char a[10],b[10];
	int c;
	printf("enter first word:");
	scanf("%s",a);
	printf("enter second word:");
	scanf("%s",b);
	c= compare(a,b);
	if (c>0)
	printf("the order is: \n%s\n%s",b,a);
	else if(c<0)
	printf("the order is:\n%s\n%s",a,b);
	else 
	printf("both words are same");
	return 0;
}
int compare(char a[10], char b[10] )
{
	int i=0,x,y;
	while (1)
	{
		x = a[i];
		y = b[i];
		if (x-y >0)
		{
			return 1;
			
			break;
		}
		else if (x-y <0)
		{
			return -1;
			break;
		}
		i= i+1;
	}
} */
#include <stdio.h>
int main()
{
    char line[100];
    int i,vowel=0, cons=0, space=0, dig=0, spchar=0;
    printf("Enter a line:");
    gets(line);
    for (i=0; line[i]; i++)
    {
        if(line[i]=='a' || line[i]=='e' || line[i]=='i' || line[i]=='o' || line[i]=='u' || line[i]=='A' || line[i]=='E' || line[i]=='I' || line[i]=='O' || line[i]=='U')
        {
            vowel++;
        }
        else if (line[i]>='a' && line[i]<='z' || line[i]>='A' && line[i]<='Z')
        {
            cons++;
        }
        else if (line[i]>='0' && line[i]<='9')
        {
            dig++;
        }
        else if (line[i]==' ')
        {
            space++;
        }
        else
        {
            spchar++;
        }
    }
    printf("\n The no. of the vowels is:%d", vowel);
    printf("\n The no. of the consonants is:%d", cons);
    printf("\n The no. of the digits is:%d", dig);
    printf("\n The no. of the white spaces is:%d", space);
    printf("\n The no. of the special character is:%d", spchar);
    return 0;
}


