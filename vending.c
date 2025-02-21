#include <stdio.h>
#include <stdlib.h>
#include "vending.h"
#include "dispenser.h"
#include "CashRegister.h"

//shows menu to user
void showSelection (int *choice)
{
	printf ("\n======Vending Machine======\n\n");

	printf ("Select your item\n\n");
	printf ("1) Candy [15,000]\n");
	printf ("2) Chips [35,000]\n");
	printf ("3) Cookies [20,000]\n");
	printf ("4) Soda [60,000]\n");
	printf ("5) Exit\n\n");
}

//sells chosen item to user
void sellProduct (int *choice)
{
	switch (*choice)
	{

		case 1:
		{
			system ("cls");

			//call getCount ()
			getCandyCount ();

			//checks data in file candy.txt and lets code run if data is not equal to "0"
			if (stock[0] != 0)
			{
				printf ("\n\nPlease enter amount\n");
				scanf ("%d", &amount);

				if (amount == 0)
				{
					printf ("\n\nInvalid Amount. Please re-enter");	
				}
				else if (amount >= 101)
				{
					printf ("\n\nInvalid Amount. Please re-enter");	
				}
				else if (amount < 0)
				{
					printf ("\n\nInvalid Amount. Please re-enter");	
				}
				else 
				{
					//call getProductCost ()
					getProductCost (&amount, &total1, &total2, &total3, &total4);

					//call makeSale ()
					makeSale1 ();
					
					if (total12 == 0)
					{
						//call updateCount ()
						updateCandyCount ();
					}
				}
			}
			else
			{
				printf ("\n\nItem is out of stock! Please reselect.");
			}

			break;
		}

		case 2:
		{
			system ("cls");

			//call getCount ()
			getChipsCount ();

			//checks data in file candy.txt and lets code run if data is not equal to "0"
			if (stock[1] != 0)
			{
				printf ("\n\nPlease enter amount\n");
				scanf ("%d", &amount);

				if (amount == 0)
				{
					printf ("\n\nInvalid Amount. Please re-enter");	
				}
				else if (amount >= 101)
				{
					printf ("\n\nInvalid Amount. Please re-enter");	
				}
				else if (amount < 0)
				{
					printf ("\n\nInvalid Amount. Please re-enter");	
				}
				else 
				{
					//call getProductCost ()
					getProductCost (&amount, &total1, &total2, &total3, &total4);

					//call makeSale ()
					makeSale2 ();
					
					if (total22 == 0)
					{
						//call updateCount ()
						updateChipsCount ();
					}
				}
			}
			else
			{
				printf ("\n\nItem is out of stock! Please reselect.");
			}

			break;			
		}
		case 3:
		{
			system ("cls");

			//call getCount ()
			getCookiesCount ();

			//checks data in file candy.txt and lets code run if data is not equal to "0"
			if (stock[2] != 0)
			{
				printf ("\n\nPlease enter amount\n");
				scanf ("%d", &amount);

				if (amount == 0)
				{
					printf ("\n\nInvalid Amount. Please re-enter");	
				}
				else if (amount >= 101)
				{
					printf ("\n\nInvalid Amount. Please re-enter");	
				}
				else if (amount < 0)
				{
					printf ("\n\nInvalid Amount. Please re-enter");	
				}
				else 
				{
					//call getProductCost ()
					getProductCost (&amount, &total1, &total2, &total3, &total4);

					//call makeSale ()
					makeSale3 ();
					
					if (total32 == 0)
					{
						//call updateCount ()
						updateCookiesCount ();
					}
				}
			}
			else
			{
				printf ("\n\nItem is out of stock! Please reselect.");
			}

			break;
		}
		case 4:
		{
			system ("cls");

			//call getCount ()
			getSodaCount ();

			//checks data in file candy.txt and lets code run if data is not equal to "0"
			if (stock[3] != 0)
			{
				printf ("\n\nPlease enter amount\n");
				scanf ("%d", &amount);

				if (amount == 0)
				{
					printf ("\n\nInvalid Amount. Please re-enter");	
				}
				else if (amount >= 101)
				{
					printf ("\n\nInvalid Amount. Please re-enter");	
				}
				else if (amount < 0)
				{
					printf ("\n\nInvalid Amount. Please re-enter");	
				}
				else 
				{
					//call getProductCost ()
					getProductCost (&amount, &total1, &total2, &total3, &total4);

					//call makeSale ()
					makeSale4 ();
				
					if (total42 == 0)
					{
						//call updateCount ()
						updateSodaCount ();
					}
				}
			}
			else
			{
				printf ("\n\nItem is out of stock! Please reselect.");
			}

			break;
		}
		case 5:
		{
			system ("cls");
			printf ("Exited Successfully\n");


			break;

			default:
				printf ("INVALID INPUT! Please enter the correct number\n");
		}
	}
}
