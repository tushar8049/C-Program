//MineSweeper
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

char a[10][10],user[10][10];
int bomb[10][2],x,y,f_count;

void place_mine(int time)
{
	int temp1=0,temp,i,j,l,m,k,count=0;
	int temp2=0,n=10;
	while(n!=0)
	{
//		cout<<"temp="<<temp<<endl;
		temp=0;
		for(i=temp1;i<10;i++)
		{
			for(j=temp2;j<10;j++)
			{
				if (i==9 && j==9)
				{
					i=0;
					j=0;
				}
				temp++;
				if (temp==time)
				{
					while(a[i][j]!='.')
					{
						if(j==9)
						{
							j=0;
							i++;
						}
						if(i==9)
						{
							i=0;
						}
						j++;
					}
//					cout<<a[i][j]<<endl;
					a[i][j]='o';

					bomb[count][0]=i;
					bomb[count][1]=j;
					count++;
					break;
				}
			}
			if(temp==time)
				break;
		}
		temp1=j;
		temp2=i;
//		cout<<"temp="<<temp<<endl;
//		cout<<endl<<"temp1="<<temp1<<endl<<"temp2="<<temp2<<endl;
//		cout<<n<<endl;
		n--;
	}
	cout<<"\n o = "<<count<<endl;
}

void place_1(int time)
{
	int temp1=0,temp,i,j,k,l,m,count=0;
	int temp2=0,n=25;
	while(n!=0)
	{
//		cout<<"temp="<<temp<<endl;
		temp=0;
		for(i=temp1;i<10;i++)
		{
			for(j=temp2;j<10;j++)
			{
				if (i==9 && j==9)
				{
					i=0;
					j=0;
				}
				temp++;
				fflush(stdin);
				if (temp==time)
				{
					while(a[i][j]!='.')
					{
						if(j==9)
						{
							j=0;
							i++;
						}
						if(i==9)
						{
							i=0;
						}
						j++;
					}
//					cout<<a[i][j]<<endl;
					a[i][j]='1';
					count++;
					break;
				}
			}
			if(temp==time)
				break;
		}
		temp1=j;
		temp2=i;
//		cout<<"temp="<<temp<<endl;
//		cout<<endl<<"temp1="<<temp1<<endl<<"temp2="<<temp2<<endl;
//		cout<<n<<endl;
		n--;
	}
	cout<<"\n 1 = "<<count<<endl;
}
void place_2(int time)
{
	int temp1=0,temp,i,j,k,l,m,count=0;
	int temp2=0,n=15;
	while(n!=0)
	{
//		cout<<"temp="<<temp<<endl;
		temp=0;
		for(i=temp1;i<10;i++)
		{
			for(j=temp2;j<10;j++)
			{
				if (i==9 && j==9)
				{
					i=0;
					j=0;
				}
				temp++;
				fflush(stdin);
				if (temp==time)
				{
					while(a[i][j]!='.')
					{
						if(j==9)
						{
							j=0;
							i++;
						}
						if(i==9)
						{
							i=0;
						}
						j++;
					}
//					cout<<a[i][j]<<endl;
					a[i][j]='2';
					count++;
					break;
				}
			}
			if(temp==time)
				break;
		}
		temp1=j;
		temp2=i;
//		cout<<"temp="<<temp<<endl;
//		cout<<endl<<"temp1="<<temp1<<endl<<"temp2="<<temp2<<endl;
//		cout<<n<<endl;
		n--;
	}
	cout<<"\n 2 = "<<count<<endl;
}
int check_bomb();
void put_blank(int i, int j,int call);
void check_1_2();
void check_blank();
void player()
{
	int i,j,k,l,m,flag;
	f_count=0;
	for(i=0;i<10;i++)
		for (j=0;j<10;j++)
			user[i][j]='.';
	do
	{
		clrscr();

		flag=0;
		cout<<"::MineSweeper::"<<endl;
		cout<<endl;
		for(i=0;i<10;i++)
		{
			if(i==0)
				cout<<" ";
			cout<<"  "<<i;
		}
		cout<<endl;
		for(i=0;i<10;i++)
		{
			for(j=0;j<10;j++)
			{
				if(j==0)
					cout<<i;
				cout<<"  "<<user[i][j];
			}
			cout<<endl;
		}
		cout<<"\n Enter the Co-Ordinates:";
		cin>>x>>y;
		check_blank();
		check_1_2();
		flag=check_bomb();
		f_count++;
//		getch();
	}while(flag!=1);
}

