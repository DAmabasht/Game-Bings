#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <process.h>

#define MAX_USERS 5
#define MAX_USERNAME_LENGTH 20
#define MAX_PASSWORD_LENGTH 20

struct User {
    char username[MAX_USERNAME_LENGTH];
    char password[MAX_PASSWORD_LENGTH];
};

struct User users[MAX_USERS];
int numUsers = 0;

void registerUser() 
{
    if (numUsers == MAX_USERS) 
	{
        printf("Maximum number of users reached.\n");
        return;
    }

    struct User newUser;

    printf("Enter username: ");
    scanf("%s", newUser.username);

    printf("Enter password: ");
    scanf("%s", newUser.password);

    users[numUsers] = newUser;
    numUsers++;

    // File handling to store user data
    FILE *file = fopen("new_user_data.txt", "a"); // Open file in append mode
    if (file != NULL) 
	{
        fprintf(file, "%s %s\n", newUser.username, newUser.password);
        fclose(file);
    } 
	else 
	{
        printf("Error opening file.\n");
    }

    printf("Registration successful.\n");
}

int loginUser() {
    char username[MAX_USERNAME_LENGTH];
    char password[MAX_PASSWORD_LENGTH];
    int i;

    printf("Enter username: ");
    scanf("%s", username);

    printf("Enter password: ");
    scanf("%s", password);

    // File handling to read user data
    FILE *file = fopen("new_user_data.txt", "r");
    if (file == NULL) 
	{
        printf("Error opening file.\n");
        return 0;
    }

    while (fscanf(file, "%s %s", users[numUsers].username, users[numUsers].password) != EOF) 
	{
        if (strcmp(username, users[numUsers].username) == 0 && strcmp(password, users[numUsers].password) == 0) 
		{
            printf("Login successful.\n");
            fclose(file);
            return 1;
        }
        numUsers++;
    }

    fclose(file);
    printf("Invalid username or password.\n");
    return 0;
//    return 0;
}


void welcomePopup() 
{
    Beep(10000,500);
    Sleep(50);
    
    	
		printf("\n");
		printf("\n");

		printf("\t\t\t\t\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * *\t\n");Beep(523,500); Sleep(50);
		printf("\t\t\t\t\t\t\t\t*     	    	SEMESTER 1 PROJECT  		  *\t\n");Beep(523,500); Sleep(50);
		printf("\t\t\t\t\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * *\t\n");Beep(523,500); Sleep(50);
		printf("\t\t\t\t\t\t\t\t___________________________________________________\t\n\n");Beep(523,500); Sleep(50);                                                           
			
			
	 	printf("\t\t\t\t\t\t\t\t\t * * * * * * * * * * * * * * * *\t\t\t\n");Beep(523,500); Sleep(50);
		printf("\t\t\t\t\t\t\t\t\t *                             *\t\t\t\n");Beep(523,500); Sleep(50);	
     	printf("\t\t\t\t\t\t\t\t\t *           WECOME            *\t\t\t\n");Beep(523,500); Sleep(50);	
        printf("\t\t\t\t\t\t\t\t\t *             TO              *\t\t\t\n");Beep(523,500); Sleep(50);
		printf("\t\t\t\t\t\t\t\t\t *            OUR              *\t\t\t\n");Beep(523,500); Sleep(50);	
		printf("\t\t\t\t\t\t\t\t\t *          PROJECT            *\t\t\t\n");Beep(523,500); Sleep(50);
		printf("\t\t\t\t\t\t\t\t\t *            SITE             *\t\t\t\n");Beep(523,500); Sleep(50);	
		printf("\t\t\t\t\t\t\t\t\t *         (NAMASTE)           *\t\t\t\n");Beep(523,500); Sleep(50);
		printf("\t\t\t\t\t\t\t\t\t *                             *\t\t\t\n");Beep(523,500); Sleep(50);
		printf("\t\t\t\t\t\t\t\t\t * * * * * * * * * * * * * * * *\t\t\t\n\n");Beep(523,500); Sleep(50);
		
		
		printf("\t\t\t\t\t * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\t\t\t\n");Beep(523,500); Sleep(50);
		printf("\t\t\t\t\t *                                                                                         *\t\t\t\n");	Beep(523,500); Sleep(50);
		printf("\t\t\t\t\t *                                                                                         *\t\t\t\n");	Beep(523,500); Sleep(50);
		printf("\t\t\t\t\t *                                                                                         *\t\t\t\n");	Beep(523,500); Sleep(50);				
		printf("\t\t\t\t\t *                   ********  ********  *********  *******  *******                       *\t\t\t\n");	Beep(523,500); Sleep(50);
		printf("\t\t\t\t\t *                   *         *      *  *   *   *  *        *                             *\t\t\t\n");	Beep(523,500); Sleep(50);
		printf("\t\t\t\t\t *                   *    ***  ********  *   *   *  *******  *******                       *\t\t\t\n");	Beep(523,500); Sleep(50);
		printf("\t\t\t\t\t *                   *      *  *      *  *       *  *              *                       *\t\t\t\n");	Beep(523,500); Sleep(50);
		printf("\t\t\t\t\t *                   ********  *      *  *       *  *******  *******                       *\t\t\t\n");	Beep(523,500); Sleep(50);
		printf("\t\t\t\t\t *                                                                                         *\t\t\t\n");	Beep(523,500); Sleep(50);
		printf("\t\t\t\t\t *                   *******   *******   *     *  ********   *******                       *\t\t\t\n");	Beep(523,500); Sleep(50);
		printf("\t\t\t\t\t *                   *     *      *      * *   *  *          *                             *\t\t\t\n");	Beep(523,500); Sleep(50);
		printf("\t\t\t\t\t *                   *******      *      *  *  *  *    ***   *******                       *\t\t\t\n");	Beep(523,500); Sleep(50);
		printf("\t\t\t\t\t *                   *     *      *      *   * *  *      *         *                       *\t\t\t\n");	Beep(523,500); Sleep(50);
		printf("\t\t\t\t\t *                   *******   *******   *     *  ********   *******                       *\t\t\t\n");	Beep(523,500); Sleep(50);
		printf("\t\t\t\t\t *                                                                                         *\t\t\t\n");	Beep(523,500); Sleep(50);
		printf("\t\t\t\t\t *                                                                                         *\t\t\t\n");	Beep(523,500); Sleep(50);
		printf("\t\t\t\t\t *                                                                                         *\t\t\t\n");	Beep(523,500); Sleep(50);
	    printf("\t\t\t\t\t * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\t\t\t\n");Beep(523,500); Sleep(50);

    Sleep(1000);
    system("cls || clear");
    Beep(635,600);
    Sleep(500);
   
}
 
