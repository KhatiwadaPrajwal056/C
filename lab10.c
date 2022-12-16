/*
#include <stdio.h>
int main(){
	FILE *a;
	char x;
	a=fopen("file.txt","w+");
	printf("Enter a character:");
	while (1){
		scanf("%c",&x);
		if (x ==',')
			break;
		else
			fprintf(a,"%c",x);
	}
	rewind(a);
	printf("Contents of the file:\n");
	while (1){
		x=fgetc(a);
		if (x==EOF)
			break;
		else
			printf("%c",x);
	}
	fclose(a);
} */
#include <stdio.h>
int main()
{
	FILE *x,*y;
	char c[20],s[20],d[20];
	x = fopen("source_file.txt","w+");
	y = fopen("destination_file.txt","w+");
	printf("Write something to be written in source file : ");
	gets(c);
	fprintf(x,"%s",c);
	rewind(x);
	fflush(stdin);
	fgets(s,20,x);
	fprintf(y,s);
	rewind(y);
	fflush (stdin);
	printf("Data in the destination file : ");
    fgets(d,20,y);
	printf("%s\n",d);
	fclose(x);
	fclose(y);
}