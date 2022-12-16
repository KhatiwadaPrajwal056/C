#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
void showrecord();
void addscore(char[], int );
void help();


int main()
     {
     int r,count,i;
     char cat,choice;
     char playername[20];
     mainhome:
     system("cls");
     printf("\t\t\t   C PROGRAM QUIZ GAME\n");
     printf("\n\t\t________________________________________");
	 printf("\n");
	 printf("\n\t\t\t\tWELCOME ");
     printf("\n\t\t\t\t   to ");
     printf("\n\t\t\t\tTHE QUIZ ");
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t > Press S to start the game");
     printf("\n\t\t > Press V to view the highest score  ");
     printf("\n\t\t > press H for help            ");
     printf("\n\t\t > press Q to quit             ");
     printf("\n\t\t________________________________________\n\n");
	 choice=toupper(getchar());
    if (choice=='V')
	{system ("cls");
    showrecord();
	getchar();
	goto mainhome;
	}
    else if (choice=='H')
	{
	help();
	getchar();
	goto mainhome;
	}
	else if (choice=='Q')
	exit(1);
    else if(choice=='S')
    {
     system("cls");

    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister your name:");
    scanf("%s",playername);

    system("cls");
    printf("\n ------------------  Welcome %s to C Program Quiz Game --------------------------");
    printf("\n\n Here are some tips you might want to know before starting the quiz:");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> There is only one round in this Quiz.");
    printf("\n >> The players are required to choose in between the catogories first.");
    printf("\n >> There will be five categories in total each containing six questions.");
    printf("\n >> The quiz starts after the category is chosen.");
    printf("\n >> The player can only answers the questions related to their specific category and if");
    printf("\n    s/he wants to choose the the next category then s/he has to restart the quiz");
    printf("\n >> The fist question starts with 10 points and gradually on solving each question");
    printf("\n    the points get incremented by 10 i.e. the last question will carry a total 60 points");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\n >> You will be asked questions continuously, until the answer given is incorrect");
    printf("\n >> No negative marking for wrong answers!");
    printf("\n\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n Press Y  to start the game!\n");
    printf("\n Press any other key to return to the main menu!");
    if (toupper(getchar())=='Y')
		{
		    goto home;
        }
	else
		{
        goto mainhome;
        system("cls");
       }

    home: 	
 	system("cls");
	printf("\n\n\n\n\n\n\n\t\t\t\tChoose your Category:");
	printf("\n\tA.Sports");
	printf("\n\tB.Entertainment");
	printf("\n\tC.Geography");
	printf("\n\tD.Science");
	printf("\n\tE.Current Affairs");
	
	cat = toupper(getchar());
	
	if (cat == 'A')
	{
		system ("cls");
		count = 0;
		for (i=1; i<=6; i++)
		{
			system("cls");
			r=i;
			switch (r)
			{
				case 1:
					printf("FIFA is the global regulatory body of ");
					printf("\n  A. Hockey\t\tB. Football \n  C. Cricket\t\tD. Tennis");
					if (toupper(getchar()) == 'B')
					{
						printf("\nCorrect!");
						count = count + 10;
						getchar();
						break;
					}
					else
					{
						printf("\n Incorrect!\n The correct answer is option B.");
						printf("\nYou scored %d points", count);
						printf("\nPress any key to go to main home");
						getchar();
						addscore(playername, count);
						goto mainhome;
						break;
					}
					case 2:
					printf("Which country has simultaneously won 3 consecutive 50-50 cricket world cup?");
					printf("\n  A. West Indies\tB. India\n  C. Sri Lanka\t\tD. Australia");
					if (toupper(getchar()) == 'D')
					{
						printf("\nCorrect!");
						count = count + 20;
						getchar();
						break;
					}
					else
					{
						printf("\n Incorrect!\nThe correct answer is option D.");
						
						printf("\nYou scored %d points", count);
						printf("\nPress any key to go to main home");
						getchar();
						addscore(playername, count);
						goto mainhome;
						break;
					}
					case 3:
					printf("Which player has scored most goals in a single calender year?");
					printf("\n  A. Gert Muller\t\tB. Christiano Ronaldo  \n  C. Lionel Messi\t\tD. Robert Lewandowski");
					if (toupper(getchar()) == 'C')
					{
						printf("\nCorrect!");
						count = count + 30;
						getchar();
						break;
					}
					else
					{
						printf("\n Incorrect!\nThe correct answer is option C.");
						printf("\nYou scored %d points", count);
						printf("\nPress any key to go to main home");
						getchar();
						addscore(playername, count);
						goto mainhome;
						break;
					}
					case 4:
					printf("Which country has won most number of gold medals in the Olympics?");
					printf("\n  A. China\t\tB. Russia \n  C. USA\t\tD. India");
					if (toupper(getchar()) == 'C')
					{
						printf("\nCorrect!");
						count = count + 40;
						getchar();
						break;
					}
					else
					{
						printf("\n Incorrect!\nThe correct answer is option C.");
						printf("\nYou scored %d points", count);
						printf("\nPress any key to go to main home");
						getchar();
						addscore(playername, count);
						goto mainhome;
						break;
					}
					case 5:
					printf("Headquaters of the International Olympic Committee is situated at ");
					printf("\n  A. Paris\t\tB. London \n  C. Athens\t\tD. Lausanne");
					if (toupper(getchar()) == 'D')
					{
						printf("\nCorrect!");
						count = count + 50;
						getchar();
						break;
					}
					else
					{
						printf("\n Incorrect!\nThe correct answer is option D.");
						printf("\nYou scored %d points", count);
						printf("\nPress any key to go to main home");
						getchar();
						addscore(playername, count);
						goto mainhome;
						break;
					}
					case 6:
					printf("Which of the following is the first cricketer to score 1000 runs in an inning?");
					printf("\n  A. Sachin Tendulkar\t\tB. Vinod Kamble \n  C. Pranav Dhanawade\t\tD. Virat Kholi");
					if (toupper(getchar()) == 'C')
					{
						printf("\nCorrect!");
						count = count + 60;
						printf("\nHURRAY!!! \nYou have completed the quiz.\n You have scored %d points", count);
						printf("\nPress any key to go to main home");
						getchar();
						goto mainhome;
						break;
					}
					else
					{
						printf("\n Incorrect!\nThe correct answer is option C.");
						printf("\nYou scored %d points:", count);
						printf("\nHURRAY!!! You have completed the quiz.");
						printf("Press any key to go to main home");
						getchar();
						addscore(playername, count);
						goto mainhome;
						break;
					}
			}
		}
	}
	
	else if (cat == 'B')
	{
		system ("cls");
		count = 0;
		for (i=1; i<=6; i++)
		{
			system("cls");
			r=i;
			switch (r)
			{
				case 1:
					printf("What is the name of the actor who played the popular character 'Mr. Bean'?");
					printf("\n  A. Tom Hanks \t\t B. Rowan Atkinson \n  C. Chris Evans \t D. Ryan Gosling");
					if (toupper(getchar()) == 'B')
					{
						printf("\nCorrect!");
						count = count + 10;
						getchar();
						break;
					}
					else
					{
						printf("\n Incorrect!\n The correct answer is option B.");
						printf("\nYou scored %d points", count);
						printf("\nPress any key to go to main home");
						getchar();
						addscore(playername, count);
						goto mainhome;
						break;
					}
					case 2:
					printf("Which was the first animated Disney movie?");
					printf("\n  A. Beauty and the Beast \t\t B. Cinderella \n  C. Snow White and the Seven Dwarfs \t D. Pinocchio");
					if (toupper(getchar()) == 'C')
					{
						printf("\nCorrect!");
						count = count + 20;
						getchar();
						break;
					}
					else
					{
						printf("\n Incorrect!\nThe correct answer is option C.");
						
						printf("\nYou scored %d points", count);
						printf("\nPress any key to go to main home");
						getchar();
						addscore(playername, count);
						goto mainhome;
						break;
					}
					case 3:
					printf("When did The Beatles release their first album?");
					printf("\n  A. 1963 \t\t B. 1970 \n  C. 1978 \t\t D. 1960");
					if (toupper(getchar()) == 'A')
					{
						printf("\nCorrect!");
						count = count + 30;
						getchar();
						break;
					}
					else
					{
						printf("\n Incorrect!\nThe correct answer is option A.");
						printf("\nYou scored %d points", count);
						printf("\nPress any key to go to main home");
						getchar();
						addscore(playername, count);
						goto mainhome;
						break;
					}
					case 4:
					printf("Which was the first movie to be made in Nepal?");
					printf("\n  A. Basanti \t\t B. Satya Harish Chandra \n  C. Kumari \t\t D. Aama");
					if (toupper(getchar()) == 'D')
					{
						printf("\nCorrect!");
						count = count + 40;
						getchar();
						break;
					}
					else
					{
						printf("\n Incorrect!\nThe correct answer is option D.");
						printf("\nYou scored %d points", count);
						printf("\nPress any key to go to main home");
						getchar();
						addscore(playername, count);
						goto mainhome;
						break;
					}
					case 5:
					printf("Which music legend won the Nobel prize for literature in 2016? ");
					printf("\n  A. Bob Dylan \t\t B. Celine Dion \n  C. Whitney Houston \t D. Bon Iver");
					if (toupper(getchar()) == 'A')
					{
						printf("\nCorrect!");
						count = count + 50;
						getchar();
						break;
					}
					else
					{
						printf("\n Incorrect!\nThe correct answer is option A.");
						printf("\nYou scored %d points", count);
						printf("\nPress any key to go to main home");
						getchar();
						addscore(playername, count);
						goto mainhome;
						break;
					}
					case 6:
					printf("Which was the last Nepali movie to be nominated for The Oscars?");
					printf("\n  A. Muna Madan \t B. Jhola \n  C. Himalaya \t\t D. White Sun");
					if (toupper(getchar()) == 'C')
					{
						printf("\nCorrect!");
						count = count + 60;
						printf("\nHURRAY!!! \nYou have completed the quiz.\n You have scored %d points", count);
						printf("\nPress any key to go to main home");
						getchar();
						addscore(playername, count);
						goto mainhome;
						break;
					}
					else
					{
						printf("\n Incorrect!\nThe correct answer is option C.");
						printf("\nYou scored %d points", count);
						printf("\nYou have completed the quiz.");
						printf("\nPress any key to go to main home");
						getchar();
						addscore(playername, count);
						goto mainhome;
						break;
					}
			}
		}
	}
	else if (cat == 'C')
	{
		system ("cls");
		count = 0;
		for (i=1; i<=6; i++)
		{
			system("cls");
			r=i;
			switch (r)
			{
				case 1:
					printf("What is the world's largest continent?");
					printf("\n  A. Antartica \t\t\t B. Asia \n  C. North America \t\t D. Europe");
					if (toupper(getchar()) == 'B')
					{
						printf("\nCorrect!");
						count = count + 10;
						getchar();
						break;
					}
					else
					{
						printf("\n Incorrect!\n The correct answer is option B.");
						printf("\nYou scored %d points", count);
						printf("\nPress any key to go to main home");
						getchar();
						addscore(playername, count);
						goto mainhome;
						break;
					}
					case 2:
					printf("How many countries sit along the equator the equatorial line?");
					printf("\n A. 15 \t\t\t B. 19 \n C. 13 \t\t\t D. 9");
					if (toupper(getchar()) == 'C')
					{
						printf("\nCorrect!");
						count = count + 20;
						getchar();
						break;
					}
					else
					{
						printf("\n Incorrect!\nThe correct answer is option C.");
						
						printf("\nYou scored %d points", count);
						printf("\nPress any key to go to main home");
						getchar();
						addscore(playername, count);
						goto mainhome;
						break;
					}
					case 3:
					printf("What country is called Land of Fire and Ice?");
					printf("\n A. Iceland \t\t B. Switzerland \n C. Canada \t\t D. Russia");
					if (toupper(getchar()) == 'A')
					{
						printf("\nCorrect!");
						count = count + 30;
						getchar();
						break;
					}
					else
					{
						printf("\n Incorrect!\nThe correct answer is option A.");
						printf("\nYou scored %d points", count);
						printf("\nPress any key to go to main home");
						getchar();
						addscore(playername, count);
						goto mainhome;
						break;
					}
					case 4:
					printf("Cuba is less than a hundred miles away from what U.S. state?");
					printf("\n A. Alabama \t\t\t  B. Georgia \n C. Mississippi \t\t  D. Florida");
					if (toupper(getchar()) == 'D')
					{
						printf("\nCorrect!");
						count = count + 40;
						getchar();
						break;
					}
					else
					{
						printf("\n Incorrect!\nThe correct answer is option D.");
						printf("\nYou scored %d points", count);
						printf("\nPress any key to go to main home");
						getchar();
						addscore(playername, count);
						goto mainhome;
						break;
					}
					case 5:
					printf("On 16 December 1971, East Pakistan was liberated from Pakistan becoming what newly independent state?");
					printf("\n A. Bangladesh \t\t\t B. India \n C. Iran \t\t\t D. Afghanistan");
					if (toupper(getchar()) == 'A')
					{
						printf("\nCorrect!");
						count = count + 50;
						getchar();
						break;
					}
					else
					{
						printf("\n Incorrect!\nThe correct answer is option A.");
						printf("\nYou scored %d points", count);
						printf("\nPress any key to go to main home");
						getchar();
						addscore(playername, count);
						goto mainhome;
						break;
					}
					case 6:
					printf("Which Mountain is based for Nepal Mean Time?");
					printf("\n A. Manaslu \t\t\t\t B. Ganesh Himal \n C.Gaurishankar Himal \t\t\t D. Sagarmatha");
					if (toupper(getchar()) == 'C')
					{
						printf("\nCorrect!");
						count = count + 60;
						printf("\nHURRAY!!! You have completed the quiz.\n You have scored %d points", count);
						printf("Press any key to go to main home");
						getchar();
						addscore(playername, count);
						goto mainhome;
						break;
					}
					else
					{
						printf("\n Incorrect!\nThe correct answer is option C.");
						printf("\nYou scored %d points", count);
						printf("\nYou have completed the quiz.");
						printf("Press any key to go to main home");
						getchar();
						addscore(playername, count);
						goto mainhome;
						break;
					}

            }
        }
    }  


    else if (cat == 'D')
	{
		system ("cls");
		count = 0;
		for (i=1; i<=6; i++)
		{
			system("cls");
			r=i;
			switch (r)
			{
				case 1:
					printf("Albert Einstein was awarded with Nobel prize for");
					printf("\n A. Law of photoelectric effect \t B. General theory of relativity \n C. Special Theory of relativity  \t D. Wave particle duality");
					if (toupper(getchar()) == 'A')
					{
						printf("\nCorrect!");
						count = count + 10;
						getchar();
						break;
					}
					else
					{
						printf("\n Incorrect!\n The correct answer is option A.");
						printf("\nYou scored %d points", count);
						printf("\nPress any key to go to main home");
						getchar();
						addscore(playername, count);
						goto mainhome;
						break;
					}
					case 2:
					printf("Human and chimpanzee share roughly how much DNA?");
					printf("\n A. 80% \t\t\t B. 98% \n C. 91% \t\t\t D. 85%");
					if (toupper(getchar()) == 'B')
					{
						printf("\nCorrect!");
						count = count + 20;
						getchar();
						break;
					}
					else
					{
						printf("\n Incorrect!\nThe correct answer is option B.");
						
						printf("\nYou scored %d points", count);
						printf("\nPress any key to go to main home");
						getchar();
						addscore(playername, count);
						goto mainhome;
						break;
					}
					case 3:
					printf("Which period is know as the age of fish?");
					printf("\n A. Cambrian period \t B. Jurassic period  \n C. Devonian period \t D. Carboniferous period");
					if (toupper(getchar()) == 'C')
					{
						printf("\nCorrect!");
						count = count + 30;
						getchar();
						break;
					}
					else
					{
						printf("\n Incorrect!\nThe correct answer is option C.");
						printf("\nYou scored %d points", count);
						printf("\nPress any key to go to main home");
						getchar();
						addscore(playername, count);
						goto mainhome;
						break;
					}
					case 4:
					printf("Which scientist discovered X ray?");
					printf("\n A. Thomas Eddison \t B. Nikola Tesla \n C. Wilhelm Roentgen  \t D. Madam Curie");
					if (toupper(getchar()) == 'C')
					{
						printf("\nCorrect!");
						count = count + 40;
						getchar();
						break;
					}
					else
					{
						printf("\n Incorrect!\nThe correct answer is option C.");
						printf("\nYou scored %d points", count);
						printf("\nPress any key to go to main home");
						getchar();
						addscore(playername, count);
						goto mainhome;
						break;
					}
					case 5:
					printf("Where did modern day human first appear?");
					printf("\n A. Africa \t\t B. India \n C. South America \t D. Europe ");
					if (toupper(getchar()) == 'A')
					{
						printf("\nCorrect!");
						count = count + 50;
						getchar();
						break;
					}
					else
					{
						printf("\n Incorrect!\nThe correct answer is option A.");
						printf("\nYou scored %d points", count);
						printf("\nPress any key to go to main home");
						getchar();
						addscore(playername, count);
						goto mainhome;
						break;
					}
					case 6:
					printf("How long does a solar eclipse last?");
					printf("\n A. 1 hour \t B. 7.5 minutes \n C. 20 minutes \t D. 3 minutes");
					if (toupper(getchar()) == 'B')
					{
						printf("\nCorrect!");
						count = count + 60;
						printf("\nHURRAY!!! \nYou have completed the quiz.\n You have scored %d points", count);
						printf("\nPress any key to go to main home");
						getchar();
						addscore(playername, count);
						goto mainhome;
						break;
					}
					else
					{
						printf("\n Incorrect!\nThe correct answer is option B.");
						printf("\nYou scored %d points", count);
						printf("\nYou have completed the quiz.");
						printf("\nPress any key to go to main home");
						getchar();
						addscore(playername, count);
						goto mainhome;
						break;
					}
			}
		}
	}
	else if (cat == 'E')
	{
		system ("cls");
		count = 0;
		for (i=1; i<=6; i++)
		{
			system("cls");
			r=i;
			switch (r)
			{
				case 1:
					printf("COVID 19 vaccine was first developed by which country? ");
					printf("\n A. Russia \t B. USA \n C. China  \t D. Germany");
					if (toupper(getchar()) == 'A')
					{
						printf("\nCorrect!");
						count = count + 10;
						getchar();
						break;
					}
					else
					{
						printf("\n Incorrect!\n The correct answer is option A.");
						printf("\nYou scored %d points", count);
						printf("\nPress any key to go to main home");
						getchar();
						addscore(playername, count);
						goto mainhome;
						break;
					}
					case 2:
				    printf("What was the theme of the �World Day against Trafficking 2021�?");
					printf("\n A. Save lives \t\t\t\t\t\t B. The future we want, the UN we need \n C. Human trafficking: Call your government to action \t D.Victims voices lead the way");
					if (toupper(getchar()) == 'D')
					{
						printf("\nCorrect!");
						count = count + 20;
						getchar();
						break;
					}
					else
					{
						printf("\n Incorrect!\nThe correct answer is option D.");
						
						printf("\nYou scored %d points", count);
						printf("\nPress any key to go to main home");
						getchar();
						addscore(playername, count);
						goto mainhome;
						break;
					}
					case 3:
					printf("Dr. Patrick Amoth, who has been appointed as the chairman of WHO executive board, is from ");
					printf("\n A.USA \t\t\t B.Kenya  \n C. New Zealand \t D.Brazil");
					if (toupper(getchar()) == 'B')
					{
						printf("\nCorrect!");
						count = count + 30;
						getchar();
						break;
					}
					else
					{
						printf("\n Incorrect!\nThe correct answer is option B.");
						printf("\nYou scored %d points", count);
						printf("\nPress any key to go to main home");
						getchar();
						addscore(playername, count);
						goto mainhome;
						break;
					}
					case 4:
					printf("Which African country conducted a nationwide massive campaign to plant 5 million trees on a single day ?");
					printf("\n A. Zimbabwe \t B. Ghana  \n C. Ethiopia  \t D. Egypt");
					if (toupper(getchar()) == 'B')
					{
						printf("\nCorrect!");
						count = count + 40;
						getchar();
						break;
					}
					else
					{
						printf("\n Incorrect!\nThe correct answer is option B.");
						printf("\nYou scored %d points", count);
						printf("\nPress any key to go to main home");
						getchar();
						addscore(playername, count);
						goto mainhome;
						break;
					}
					case 5:
					printf("Darnella Frazier, who recently was honoured with special Pulitzer Award, is from which country ");
					printf("\n A. USA\t\t\t B. UK \n C. Germany \t\t D. Australia");
					if (toupper(getchar()) == 'A')
					{
						printf("\nCorrect!");
						count = count + 50;
						getchar();
						break;
					}
					else
					{
						printf("\n Incorrect!\nThe correct answer is option A.");
						printf("\nYou scored %d points:", count);
						printf("Press any key to go to main home");
						getchar();
						addscore(playername, count);
						goto mainhome;
						break;
					}
					case 6:
					printf("Who is the vice president of Nepal?");
					printf("\n A. Pramanada Jha  \t\t B.Nanda Kishwor Pun \n C. Subaschanadra Nemwang \t D. Bijay Kumar Gachhadar ");
					if (toupper(getchar()) == 'B')
					{
						printf("\nCorrect!");
						count = count + 60;
						printf("\nHURRAY!!! \nYou have completed the quiz.\nYou have scored %d points", count);
						printf("\nPress any key to go to main home");
						getchar();
						addscore(playername, count);
						goto mainhome;
						break;
					}
					else
					{
						printf("\nIncorrect!\nThe correct answer is option B.");
						printf("\nYou scored %d points:", count);
						printf("\nHURRAY!!! You have completed the quiz.");
						printf("Press any key to go to main home");
						getchar();
						addscore(playername, count);
						goto mainhome;
						break;
					}
			}
		}
	}
	else
    {
    	printf("\nInvalid Input!!!");
    	printf("\nPress any key to continue...");
    	getchar();
    	goto home;
	}
    } 
    else
    {
    	printf("Invalid Input!!!");
    	printf("\nPress any key to continue...");
    	getchar();
    	goto mainhome;
	}

}

