#include<stdio.h>
#include<conio.h>

void main()
{
	int fixy,fixm,fixd,fix,vary,varm,vard,var,lcount=0,temp,flag=0,lyear;
	int month[12]={31,28,31,30,31,30,31,31,30,31,30,31},lmonth[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	clrscr();

	printf("\n Enter the Year:");
	scanf("%d",&vary);
	printf("\n Enter the Month:");
	scanf("%d",&varm);
	printf("\n Enter the Date:");
	scanf("%d",&vard);

	fixy=1000;
	fixm=1;
	fixd=1;
	fix=0;
	flag=0;

	temp=fixy;
	do
	{
		if( temp%400==0||(temp%100!=0 && temp%4==0))
		{
			lcount++;
			lyear=temp;
		}

		temp++;
	}while(temp!=vary);



	if( vary%400==0||(vary%100!=0 && vary%4==0))
		flag=1;


	if (flag==1)
	{
		temp=lcount+(vary-fixy);
		var=temp%7;

		temp=0;
		for(int i=0;i<varm-1;i++)
			temp=temp+lmonth[i];

		var=var+(temp%7);
		var=var%7;

		temp=vard-1;
		var=var+(temp%7);
		var=var%7;
	}

	if (flag==0)
	{

		temp=lcount+(vary-fixy);
		var=temp%7;


		temp=0;
		for(int i=0;i<varm-1;i++)
			temp=temp+month[i];

		var=var+(temp%7);
		var=var%7;

		temp=vard-1;
		var=var+(temp%7);
			var=var%7;
	}
	printf("\n Var = %d",var);

	if (var==0)
		printf("\n On %d-%d-%d the day was Wednesday.",vard,varm,vary);
	else if (var==1)
		printf("\n On %d-%d-%d the day was Thursday.",vard,varm,vary);
	else if (var==2)
		printf("\n On %d-%d-%d the day was Friday.",vard,varm,vary);
	else if (var==3)
		printf("\n On %d-%d-%d the day was Saturday.",vard,varm,vary);
	else if (var==4)
		printf("\n On %d-%d-%d the day was Sunday.",vard,varm,vary);
	else if (var==5)
		printf("\n On %d-%d-%d the day was Monday.",vard,varm,vary);
	else if (var==6)
		printf("\n On %d-%d-%d the day was Tuesday.",vard,varm,vary);


	getch();
}



