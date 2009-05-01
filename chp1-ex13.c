/* add 1 to each digit
 * author:lakshmanan
 * date: 01-may-2009
 */

#include<stdio.h>

int main()
{
 long num;
 int n;
 long new_num;
 int i=0;

 printf("enter the five digit number: ");
 scanf("%ld",&num);
 new_num=0;
 while(num!=0)
 {
  n = num%10;
  new_num=new_num+(n*power(10,i))
  num = num/10;
 }
 return 0;

}
