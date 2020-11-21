#include "income.h"
void Menu2()
{
	int menu2,i;
	char filename[25] = "storage/";
	char list_type_income [8][20] = {"Refund","Special","Revenue","Free","Business income","Withdraw","Borrow","Other"};
	char list_type_expense [7][20] = {"Food","Transport","Accommodation","Groceries","Services","Utilities","Others"};
	float amount[7] = {0};
	FILE *p1,*p2,*p3;
	
	struct list dis;
	
	do{
	
	system("cls");

	//Fill date.
		int day,month,year;
		printf("Plese Enter Date (Day-Month-Year)\n");
		do{
			day = InvalidInput("Day   : ",1,31);
			month = InvalidInput("Month : ",1,12);
			if(!(Valid_daymonth(day,month))) printf("Invalid choice. Please try again.\n");
		}while(!(Valid_daymonth(day,month)));
		year = InvalidInput("Year  : ",0,INT_MAX);
	
		sprintf(filename,"storage/%02d-%02d-%din.txt",day,month,year);
		sprintf(filename,"storage/%02d-%02d-%dout.txt",day,month,year);
		sprintf(filename,"storage/%dtotal.txt",year);
	
		printf("====================================================\n");
		printf("==     List       == Income == Expense ==  Detail ==\n");
		printf("====================================================\n");

	if((p1=fopen("storage/%02d-%02d-%din.txt","r"))==NULL)
		
	while (!feof(p1)) 
	{
		fscanf(p1,"%s %s %.2f %s",dis.name,dis.type,&dis.amount,dis.detail);
		printf("==  [%s] %s       ==  %.2f  ==    -    ==    %s    ==\n",dis.name,dis.type,dis.amount,dis.detail);
	}break;
	fclose(p1);	
		
	if((p2=fopen("storage/%02d-%02d-%dout.txt","r"))==NULL)
	
	while (!feof(p2)) 
	{
		fscanf(p2,"%s %s %.2f %s",dis.name,dis.type,&dis.amount,dis.detail);	
		printf("==  [%s] %s       ==   -    ==  %.2f   ==    %s    ==\n",dis.name,dis.type,dis.amount,dis.detail);
	}break;	
	fclose(p2);
		
		printf("====================================================\n");
		
	if((p3=fopen("storage/%dtotal.txt","r"))==NULL)
		printf("=====  Total      ==  %.2f  ==  %.2f  ===============\n",p3);break;
	fclose(p3);	
		printf("====================================================\n");
		

	printf("\nDo you want to see other day (Press 1(Yes),0(No)) : ");
	menu2 = InvalidInput(" ",0,1);
	
	//Go to selected menu.
	switch(menu2){
		case 1: printf("Go to Menu2 \n"); break;
		default: printf("Back to Main Menu \n"); break;
	}
	delay(1000);
	
	}while (menu2 !=0 );
	
}

