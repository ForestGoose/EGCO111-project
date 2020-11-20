#include "income.h"

//Check line 31, 42 & 57
/*
typedef struct
{
	char dd[10],mm[10];
	int yy;
}date;
*/
void Menu2()
{
	int menu2,i;
	char filename[25] = "storage/";
	char list_type_income [8][20] = {"Refund","Special","Revenue","Free","Business income","Withdraw","Borrow","Other"};
	char list_type_expense [7][20] = {"Food","Transport","Accommodation","Groceries","Services","Utilities","Others"};
	float amount[7] = {0};
	//char Name[Type] = "Income Detail","Expense Detail";
	FILE *p;
	//date date1;
			
	
	do{
	
	system("cls");

	//Fill date.
		int day,month,year;
		printf("Plese Enter Date (Day-Month-Year):\n");
		do{
			day = InvalidInput("Day   :",1,31);
			month = InvalidInput("Month : ",1,12);
			if(!(Valid_daymonth(day,month))) printf("Invalid choice. Please try again.\n");
		}while(!(Valid_daymonth(day,month)));
		year = InvalidInput("Year  : ",0,INT_MAX);
	
		sprintf(filename,"storage/%02d-%02d-%d.txt",day,month,year);//Check filname correctly
	
		//filename = ("storage/%02d%02d%d",day,month,year); 
	
	if((p=fopen(filename,"r"))==NULL)
/*	{
		printf("Cannot open file \n");
		
	}*/
	
	while (!feof(p)) 
	{
		fscanf(p,"storage/%02d-%02d-%din.txt",&day,&month,&year);//Look file and Menu1 that how information arrange.
		//if(date==filename)
		printf("\nIncome.\n");
		printf("======================================\n");
		printf("==     List    == Amount == Detail  ==\n");
		printf("======================================\n");
		printf("==       %s    ==  %.2f  == %s      ==\n",list_type_income[i],amount[i],[Type]Name Income Detail);
		printf("======================================\n");
		printf("=====    Total   =========    %.2f    ==\n");
		printf("======================================\n");
		break;
	}

	while (!feof(p)) 
	{
		fscanf(p,"storage/%02d-%02d-%dout.txt",&day,&month,&year);//Look file and Menu1 that how information arrange.
		//if(date==filename)
		printf("\nExpense.\n");
		printf("======================================\n");
		printf("==     List    == Amount == Detail  ==\n");
		printf("======================================\n");
		printf("==       %s    ==  %.2f  == %s      ==\n",list_type_expense[i],amount[i],[Type]Name Expense Detail);
		printf("======================================\n");
		printf("=====    Total   =========    %.2f    ==\n");
		printf("======================================\n");
		break;
	}
	
	fclose(p);
	

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

