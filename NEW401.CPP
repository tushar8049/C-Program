#include<stdio.h>
#include<conio.h>
#define max 30
void main()
{
	int a[max],pos,i,flag=0,ch,j,count,no,grp,part;
	clrscr();
	printf("\nThere was a bus in which the booking of the seats was");
	printf(" conducted. Each and every person was alloted only a fix number of");
	printf(" seats, neither more nor less. The seats alloted would be in a");
	printf(" sequential manner. Random seats are not allowed.");
	printf(" The number 1 indicates booked seats and 0 indicates the seats");
	printf(" that can be booked. \n");

	for (i=0;i<80;i++)
		printf("-");
	printf("\n\n Enter the fix number of seats a person can book:");
	scanf("%d",&part);

		for (i=0;i<max;i++)
		printf("%d",a[i]);


	for (i=0;i<max;i++)
		a[i]=0;
	do
	{
		printf("\n Enter the position :");
		fflush(stdin);
		scanf("%d",&pos);
		flag=0;



		for (i=0;i<part;i++)
		{
			j=part*i;
			if (pos == j)
				flag=1;
		}

		if (flag==1)
		{

			if (a[pos]==0)
			{
				for (j=pos;j<pos+part;j++)
					a[j]=1;
			}
			else
			{
				i=0;
				while(a[i] != 0)
				{
					count=i;
					i=i+part;
				}
				for (i=count;i<count+part;i++)
					a[i]=1;
			}
		}
		else
		{

			pos=pos/part;
			pos=pos*part;

			if (a[pos]==0)
			{

				for (i=pos;i<pos+part;i++)
					a[i]=1;
			}
			else if (a[pos+part]==0)
			{

				no=pos+part;
				for (i=no;i<no+part;i++)
					a[i]=1;
			}
			else
			{

				i=0;
				while(a[i] != 0)
				{
					count=i;
					i=i+part;
				}
				count=i;
				for (i=count;i<count+part;i++)
					a[i]=1;
			}
		}

		for (i=0;i<max;i++)
			printf("%d",a[i]);
		printf("\n Enter 1 to continue and 0 to exit:");
		scanf("%d",&ch);
	}while(ch != 0);



	getch();
}
