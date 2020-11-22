#include "income.h"

int Menu2()
{
	int menu2;
	char filename[25] = "storage/";
	FILE *p1,*p2,*p3;
	
	struct list type;
	
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
		
	printf("\n");
	if((p1=fopen(filename,"r"))==NULL)
	{
		printf("Cannot open file \n");
		return 1;
	}
	while (!feof(p1)) 
	{
		fscanf(p1,"%s %d %f",type.name,type.type,&type.amount);
		//fgets(type.detail,20,p1);
		printf("%s [%s] %.2f \n",type.name,type.type,type.amount);
	
	}
	fclose(p1);	
	

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