// Cricket
int playCricket(int argc, char *argv) 
{
	void req_rate(float a, float b, float c,float d,float e);
	void runs_needed(int a,int b,int c,int d, int e);
	void projected_score(int a,int b,int c,int d,float e);
	void result(int a,int b,int e,int g,char f,char c[],char d[]);
	float curr_rate(float a, float b, float c);
	void ball_played(int *a,int *b,int *c,int *d,int *e,int *f,int *g,int *h,int *i, int *j);
	int string_comp(char a[],char b[],char c[]);
	
	/*
	wd = wide
	nb = no balls
	lb = leg byes
	b = byes
	T_overs = total overs
	c_rate = current rate 
	f = fours
	s = sixes
	*/
	int wd=0,nb=0,lb=0,b=0,extras=0,overs=0,T_overs=0, k=0,balls=0, T=0,score=0,wickets=0, target=0,q=0,c[11],j=1,f=0,s=0;
	float c_rate;
	char toss[15], team_1[15], team_2[15], choice, runs;
	printf("Match between:\n");
	scanf("%s",&team_1);
	printf("versus\n");
	fflush(stdin);
	scanf("%s",&team_2);
	fflush(stdin);
	printf("Toss won by: ");
	scanf("%s",&toss);
	fflush(stdin);
	printf("Enter B to choose bat first and F to field first: ");
	scanf("%c",&choice);
	printf("Enter overs to be played by each side: ");
	scanf("%d",&T_overs);
	system("cls");
	T=string_comp(team_1,team_2,toss);
	while(overs<=T_overs||overs>=T_overs)
	{
		do
		{
			if(wickets>q)
			{
				*(c+wickets)=score;
			}
			q=wickets;
			system("cls");
			printf("\t\t\t%s vs %s (%d-overs match)\n",team_1,team_2,T_overs);
			if(T==1)
			{
				if(choice=='B'||choice=='b')
				{
					printf("%s won the toss and elected to bat first\n",team_1);
					printf("\n\n%s %d-%d\t\tovers %d.%d\t\t",team_1,score,wickets,overs,balls);
				}
				else if(choice=='F'||choice=='f')
				{
					printf("%s won the toss and elected to field first\n",team_1);
					printf("\n\n%s %d-%d\t\tovers %d.%d\t\t",team_2,score,wickets,overs,balls);
				}
			}
			else if(T==2)
			{
				if(choice=='B'||choice=='b')
				{
					printf("%s won the toss and elected to bat first\n",team_2);
					printf("\n\n%s %d-%d\t\tovers %d.%d\t\t",team_2,score,wickets,overs,balls);
				}
				else if(choice=='F'||choice=='f')
				{
					printf("%s won the toss and elected to field first\n",team_2);
					printf("\n\n%s %d-%d\t\tovers %d.%d\t\t",team_1,score,wickets,overs,balls);
				}
			}
			if (overs>0&&score>20)
			{
				if(overs==T_overs||wickets==10)
				{
					printf("\n");
					k++;
					break;
				}
				c_rate= curr_rate(score,overs,balls);
				printf("run rate %0.2f\n",c_rate);
			}
			if(balls==0)
			{
				printf("\n");
				if(extras>0)
				{
					printf("extras: %d(wd %d,nb %d,lb %d,b %d)\t",extras,wd,nb,lb,b);
				}
				if(f>0||s>0)
				{
					printf("boundaries: %d fours,%d sixes\n",f,s);
				}
				else
				{
					printf("\n");
				}
			}
			if (overs>0&&score>20&&balls==0)
			{
				projected_score(score,overs,T_overs,balls,c_rate);
			}
			printf("\n");
			if(overs==T_overs||wickets==10)
			{
				k++;
				break;
			}
			ball_played(&balls,&score,&wickets,&extras,&wd,&nb,&lb,&b,&f,&s);
		}
		while(balls<6);
		if(balls==6)
		{
			balls=0;
		}
		if(overs<T_overs)
		{
			overs++;
		}
		if(k>0)
		{
			break;
		}
	}
	printf("\nextras: %d(wd %d,nb %d,lb %d,b %d)\tboundaries: %d fours,%d sixes\n",extras,wd,nb,lb,b,f,s);
	if(wickets>0)
	{
		printf("\nfall of wickets:  ");
		for(j=1;j<=wickets;j++)
		{
			if(j==1||j==6)
			{
				printf("\n");
			}
			else
			printf("\t");
			printf("%d-%d",j,c[j]);
		}
	}
	printf("\n\ninnings completed.");
	sleep(10);
	for(k=10;k>=0;k--)
	{
		system("cls");
		printf("\n\n\n\n\t\t\tINNINGS BREAK...\n\t\t\t\t%d",k);Beep(589,50);
		sleep(1);
	}
	target=score+1,score=0,overs=0,k=0,wd=0,nb=0,lb=0,b=0,balls=0,wickets=0,extras=0,j=1,q=0,f=0,s=0;
	while(overs<=T_overs||overs>=T_overs)
	{
		do
		{
			if(wickets>q)
			{
				*(c+wickets)=score;
			}
			q=wickets;
			system("cls");
			printf("\t\t\t%s vs %s (%d-overs match)\n",team_1,team_2,T_overs);
			if(T==1)
			{
				if(choice=='B'||choice=='b')
				{
					printf("%s gives target of %d runs to %s to win\n",team_1,target,team_2);
					printf("\n\n%s %d-%d\t  overs %d.%d\t",team_2,score,wickets,overs,balls);
				}
				else if(choice=='F'||choice=='f')
				{
					printf("%s gives target of %d runs to %s to win\n",team_2,target,team_1);
					printf("\n\n%s %d-%d\t  overs %d.%d\t",team_1,score,wickets,overs,balls);
				}
			}
			else if(T==2)
			{
				if(choice=='B'||choice=='b')
				{
					printf("%s gives target of %d runs to %s to win\n",team_2,target,team_1);
					printf("\n\n%s %d-%d\t  overs %d.%d\t",team_1,score,wickets,overs,balls);
				}
				else if(choice=='F'||choice=='f')
				{
					printf("%s gives target of %d runs to %s to win\n",team_1,target,team_2);
					printf("\n\n%s %d-%d\t  overs %d.%d\t",team_2,score,wickets,overs,balls);
				}
			}
			if (overs>0&&score>20)
			{
				if(overs==T_overs||wickets==10||target<=score)
				{
					printf("\n");
					k++;
					break;
				}
				c_rate= curr_rate(score,overs,balls);
				printf("run rate %0.2f",c_rate);
				req_rate(score,overs,T_overs,balls,target);
			}
			if(balls==0)
			{
				printf("\n");
				if(extras>0)
				{
					printf("extras: %d(wd %d,nb %d,lb %d,b %d)\t",extras,wd,nb,lb,b);
				}
				if(f>0||s>0)
				{
					printf("boundaries: %d fours,%d sixes\n",f,s);
				}
				else
				{
					printf("\n");
				}
			}
			if (overs>0&&score>20)
			{
				runs_needed(score,overs,T_overs,balls,target);
			}
			printf("\n");
			if(wickets==10||target<=score||overs==T_overs)
			{
				k++;
				break;
			}
			ball_played(&balls,&score,&wickets,&extras,&wd,&nb,&lb,&b,&f,&s);
		}
		while(balls<6&&overs<T_overs);
		if(balls==6)
		{
			balls=0;
		}
		if(overs<T_overs)
		{
			overs++;
		}
		if(k>0)
		{
			break;
		}
	}
	printf("\nextras: %d(wd %d,nb %d,lb %d,b %d)\tboundaries: %d fours,%d sixes\n",extras,wd,nb,lb,b,f,s);
	if(wickets>0)
	{
		printf("\nfall of wickets:  ");
		for(j=1;j<=wickets;j++)
		{
			if(j==1||j==6)
			{
				printf("\n");
			}
			else
			printf("\t");
			printf("%d-%d",j,c[j]);
		}
	}
	printf("\n\ninnings completed.");
	sleep(3);
	for(k=0;k<=7;k++)
	{
		system("cls");
		sleep(1);
		printf("\n\n\n");
		result(target,score,T,wickets,choice,team_1,team_2);Beep(588,50);		
		sleep(1);
	}
	getche();
   saveGameData(team_1, team_2, T_overs, score, wickets, target);
	return 0;

}