void help()
	{system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... C program Quiz Game...........");
    printf("\n >> There is only one round in this Quiz.");
    printf("\n >> The players are required to choose in between the catogories first.");
    printf("\n >> There will be five categories in total each containing six questions.");
    printf("\n >> The quiz starts after the category is chosen.");
    printf("\n >> The player can only answers the questions related to their specific category and if");
    printf("\n    s/he wants to choose the the next category then s/he has to restart the quiz");
    printf("\n >> The fist question starts with 10 points and gradually on solving each question");
    printf("\n    the points get incremented by 10 i.e. the last question will carry a total 60 points");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\n >> You will be asked questions continuously, until the answer given is incorrect");
    printf("\n >> No negative marking for wrong answers!");
    printf("\n\n\t*********************BEST OF LUCK*********************************");
	printf("\n\n\t*****C PROGRAM QUIZ GAME is developed by CODE WITH C TEAM********");
	}
void showrecord()
    {system("cls");
	char name[20];
	int scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%d",&name,&scr);
	printf("\n\n\t\t*************************************************************");
	printf("\n\n\t\t\t %s has secured the Highest Score %d",name,scr);
	printf("\n\n\t\t*************************************************************");
	fclose(f);
	getchar();
	}
	
void addscore(char plnm[20], int sco)
	{system("cls");
	int sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%d",nm,&sc);
	if (sco>=sc)
	  { sc=sco;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%d",plnm,sc);
	    fclose(f);
		}
	}



