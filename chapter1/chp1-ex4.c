/* fahrenheit to celcius
 * author:lakshmanan
 * date: 01-May-2009
 */

#include<stdio.h>

int main()
{
 float fh,cs;

 printf("Enter the temperature in fahrenheit: ");
 scanf("%f",&fh);

 cs = (fh-32.0)*(5.0/9.0);

 printf("Fh = %f\nCS = %f\n",fh,cs);

 return 0;
}


