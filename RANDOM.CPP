#include<conio.h>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<iostream.h>

void main()
{
	clrscr();
	int n;
	double time;
	clock_t tic=clock();
	printf("\n Enter the number of random numbers you want to print:");
	scanf("%d",&n);
	int a[10][10];
	int i,j,k=1,temp,temp1,temp2;
	for (i=0;i<10;i++)
		for(j=0;j<10;j++,k++)
			a[i][j]=k;

	clock_t toc=clock();
	cout<<"\n Time is "<<toc-tic<<endl;
	time=toc-tic;
	temp1=0;
	temp2=0;
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
					while(a[i][j]==0)
					{
						j++;
						if(j==9)
							i=0;
					}
					cout<<a[i][j]<<endl;
					a[i][j]=0;
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
	getch();
}