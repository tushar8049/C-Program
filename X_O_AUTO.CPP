#include<stdio.h>
#include<conio.h>
#define max 15


int exit,winvar,wincounter;
int flag;
char a[3][3];

void cominsert();
void cominsert1();

void check(int x)
{
	int checkvar1,i,j,count,finalcon=0;
	if(x==1)
	{
	checkvar1='X';
	i=0;
	count=0;
	while(a[i][i]==checkvar1)
	{
		count++;
		i++;
	}
	if (count==3)
		finalcon=1;


	i=2;
	j=0;
	count=0;
	while(a[i][j]==checkvar1)
	{
		count++;
		i--;
		j++;
	}
	if (count==3)
		finalcon=1;

	for (i=0;i<3;i++)
	{
		count=0;
		j=0;
		while(a[i][j]==checkvar1)
		{
			count++;
			j++;
		}
		if (count==3)
		{
			finalcon=1;
			break;
		}
	}

	for (j=0;j<3;j++)
	{
		count=0;
		i=0;
		while(a[i][j]==checkvar1)
		{
			count++;
			i++;
		}
		if (count==3)
		{
			finalcon=1;
			break;
		}
	}
	}

	if(x==2)
	{
	checkvar1='O';
	i=0;
	count=0;
	while(a[i][i]==checkvar1)
	{
		count++;
		i++;
	}
	if (count==3)
		finalcon=1;

	i=2;
	j=0;
	count=0;
	while(a[i][j]==checkvar1)
	{
		count++;
		i--;
		j++;
	}
	if (count==3)
		finalcon=1;

	for (i=0;i<3;i++)
	{
		count=0;
		j=0;
		while(a[i][j]==checkvar1)
		{
			count++;
			j++;
		}
		if (count==3)
		{
			finalcon=1;
			break;
		}
	}

	for (j=0;j<3;j++)
	{
		count=0;
		i=0;
		while(a[i][j]==checkvar1)

		{
			count++;
			i++;
		}
		if (count==3)
		{
			finalcon=1;
			break;
		}
	}

	}

	if (finalcon==1 && x==1)
	{
		clrscr();
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%3c",a[i][j]);
			}
			printf("\n");
		}
		printf("\n ::Player 1 wins::");
		exit=1;
	}
	if (finalcon==1 && x==2)
	{
		clrscr();
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%3c",a[i][j]);
			}
			printf("\n");
		}
		printf("\n ::Computer Wins::");
		exit=1;
	}
}

/*
void check(int x)
{
	int checkvar1,i,j,count,finalcon=0;
	winvar=0;
	if(x==1)
	{
	checkvar1='X';
	i=0;
	count=0;
	while(a[i][i]==checkvar1)
	{
		count++;
		i++;
	}
	if (count==3)
		finalcon=1;
	if (count==2)
		winvar=1;


	i=2;
	j=0;
	count=0;
	while(a[i][j]==checkvar1)
	{
		count++;
		i--;
		j++;
	}
	if (count==3)
		finalcon=1;
	if (count==2)
		winvar=1;

	for (i=0;i<3;i++)
	{
		count=0;
		j=0;
		while(a[i][j]==checkvar1)
		{
			count++;
			j++;
		}
		if (count==3)
		{
			finalcon=1;
			break;
		}
	}
	if (count==2)
		winvar=1;

	for (j=0;j<3;j++)
	{
		count=0;
		i=0;
		while(a[i][j]==checkvar1)
		{
			count++;
			i++;
		}
		if (count==3)
		{
			finalcon=1;
			break;
		}
	}
	if (count==2)
		winvar=1;
	}

	if(x==2)
	{
	checkvar1='O';
	i=0;
	count=0;
	while(a[i][i]==checkvar1)
	{
		count++;
		i++;
	}
	if (count==3)
		finalcon=1;

	i=2;
	j=0;
	count=0;
	while(a[i][j]==checkvar1)
	{
		count++;
		i--;
		j++;
	}
	if (count==3)
		finalcon=1;

	for (i=0;i<3;i++)
	{
		count=0;
		j=0;
		while(a[i][j]==checkvar1)
		{
			count++;
			j++;
		}
		if (count==3)
		{
			finalcon=1;
			break;
		}
	}

	for (j=0;j<3;j++)
	{
		count=0;
		i=0;
		while(a[i][j]==checkvar1)

		{
			count++;
			i++;
		}
		if (count==3)
		{
			finalcon=1;
			break;
		}
	}

	}

	if (finalcon==1 && x==1)
	{
		clrscr();
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%3c",a[i][j]);
			}
			printf("\n");
		}
		printf("\n ::Player 1 wins::");
		wincounter=1;
		exit=1;
	}
	if (finalcon==1 && x==2)
	{
		clrscr();
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%3c",a[i][j]);
			}
			printf("\n");
		}
		printf("\n ::Computer wins::");
		wincounter=1;
		exit=1;
	}
}*/