float curr_rate(float a, float b, float c)
{
	float d;
	if (c==0)
	{
		d=a/b;
	}
	else
	{
		d=a/(b+(c/10));
	}
	return d;
}

int string_comp(char a[],char b[],char c[])
{
	int i=0,ab=0,j=0,k=0;
	strupr(a);
	strupr(b);
	strupr(c);
	for(i=0;i<3;i++)
	{
		if(a[i]==c[i])
		{
			j++;
		}
		else if(b[i]==c[i])
		{
			k++;
		}
		else
		break;
	}
	if(j==3)
	{
		ab=1;
	}
	else if(k==3)
	{
		ab=2;
	}
	else
	{
		ab=0;
	}
	return ab;
}

void ball_played(int *a,int *b,int *c,int *d,int *e,int *f,int *g,int *h,int *i,int *j)
{
	char runs;
	int t;
	scanf("%c",&runs);
	switch(runs)
	{
		case '0':
			*a=*a+1;
			break;
		case '1':
			*b=*b+1;
			*a=*a+1;
			break;
		case '2':
			*b=*b+2;
			*a=*a+1;
			break;
		case '3':
			*b=*b+3;
			*a=*a+1;
			break;
		case '4':
			*b=*b+4;
			*a=*a+1;
			*i=*i+1;
			break;
		case '5':
			*b=*b+5;
			*a=*a+1;
			break;
		case '6':
			*b=*b+6;
			*a=*a+1;
			*j=*j+1;
			break;
		case 'w':
		case 'W':
			printf("enter runs on wide ball: ");
			scanf("%d",&t);
			*b=*b+1+t;
			*d=*d+1+t;
			*e=*e+1+t;
			break;
		case 'n':
		case 'N':
		    printf("enter runs on no ball: ");
			scanf("%d",&t);
			*b=*b+t+1;
			*d=*d+1;
			*f=*f+1;
			break;
		case 'l':
		case 'L':
			printf("enter runs as leg byes: ");
			scanf("%d",&t);
			*b=*b+t;
			*a=*a+1;
			*d=*d+t;
			*g=*g+t;
			break;
		case 'b':
		case 'B':
			printf("enter runs as byes: ");
			scanf("%d",&t);
			*b=*b+t;
			*a=*a+1;
			*d=*d+t;
			*h=*h+t;
			break;
		case 'o':
		case 'O':
			*a=*a+1;
			*c=*c+1;
			printf("enter runs if wicket is runout: ");
			scanf("%d",&t);
			*b=*b+t;
			break;
	}
}

