/* Exercise 5 */

#include<stdio.h>

int main()
{
 
 float len,bre,rad;
 float peri,circum,area_rec,area_circle;

 printf("Enter the length and breadth of rectangel: ");
 scanf("%f %f",&len,&bre);
 area_rec = len*bre;
 peri = 2*(len+bre);
 printf("Rectangle:\nArea = %f\nPerimeter = %f\n",area_rec,peri);

 printf("Enter the radius of circle: ");
 scanf("%f",&rad);
 area_circle = 3.14*rad*rad;
 circum = 2*3.14*rad;
 printf("Circle:\nArea = %f\nCircumference = %f\n",area_circle,circum);

 return 0;
}
