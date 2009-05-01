/*to find the cost price of each item
 * author:lakshmanan
 * date:01-May-2009
 */

#include<stdio.h>

int main()
{
 float sp,cp,profit;
 float sp_one,cp_one;

 printf("Enter sp of 15 items: ");
 scanf("%f",&sp);

 sp_one = sp/15;

 printf("Enter the profit of 15 items: ");
 scanf("%f",&profit);

 cp = sp_one - (profit/15.0);

 printf("The CP of each item is %f\n",cp);
 return 0;
}

