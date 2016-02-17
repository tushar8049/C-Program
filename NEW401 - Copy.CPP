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
	printf(" 1 indicates booked seats and 0 indicates the seats");
	printf(" that can be booked. \n");
	printf(" NOTE: The seat numbering starts from 0 and not from 1. \n");
	printf(" NOTE: There are total 30 seats in the bus. \n");

	for (i=0;i<80;i++)
		printf("-");
	printf("\n\n Enter the fix number of seats a person can book:");
	scanf("%d",&part);
	fflush(stdin);

	for (i=0;i<max;i++)
		a[i]=0;

	printf("\n Current Seat booking Status:\n");
	for (i=0;i<max;i++)
	{
		if (i%part==0)
		{
			printf("    ");
		}
		printf("%d",a[i]);
	}

	do
	{
		printf("\n\n Enter the start position of the seats you want to book :");

		scanf("%d",&pos);
		flag=0;

		if ((pos%part) == 0)
			flag=1;


//		printf("\n ::FLAG=%d::\n",flag);

		if (flag==1)
		{

			if (a[pos]==0)
			{
//				printf("\n ::1::\n");
				printf("\n Booking is available as per your requirment from seat number %d.",pos);
				for (j=pos;j<pos+part;j++)
					a[j]=1;
			}
			else if (a[pos-part]==0)
			{
//				printf("\n ::3::\n");
				printf("\n Booking is not available as per your requirment.");
				printf("\n Your seats are booked from number %d.",pos-part);
				for (i=pos-part;i<pos;i++)
					a[i]=1;
			}
			else if (a[pos+part]==0)
			{
//				printf("\n ::4::\n");
				printf("\n Booking is not available as per your requirment.");
				printf("\n Your seats are booked from number %d.",pos+part);
				no=pos+part;
				for (i=no;i<no+part;i++)
					a[i]=1;
			}
			else
			{
//				printf("\n ::2::\n");
				i=0;
				count=0;
				while(a[i] != 0)
				{
					count=i;
					i=i+part;
				}
//				printf("\n ::COUNT=%d::",count);
				printf("\n Booking is not available as per your requirment.");
				printf("\n Your seats are booked from number %d.",count+part);

				count=i;
				for (i=count;i<count+part;i++)
					a[i]=1;
			}
		}
		if (flag == 0)
		{

			pos=pos/part;
			pos=pos*part;

			if (a[pos]==0)
			{
//				printf("\n ::3::\n");
				printf("\n Booking is not available as per your requirment.");
				printf("\n Your seats are booked from number %d.",pos);
				for (i=pos;i<pos+part;i++)
					a[i]=1;
			}
			else if (a[pos+part]==0)
			{
//				printf("\n ::4::\n");
				printf("\n Booking is not available as per your requirment.");
				printf("\n Your seats are booked from number %d.",pos+part);
				no=pos+part;
				for (i=no;i<no+part;i++)
					a[i]=1;
			}
			else
			{

//				printf("\n ::5::\n");
				i=0;
				while(a[i] != 0)
				{
					count=i;
					i=i+part;
				}
				count=i;
				printf("\n Booking is not available as per your requirment.");
				printf("\n Your seats are booked from number %d.",count);
				for (i=count;i<count+part;i++)
					a[i]=1;
			}
		}
		printf("\n Current Seat booking Status:\n");
		for (i=0;i<max;i++)
		{
			if (i%part==0)
			{
				printf("    ");
			}
			printf("%d",a[i]);
		}
		i=0;
		while(a[i]!=0)
		{
			i++;
		}
		if(i>=29)
		{
			flag=2;
		}
		if(flag == 2)
		{
			printf("\n");
			for (i=0;i<80;i++)
				printf("-");
			printf("\n\n Bus is full. Better luck next time!!!\n\n");
			for (i=0;i<80;i++)
				printf("-");
			break;
		}
		else
		{
			printf("\n\n Enter 1 to continue booking and 0 to exit:");
			scanf("%d",&ch);
			for (i=0;i<80;i++)
				printf("-");
		}

	}while(ch != 0);



	getch();
}
