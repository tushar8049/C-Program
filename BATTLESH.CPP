#include<stdio.h>
#include<conio.h>

char a[10][10],b[10][10];
int i,j,n1,n2,m1,m2,ship1,m,n,count=0,xyz;


void battleship5()
{
	do
	{
	ship1=0;
	printf("\n Enter the range of co-cordinates of 5 dots ship:");
	printf("\n Upper range a[i][j]:");
	scanf("%d %d",&n1,&m1);
	printf("Lower range a[i][j]:");
	scanf("%d %d",&n2,&m2);
	if(n1==n2)
	{
		if((m1-m2)==4)
		{
			for(i=m1;i>=m2;i--)
			{
				a[n1][i]='s';
			}
		}
		else if((m2-m1)==4)
		{
			for(i=m2;i>=m1;i--)
			{
				a[n1][i]='s';
			}
		}
		else
		{
			printf("Invalid Entry.");
			ship1++;
		}
	}
	else if(m1==m2)
	{
		if((n1-n2)==4)
		{
			for(i=n1;i>=n2;i--)
			{
				a[i][m1]='s';
			}
		}
		else if((n2-n1)==4)
		{
			for(i=n2;i>=n1;i--)
			{
				a[i][m1]='s';
			}
		}
		else
		{
			printf("Invalid Entry.");
			ship1++;
		}
	}
	else
	{
		printf("Invalid Entry.");
		ship1++;
	}
	}while(ship1==1);
}


void battleship4()
{
	do
	{
	ship1=0;
	printf("\n Enter the range of co-cordinates of 4 dots ship:");
	printf("\n Upper range a[i][j]:");
	scanf("%d %d",&n1,&m1);
	printf("Lower range a[i][j]:");
	scanf("%d %d",&n2,&m2);
	if(n1==n2)
	{
		if((m1-m2)==3)
		{
			for(i=m1;i>=m2;i--)
			{
				a[n1][i]='s';
			}
		}
		else if((m2-m1)==3)
		{
			for(i=m2;i>=m1;i--)
			{
				a[n1][i]='s';
			}
		}
		else
		{
			printf("Invalid Entry.");
			ship1++;
		}
	}
	else if(m1==m2)
	{
		if((n1-n2)==3)
		{
			for(i=n1;i>=n2;i--)
			{
				a[i][m1]='s';
			}
		}
		else if((n2-n1)==3)
		{
			for(i=n2;i>=n1;i--)
			{
				a[i][m1]='s';
			}
		}
		else
		{
			printf("Invalid Entry.");
			ship1++;
		}
	}
	else
	{
		printf("Invalid Entry.");
		ship1++;
	}
	}while(ship1==1);
}


void battleship3()
{
	do
	{
	ship1=0;
	printf("\n Enter the range of co-cordinates of 3 dots ship:");
	printf("\n Upper range a[i][j]:");
	scanf("%d %d",&n1,&m1);
	printf("Lower range a[i][j]:");
	scanf("%d %d",&n2,&m2);
	if(n1==n2)
	{
		if((m1-m2)==2)
		{
			for(i=m1;i>=m2;i--)
			{
				a[n1][i]='s';
			}
		}
		else if((m2-m1)==2)
		{
			for(i=m2;i>=m1;i--)
			{
				a[n1][i]='s';
			}
		}
		else
		{
			printf("Invalid Entry.");
			ship1++;
		}
	}
	else if(m1==m2)
	{
		if((n1-n2)==2)
		{
			for(i=n1;i>=n2;i--)
			{
				a[i][m1]='s';
			}
		}
		else if((n2-n1)==2)
		{
			for(i=n2;i>=n1;i--)
			{
				a[i][m1]='s';
			}
		}
		else
		{
			printf("Invalid Entry.");
			ship1++;
		}
	}
	else
	{
		printf("Invalid Entry.");
		ship1++;
	}
	}while(ship1==1);
}

void battleship2()
{
	do
	{
	ship1=0;
	printf("\n Enter the range of co-cordinates of 2 dots ship:");
	printf("\n Upper range a[i][j]:");
	scanf("%d %d",&n1,&m1);
	printf("Lower range a[i][j]:");
	scanf("%d %d",&n2,&m2);
	if(n1==n2)
	{
		if((m1-m2)==1)
		{
			for(i=m1;i>=m2;i--)
			{
				a[n1][i]='s';
			}
		}
		else if((m2-m1)==1)
		{
			for(i=m2;i>=m1;i--)
			{
				a[n1][i]='s';
			}
		}
		else
		{
			printf("Invalid Entry.");
			ship1++;
		}
	}
	else if(m1==m2)
	{
		if((n1-n2)==1)
		{
			for(i=n1;i>=n2;i--)
			{
				a[i][m1]='s';
			}
		}
		else if((n2-n1)==1)
		{
			for(i=n2;i>=n1;i--)
			{
				a[i][m1]='s';
			}
		}
		else
		{
			printf("Invalid Entry.");
			ship1++;
		}
	}
	else
	{
		printf("Invalid Entry.");
		ship1++;
	}
	}while(ship1==1);
}

void player2()
{
	int n,x,y;
	clrscr();
	do
	{
	xyz=0;
	printf("\n\n::FOR PLAYER 1::\n\n");

	for (x=0;x<10;x++)
		{
			for(y=0;y<10;y++)
			{
				printf("%3c",b[x][y]);
			}
			printf("\n");
		}

	printf("\n Enter the Co-Ordinates you want to fire:");
	scanf("%d %d",&n,&m);
	if (a[n][m]=='.')
	{
		b[n][m]='o';
	}
	else if (a[n][m]=='s')
	     {
		b[n][m]='x';
		count++;
	     }
	     else
	     {
		printf("Invalid Entry");
		xyz=1;
	     }




	}while(xyz==1);

}


void main()
{
	int x,y,ch,lose=0,abc,turn=0;
	clrscr();
	printf("\n\n::FOR PLAYER 1::\n\n");
	printf("\n Initial Board with all position blank.\n\n");

	for (x=0;x<10;x++)
	{
		for(y=0;y<10;y++)
		{
			a[x][y]='.';
			b[x][y]='.';
			printf("%3c",a[x][y]);
		}
		printf("\n");
	}
	battleship5();
	battleship4();
	battleship3();
	battleship3();
	battleship2();


       for (x=0;x<10;x++)
	{
		for(y=0;y<10;y++)
		{
			printf("%3c",a[x][y]);
		}
		printf("\n");
	}
	printf("\n\n::PLAYER 1 GAME ENDS::\n\n");
	printf("\n\n::PRESS 2 FOR PLAYER 2 TO START THE GAME::\n\n");
	scanf("%d",&ch);
	if (ch==2)
	{
		for(abc=0;abc<60;abc++)
		{
			turn++;
			player2();
			if(count==17)
			{
				lose=1;
				printf("\n\n\n::YOU WIN::\n\n\n");
				printf("\n::%d TURNS::\n",turn);
				break;
			}

		}
	}
	if(lose==0)
	{
		printf("\n\n\n::YOU LOSE::\n\n\n");
		printf("\n::%d TURNS::\n",turn);
	}
	getch();
}