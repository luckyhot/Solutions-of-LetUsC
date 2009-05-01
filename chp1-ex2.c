/* Chapter 1 exercise 2
 * author:lakshmanan
 * date: 01-May-2009
 */

#include<stdio.h>

int main()
{
 float km,metres,feet,inches,cm;

 printf("Enter the distance in (km): ");
 scanf("%f",&km);

 /*conversions*/
 metres = km *1000;
 feet = km * 3280.83;
 inches = km * 39370.0787;
 cm = metres *100;

/*printing the values after conversions*/
 printf("km = %f\nmetres = %f\nfeet = %f\ninches = %f\ncm = %f\n",km,metres,feet,inches,cm);

 return 0;
}
