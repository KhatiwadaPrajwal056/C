/*
#include <stdio.h>
#include <math.h>
typedef struct length{
	int f;
	int i;
}l;
void sum (l , l);
void diff (l, l);
int main()
{
	int s,d;
	l l1,l2;
	printf("First length in feet & inch: ");
	scanf ("%d%d",&l1.f,&l1.i);
	printf("Second length in feet & inch:");
	scanf ("%d%d",&l2.f,&l2.i);
	sum(l1,l2);
	diff(l1,l2);
	return 0;
}
void sum(l d1,l d2)
{
	l d3;
	int i;
	i = (d1.f * 12 + d1.i) + (d2.f *12 + d2.i);
	d3.f = i/12;
	d3.i = i%12;
	printf("Sum of length : %d feet %d inch\n",d3.f,d3.i);
}
void diff (l d1,l d2)
{
	l d3;
	int i;
	i = abs ((d1.f * 12 + d1.i) - (d2.f *12 + d2.i));
	d3.f = i/12;
	d3.i = i%12;
	printf("Difference of length : %d feet %d inch",d3.f,d3.i);
	
} 
#include <stdio.h>
#include <math.h>
#include <string.h>
typedef struct batsman {
	char name[100];
	int run;
	int dismissal;
	float avg;
}bat;
void cricket(bat []);
int main()
{
	int i;
	bat b[10];
	for (i=0;i<5;i++)
	{
		printf ("Name of player no.%d:",i+1);
		scanf ("%s",b[i].name);
		printf ("Run scored by player no.%d:",i+1);
		scanf("%d",&b[i].run);
		printf("Number of dismissals of player no.%d:",i+1);
		scanf("%d",&b[i].dismissal);
	}
	for (i=0;i<5;i++)
	{
	b[i].avg = (float)b[i].run / b[i].dismissal;
	}
	cricket(b);
	return 0;
}
void cricket(bat b[])
{
	int i;
	char a[20];
	printf("Enter the name of a player to get his/her avg stats:");
	scanf("%s",a);
	for (i=0;i<5;i++)
	{
		if (strcmp(b[i].name,a)==0)
		{
			printf("Batting average of %s:%f",a,b[i].avg);
            break;
		}
	}
    if (i==5){
        printf("No such player found");
    }
}

#include<stdio.h>
#include<string.h>
struct student{
	char name[10];
	int roll;
    float mark;
};
void main(){ 
	int i,a=0;
	struct student stu[5];
	for(i=0;i<5;i++){
        printf("Name of student no.%d: ",i+1);
        scanf("%s",stu[i].name);
        printf("Roll:");
        scanf("%d",&stu[i].roll);
        printf("Mark:");
        scanf("%f",&stu[i].mark); 
    }
    for(i=0;i<5;i++){
        if(a<stu[i].mark)
        a=stu[i].mark;
    }
    for(i=0;i<5;i++){
        if(a<stu[i].mark){
            a=stu[i].mark;
        }
    }
	for(i=0;i<5;i++){
        if(a==stu[i].mark){
            printf("\nHighest mark = %s\n",stu[i].name);
            printf("Roll no=%d\n",stu[i].roll);
            printf("Mark = %d\n\n",a);
        }
    }
} */
/*
#include <stdio.h>
int main(){
	FILE *x;
	char y;
	x=fopen("file.txt","w+");
	printf("Enter a character:");
	while (1){
		scanf("%c",&y);
		if (y ==',')
			break;
		else
			fprintf(x,"%c",y);
	}
	rewind(x);
	printf("Contents of the file:\n");
	while (1){
		y=fgetc(x);
		if (y==EOF)
			break;
		else
			printf("%c",y);
	}
	fclose(x);
} */

