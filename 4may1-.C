#include<stdio.h>
#include<conio.h>

void main()
{

   int month;
   clrscr();

   printf("\npress 1 to january");
   printf("\npress 2 to february");
   printf("\npress 3 to march");
   printf("\npress 4 to april");
   printf("\npress 5 to May");
   printf("\npress 6 to june");
   printf("\npress 7 to july");
   printf("\npress 8 to August");
   printf("\npress 9 to September");
   printf("\npress 10 to October");
   printf("\npress 11 to November");
   printf("\npress 12 to December");
   printf("\nenter your choice");
   scanf("%d",&month);
   switch(month)
   {
     case 1:
	     printf("january");
	     break;
     case 2:
	     printf("febryary");
	     break;
      case 3:
	     printf("march");
	     break;
      case 4:
	     printf("april");
	     break;
      case 5:
	     printf("May");
	     break;
     case 6:
	     printf("june");
	     break;
     case 7:
	     printf("july");
	     break;
     case 8:
	     printf("august");
	     break;
     case 9:
	     printf("september");
	     break;
     case 10:
	     printf("october");
	     break;
     case 11:
	     printf("November");
	     break;
      case 12:
	     printf("December");
	     break;
      default :
	     printf("plz enter valid choice!");
     }
   getch();
}

