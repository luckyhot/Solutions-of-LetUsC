/*sum of first and last digit of a 4 digit number
 * author: lakshmanan
 * date: 01-May-2009
 */

#include<stdio.h>

int main()
{
 long num;
 int sum,n;
 int i;
 printf("enter the 4 digit number: ");
 scanf("%ld",&num);
 i = 1;
 sum =0;
 while(num!=0)
 {
  n = num%10;
  if(i==1 || i ==4)
   sum = sum + n;
   
  num=num/10;
  i++;
 }
 printf("The sum is %d\n",sum);
 return 0;
}