int check_bomb()
{
	int i,j,k,l,m;
	int temp1,temp2;
	if(a[x][y]=='o')
	{
		for (i=0;i<10;i++)
		{
			temp1=bomb[i][0];
			temp2=bomb[i][1];
			user[temp1][temp2]='o';
		}
	}
	if(a[x][y]=='o')
		return 1;
	else
		return 0;
}

void check_1_2()
{
	int i,j,k,l,m;
	int temp1,temp2;
	if(a[x][y]=='1')
		user[x][y]='1';
	else if(a[x][y]=='2')
		user[x][y]='2';
}
void check_blank()
{
	int i,j,k,l,m,temp1,temp,temp2;

	put_blank(x,y,0);

}
int putcount;
void put_blank(int i, int j,int call)
{
	int l,m;
	putcount++;
	if (a[i][j]=='.'&& i>=0 && j>=0 && i<10 && j<10)
	{
//		cout<<"\n i = "<<i<<"\n j = "<<j<<"\n call = "<<call;
//		cout<<"\n putcount = "<<putcount;
		user[i][j]='_';
		a[i][j]='_';
//		cout<<"\n user["<<i<<"]["<<j<<"] = "<<user[i][j];
//		getch();
		l=i-1;
		m=j-1;
		put_blank(l,m,1);
		l=i-1;
		m=j;
		put_blank(l,m,2);
		l=i-1;
		m=j+1;
		put_blank(l,m,3);
		l=i;
		m=j+1;
		put_blank(l,m,4);
		l=i+1;
		m=j+1;
		put_blank(l,m,5);
		l=i+1;
		m=j;
		put_blank(l,m,6);
		l=i+1;
		m=j-1;
		put_blank(l,m,7);
		l=i;
		m=j-1;
		put_blank(l,m,8);
	}
	else if (a[i][j]=='1' && i>=0 && j>=0 && i<10 && j<10)
	{
		user[i][j]=a[i][j];
	}
	else if (a[i][j]=='2' && i>=0 && j>=0 && i<10 && j<10)
	{
		user[i][j]=a[i][j];
	}
	else if (a[i][j]=='o' && i>=0 && j>=0 && i<10 && j<10)
	{
		user[i][j]='.';
	}
}




void main()
{
	clrscr();
	int time;
	int i,j,k;
	clock_t tic=clock();
	cout<<"::MineSweeper::"<<endl;
	cout<<"\n Press ENTER to start the game.";
	for(i=0;i<10;i++)
		for(j=0;j<10;j++)
			a[i][j]='.';
	getch();
	clock_t toc=clock();
	time=((toc-tic)*4)+3;
//	cout<<"\n Time= "<<time<<endl;
	place_mine(time);
	time=((toc-tic)*4)+3;
//	cout<<"\n Time= "<<time<<endl;
	place_1(time);
	time=((toc-tic)*7)+1;
//	cout<<"\n Time= "<<time<<endl;
	place_2(time);

//	for(i=0;i<10;i++)
//	{
//		if(i==0)
//			cout<<" ";
//		cout<<"  "<<i;
//	}
	cout<<endl;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
//			if(j==0)
//				cout<<i;
			cout<<"  "<<a[i][j];
		}
		cout<<endl;
	}

	for(i=0;i<10;i++)
	{
		cout<<bomb[i][0]<<" "<<bomb[i][1]<<"||";
	}
	getch();

	player();

	clrscr();
	cout<<"::MineSweeper::"<<endl;
	cout<<endl;
	for(i=0;i<10;i++)
	{
		if(i==0)
			cout<<" ";
		cout<<"  "<<i;
	}
	cout<<endl;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(j==0)
				cout<<i;
			cout<<"  "<<user[i][j];
		}
		cout<<endl;
	}
	cout<<"\n You took "<<f_count<<" chances";

	getch();
}