void result(int a,int b,int e,int g,char f,char c[],char d[])
{
	int h,i;
	h=(a-1)-b;
	i=10-g;
	if((a-1)==b)
	{
		printf("\t\t\tMATCH DRAWN.");
	}
	else if(a>b)
	{	
		if(e==1)
		{
			if(f=='B'||f=='b')
			{
				printf("\t\t\t%s won by %d runs\n\t\t\tCONGRATULATIONS TEAM %s!",c,h,c);				
			}
			else if(f=='F'||f=='f')
			{
				printf("\t\t\t%s won by %d runs\n\t\t\tCONGRATULATIONS TEAM %s!",d,h,d);				
			}
		}
		else if(e==2)
		{
			if(f=='B'||f=='b')
			{
				printf("\t\t\t%s won by %d runs\n\t\t\tCONGRATULATIONS TEAM %s!",d,h,d);
			}
			else if(f=='F'||f=='f')
			{
				printf("\t\t\t%s won by %d runs\n\t\t\tCONGRATULATIONS TEAM %s!",c,h,c);
			}
		}
	}
	else if(a<b||a==b)
	{
		if(e==1)
		{
			if(f=='B'||f=='b')
			{
				printf("\t\t\t%s won by %d wickets\n\t\t\tCONGRATULATIONS TEAM %s!",d,i,d);
			}
			else if(f=='F'||f=='f')
			{
				printf("\t\t\t%s won by %d wickets\n\t\t\tCONGRATULATIONS TEAM %s!",c,i,c);
			}
		}
		else if(e==2)
		{
			if(f=='B'||f=='b')
			{
				printf("\t\t\t%s won by %d wickets\n\t\t\tCONGRATULATIONS TEAM %s!",c,i,c);
			}
			else if(f=='F'||f=='f')
			{
				printf("\t\t\t%s won by %d wickets\n\t\t\tCONGRATULATIONS TEAM %s!",d,i,d);
			}
		}
	}
}