void insert(int x)
{
	int i,j,m,n;
	if (x==1)
	{
		do
		{
		clrscr();
		printf("\n\n::Player 1::\n\n");

		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%3c",a[i][j]);
			}
			printf("\n");
		}

		printf("\n Enter the Co-Ordinates:");
		scanf("%d %d",&m,&n);
		}while(a[m][n]=='O'||a[m][n]=='X');
		a[m][n]='X';

		check(1);

	}

	if (x==2)
	{
		clrscr();
		printf("\n\n::Computer::\n\n");
		cominsert1();
		getch();
		check(2);

	}
}

void insert1(int x)
{
	int i,j,m,n;
	if (x==2)
	{
		do
		{
		clrscr();
		printf("\n\n::Player 1::\n\n");

		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%3c",a[i][j]);
			}
			printf("\n");
		}

		printf("\n Enter the Co-Ordinates:");
		scanf("%d %d",&m,&n);
		}while(a[m][n]=='O'||a[m][n]=='X');
		a[m][n]='X';

		check(1);

	}

	if (x==1)
	{
		clrscr();
		printf("\n\n::Computer::\n\n");
		cominsert1();
		check(2);

	}
}

void cominsert1()
{
	int temp,temp1;
	int checkblank,checkwin,checkvar1,i,j,count;
	int invar;
	invar=0;
	checkvar1='X';
	checkwin='O';
	checkblank='.';
	i=0;

	if (invar==0)
	{
		count=0;
		temp=-1;
		temp1=-1;
		for (i=0;i<3;i++)
		{
			if (a[i][i]==checkwin)
			{
				count++;
			}
			if (a[i][i]==checkblank)
			{
				temp=i;
				temp1=i;
			}
		}
		if (count==2 && temp!=-1 && temp1!=-1)
		{
			a[temp][temp1]='O';
			invar=1;
			printf("\n ::5:: \n");
		}
	}
	if (invar==0)
	{
		count=0;
		temp=-1;
		temp1=-1;
		for (i=0;i<3;i++)
		{
			if (a[i][i]==checkvar1)
			{
				count++;
			}
			if (a[i][i]==checkblank)
			{
				temp=i;
				temp1=i;
			}
		}
		if (count==2 && temp!=-1 && temp1!=-1)
		{
			a[temp][temp1]='O';
			invar=1;
			printf("\n ::1:: \n");
		}
	}

	if (invar==0)
	{
		count=0;

		for (i=0;i<3;i++)
		{
			temp=-1;
			temp1=-1;
			count=0;
			j=0;
			for (j=0;j<3;j++)
			{
				if (a[i][j]==checkwin)
				{
					count++;
				}
				if (a[i][j]==checkblank)
				{
					temp=i;
					temp1=j;
				}
			}
			if (count==2)
				break;
		}
		if (count==2 && temp!=-1 && temp1!=-1)
		{
			a[temp][temp1]='O';
			invar=1;
			printf("\n ::7:: \n");
		}
	}
	if (invar==0)
	{
		count=0;

		for (i=0;i<3;i++)
		{
			temp=-1;
			temp1=-1;
			count=0;
			j=0;
			for (j=0;j<3;j++)
			{
				if (a[i][j]==checkvar1)
				{
					count++;
				}
				if (a[i][j]==checkblank)
				{
					temp=i;
					temp1=j;
				}
			}
			if (count==2)
				break;
		}
		if (count==2 && temp!=-1 && temp1!=-1)
		{
			a[temp][temp1]='O';
			invar=1;
			printf("\n ::3:: \n");
		}
	}

	if (invar==0)
	{
		count=0;

		for (j=0;j<3;j++)
		{
			temp=-1;
			temp1=-1;
			count=0;
			i=0;
			for (i=0;i<3;i++)
			{
				if (a[i][j]==checkwin)
				{
					count++;
				}
				if (a[i][j]==checkblank)
				{
					temp=i;
					temp1=j;
				}
			}
			if (count==2)
				break;
		}
		if (count==2 && temp!=-1 && temp1!=-1)
		{
			a[temp][temp1]='O';
			invar=1;
			printf("\n ::8:: \n");
		}
	}
	if (invar==0)
	{
		count=0;

		for (j=0;j<3;j++)
		{
			temp=-1;
			temp1=-1;
			count=0;
			i=0;
			for (i=0;i<3;i++)
			{
				if (a[i][j]==checkvar1)
				{
					count++;
				}
				if (a[i][j]==checkblank)
				{
					temp=i;
					temp1=j;
				}
			}
			if (count==2)
				break;
		}
		if (count==2 && temp!=-1 && temp1!=-1)
		{
			a[temp][temp1]='O';
			invar=1;
			printf("\n ::4:: \n");
		}
	}

	if (invar==0)
	{
		count=0;
		temp=-1;
		temp1=-1;
		for (i=2,j=0;i>=0;i--,j++)
		{
			if (a[i][j]==checkwin)
			{
				count++;
			}
			if (a[i][j]==checkblank)
			{
				temp=i;
				temp1=j;
			}
		}
		if (count==2 && temp!=-1 && temp1!=-1)
		{
			a[temp][temp1]='O';
			invar=1;
			printf("\n ::6:: \n");
		}
	}
	if (invar==0)
	{
		count=0;
		temp=-1;
		temp1=-1;
		for (i=2,j=0;i>=0;i--,j++)
		{
			if (a[i][j]==checkvar1)
			{
				count++;
			}
			if (a[i][j]==checkblank)
			{
				temp=i;
				temp1=j;
			}
		}
		if (count==2 && temp!=-1 && temp1!=-1)
		{
			a[temp][temp1]='O';
			invar=1;
			printf("\n ::2:: \n");
		}
	}

	if (invar==0)
	{

		cominsert();
	}
}



void cominsert()
{
	int temp,i,j;
	temp=0;

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if (i==2 && j==2)
			{
				i=0;
				j=0;
			}
			if(a[i][j]=='.')
			{
				temp++;
			}
			if (temp==max)
				break;
		}
		if (temp==max)
			break;
	}

	a[i][j]='O';
	printf("\n ::9:: \n");
}



void main()
{
	int i,j,m,n,ch;
	clrscr();
	exit=0;
	wincounter=0;
	flag=0;
	printf("\n 1. User\n 2. Computer");
	printf("\n Enter who takes the first chance: ");
	scanf("%d",&ch);
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			a[i][j]='.';
		}
	}
	if (ch==1)
	{
		while (flag<=8 && exit==0)
		{
			if (flag%2==0)
				insert(1);
			else
				insert(2);
			flag++;
		}
		if (flag > 8 && wincounter==0)
		{
			printf("\n::TIE::");
		}
	}
	else if (ch==2)
	{
		while (flag<=8 && exit==0)
		{
			if (flag%2==0)
				insert1(1);
			else
				insert1(2);
			flag++;
		}
		if (flag > 8 && wincounter==0)
		{
			printf("\n::TIE::");
		}
	}
	getch();

}