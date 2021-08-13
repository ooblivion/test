
/*This program will determine whether a entered integer reprents a leap year.
 * If it can be devided by 4 but can't be devided by 100,it is a leap year;
 * besides, it can be devided by 400,it is also a leap year.
 * Also,this program will list the situation of whether it is a leap year from 1990 to 2020.
 * */
#include <stdio.h>
 
int is_leap_year(int year)
{
	if((year%4==0)&&(year%100!=0))
	{
		return 1;
	}
	else if(year%400==0)
	{
		return 1;
	}
	else
		return 0;
}
/*Function name:print_year
 * Input parameter:
 *   b:int,can only be 0 or 1,indecates the controlling expression
 *   intyear:int,represents the number of year we entered after the terminal has reminded us
 * Output:a string printed by c-function 'printf'
 * Function:print whether the year is a leap year
 *
 * */
void print_year(int b,int intyear)
{
if (b==0)
        printf("%d is not a leap year.\n",intyear);
else
	printf("%d is a leap year.\n",intyear);
}
int main(void)
{	
	int a,b;
	printf("please enter an integer to judge whether it is a leap year.\n");
	scanf("%d",&a);
	b=is_leap_year(a);
	print_year(b,a);
	
	int i=1990;
	for(i=1990;i<=2020;i++)
	{
		int b=is_leap_year(i);
		print_year(b,i);
		
	}
 
	return 0;
}