void projected_score(int a,int b,int c,int d,float e)
{
	int ab,ba;
	ab=(c-b)+(d/10);
	ba=(ab*e)+a;
	printf("\nPROJECTED SCORE:\n%d at %0.2f RPO(curr. rate)\n%d at 6 RPO\n%d at 8 RPO\n%d at 10 RPO\n",ba,e,(ab*6)+a,(ab*8)+a,(ab*10)+a);
}

void runs_needed(int a,int b,int c,int d, int e)
{
	int f,h;
	f=(c*6)-((b*6)+d);
	h=e-a;
	printf("%d runs needed to win from %d balls",h,f);
}

void req_rate(float a, float b, float c,float d,float e)
{
	float f,g,h,i;
	f=e-a;
	if(d==0)
	{
		h=c;
	}
	else
	{
		h=(c-1)+0.6;
	}
	i=b+(d/10);
	g=f/(h-i);
	printf("\t  req. run rate %0.2f\n",g);
}

void saveGameData(char team1[], char team2[], int overs, int score1, int wickets1, int score2, int wickets2) 
{
    FILE *file = fopen("Cricket.txt", "a"); // Open file in append mode

    if (file == NULL) 
	{
        printf("Error opening file for writing.\n");
        return;
    }

    fprintf(file, "Team 1: %s | Team 2: %s | Overs: %d | %s %d-%d | %s %d-%d\n", team1, team2, overs, score1, wickets1, team2, score2, wickets2);
    fclose(file);
}

