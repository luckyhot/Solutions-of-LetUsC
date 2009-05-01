/*Exercise 3
 * author: lakshmanan
 * date: 01-May-2009
 */

#include<stdio.h>

int main()
{
 float s1,s2,s3,s4,s5;
 float total,avg;

 printf("Enter the marks of each subject: ");
 scanf("%f %f %f %f %f",&s1,&s2,&s3,&s4,&s5);

 total = (s1+s2+s3+s4+s5);
 avg = (total/500)*100;

 printf("The total is %f and the average is %f\n",total,avg);

 return 0;
}

