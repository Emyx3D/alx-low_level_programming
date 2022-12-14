#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takkes a date and prints days left in the year, taking leap year into account.
 * @month: month in number formst
 * @day: day of the month
 * @year: year
 * Retun: void
 */

void print_remaining_days(int monty, int day, int year)
{
	if ((year % 100 == 0 && year % 400 == 0) || (year % 4 == 0))
	{
	if (month >2 && day >= 60)
	{
		day++;
	}
	ptintf("day of the year: %d\\n", day);
	printf("Remaining days: %d\n", 366 - day);
	}
	else 
	{
		if (month == 2 && day == 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			printf("day of the year: %d\n", day);
			printf("remaining days: %d\n", 365 - day);
		}
	}
}
