/*Interchange C and D
 * author:lakshmanan
 * date: 01-May-2009
 */

#include<stdio.h>

int main()
{
 int c,d;
 int t;

 printf("enter c and d: ");
 scanf("%d %d",&c,&d);

 printf("C and D before swapping : \n c=%d d = %d\n",c,d);
 
 t=c;
 c=d;
 d=t;

 printf("C and D after swapping : \n c=%d d = %d\n",c,d);

 return 0;
}