// Football
void playFootball() 
{
    	
    int team1Score = 0, team2Score = 0;
    char team1Name[20], team2Name[20];
	int k;
	FILE *scoreFile; // File pointer
    scoreFile = fopen("Footballscores.txt", "w"); // Open file for writing

    if (scoreFile == NULL) 
	{
        printf("Error opening file!\n");
        return;
    }
	printf("MATCH BETWEEN\n");
    printf("Enter the name of Team 1: ");
    scanf("%s", team1Name);Beep(523,50);Sleep(50);

    printf("Enter the name of Team 2: ");
    scanf("%s", team2Name);Beep(523,50);Sleep(50);

    while (1) 
	{
        
        int choice;
        printf("\nSelect an action:\n");
        printf("1. Goal for %s\n", team1Name);
        printf("2. Goal for %s\n", team2Name);
    	printf("3. half Time\n");
        printf("4. Full Time\n");
        scanf("%d", &choice);

        switch (choice) 
		{
            case 1:Beep(523,50);Sleep(50);
                team1Score++;
                printf("\nCurrent Score:\n");Beep(523,50);Sleep(50);
        		printf("%s: %d\n", team1Name, team1Score);
        		printf("%s: %d\n", team2Name, team2Score);

                printf("%s scores a goal!\n", team1Name);
                break;
        
		    case 2:Beep(523,50);Sleep(50);
                team2Score++;
                printf("\nCurrent Score:\n");
        		printf("%s: %d\n", team1Name, team1Score);
        		printf("%s: %d\n", team2Name, team2Score);

                printf("%s scores a goal!\n", team2Name);
                break;
        	case 3:Beep(523,50);Sleep(50);
        			printf("\nHalftime score:\n");
               		printf("%s: %d\n", team1Name, team1Score);
                	printf("%s: %d\n", team2Name, team2Score);
				for(k=5;k>=0;k--)
				{
					printf("\n\n\n\n\t\t\tHAIFTIME BREAK...\n\t\t\t\t%d",k);Beep(523,50);Sleep(50);
					sleep(1);
					system("cls");
				}
                break;
		    case 4:Beep(523,50);Sleep(50);
                printf("\nFinal Score:\n");
                printf("%s: %d\n", team1Name, team1Score);
                printf("%s: %d\n", team2Name, team2Score);
                fprintf(scoreFile, "Final Score:\n%s: %d\n%s: %d\n", team1Name, team1Score, team2Name, team2Score);
                if (team1Score > team2Score) 
				{
                    printf("%s wins!\n", team1Name);
                    fprintf(scoreFile, "%s wins!\n", team1Name);
                } 
				else if (team2Score > team1Score) 
				{
                    printf("%s wins!\n", team2Name);
                    fprintf(scoreFile, "%s wins!\n", team2Name);
                } 
				else 
				{
                    printf("It's a tie!\n");
                    fprintf(scoreFile, "It's a tie!\n");
                }
                fclose(scoreFile);
                return;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}

void RandomNumber() 
{
	int number, guess, attempts = 0;
    int player = 1; // To keep track of current player
	srand(time(0));
    
    // Generate a random number between 1 and 100
    number = rand() % 100 + 1;

    printf("Welcome to the Two Player Number Guessing Game!\n");
    printf("Player 1, you'll guess first.\n");

    while (1) 
	{
        printf("Player %d, enter your guess: ", player);
        scanf("%d", &guess);
        attempts++;

        if (guess > number) 
		{
            printf("Too high! Try a lower number.\n");
        } 
		else if (guess < number) 
		{
            printf("Too low! Try a higher number.\n");
        }
		else 
		{
            printf("Congratulations! Player %d guessed the number %d in %d attempts!\n", player, number, attempts);
            break; // Exit the loop when the number is guessed correctly
        }

        // Switch to the other player
        player = (player == 1) ? 2 : 1;
    }
}

int mainmenu()
{
		int ch;
	 	printf("1. Register\n");
        printf("2. Login\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        
        return ch;
}

int submenu() 
{
    int subChoice;
    printf("1. Football\n");
    printf("2. RandomNumber\n");
    printf("3. Cricket\n");
    printf("Enter your choice: ");
    scanf("%d", &subChoice);

    return subChoice;
}

void clearScreen() 
{
    printf("\033[2J\033[1;1H"); // ANSI escape sequence to clear screen
}

int main() 
{
	welcomePopup();
		 int choice = 0;
		    int argc;
	char *argv; 
	int r;
//	lable :
	do 
	{
         choice = mainmenu();
        switch (choice) 
		{
            case 1:
               registerUser();
                break;
            case 2:
               r = loginUser();
                if ( r == 0 )
				{
//                	goto lable;
					loginUser();
				}
                sleep(2);
                clearScreen();  
                int sub;
				do 
				{
			        sub = submenu();
					printf("sub is %d ", sub);
			        switch (sub) 
					{
			            case 1:
			                playFootball();
			                break;
			            case 2:
			                RandomNumber();
			                break;
			            case 3:
			            	 playCricket(argc, argv);
			                break;
			            default:
			                printf("Invalid choice. Please try again.\n");
			                break;
			        }
		    	} 
				while (sub != 0);   
            break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } 
	while (choice != 3);
    
}
