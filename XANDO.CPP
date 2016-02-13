#include<stdio.h>
#include<conio.h>


int exit;
char a[3][3];


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
		printf("\n ::Player 2 wins::");
		exit=1;
	}
}


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
		do
		{
		clrscr();
		printf("\n\n::Player 2::\n\n");

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
		a[m][n]='O';
		check(2);
	}
}

void main()
{
	int i,j,m,n,flag=0;
	clrscr();
	exit=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			a[i][j]='.';
		}
	}

	while (flag<=8 && exit==0)
	{
		if (flag%2==0)
			insert(1);
		else
			insert(2);
		flag++;
	}
	if (flag >8)
	{
		printf("\n::TIE::");
		break;
	}
	getch();

}