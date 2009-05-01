/*sum of digits in a five digit number
 * author:lakshmanan
 * date: 01-May-2009
 */

#include<stdio.h>

int main()
{
 int n;
 long num;
 int sum;
 printf("enter the five-digit number: ");
 scanf("%ld",&num);
 sum = 0;
 while(num!=0)
 {
  n = num%10;
  sum = sum+n;
  num = num/10;
 }
 printf("The sum is %d\n",sum);
 return 0;
}
