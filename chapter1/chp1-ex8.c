/*reverse a 5-digit number
 * author:lakshmanan
 * date: 01-May-2009
 */

#include<stdio.h>
#include<math.h>

long power(int,int);

int main()
{
 long num,num_reverse;
 int n,i;
 int factor;
 printf("Enter the five digit number: ");
 scanf("%ld",&num);

 i =4 ;
 num_reverse = 0;

 while(num!=0)
 {
   n = num%10;
   factor = power(10,i);
   num_reverse = num_reverse + n * factor ;
   num = num/10;
   i--;
 }

 printf("The reversed number is %d\n",num_reverse);
 /*n=1;
 factor = 1 * pow(10,i);
 printf("factor: %d\n",factor);*/
 return 0;
}

long power(int i, int j)
{
 int n = 1;
 long factor = 1;
 while(n<=j)
 {
  factor = factor * i;
  n++;
 }
 return factor;
}
