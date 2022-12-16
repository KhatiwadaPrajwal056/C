
#include <stdio.h>
typedef struct address{
	int pro;
	char dis[10];
	char town[10];
}address;

typedef struct person{
	char name[10];
	long int phone;
	address add;
};
void data(struct person [5]);
void main(){
	struct person x[5];
	int i;
	for (i=0;i<5;i++){
		printf("Info %d",i+1);
		printf("\nName:");
		scanf("%s",x[i].name);
		printf("Contact no.:");
		scanf("%d",&x[i].phone);
		printf("Province n:");
		scanf("%d",&x[i].add.pro);
		printf("District:");
        scanf("%s",x[i].add.dis);
		printf("Town:");
		scanf("%s",x[i].add.town);
	}
}
void data(struct person x[5]){
	int i,y;
	printf("Enter the province no. to find the information of:");
	scanf("%d",&y);
	printf("Information of the people in province %d:",y);
	for (i=0;i<5;i++){
		if (x[i].add.pro == y){
			printf("Name: %s\n",x[i].name);
			printf("Phone no.: %ld\n",x[i].phone);
			printf("Province np: %d\n",x[i].add.pro);
			printf("District: %s\n",x[i].add.dis);
            printf("Town: %s\n",x[i].add.town);
	    }
	}
}

