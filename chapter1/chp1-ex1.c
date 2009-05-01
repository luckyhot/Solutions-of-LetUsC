/* Excercise 1
 * author: lakshmanan
 * date: 01-May-2009
 */

#include<stdio.h>

int main()
{
 float basic_sal,gross_sal,da,hra;

 printf("Enter the basic salary: ");
 scanf("%f",&basic_sal);

 da = basic_sal*.40;
 hra = basic_sal*.20;
 gross_sal = basic_sal + da + hra;

 printf("The gross salary is %f\n",gross_sal);
 
 return 0;
}
