/*exercise 10
 * author:lakshmanan
 * date:01-May-2009
 */

#include<stdio.h>

int main()
{
 long int tot_pop = 80000;
 long int tot_men,tot_women;
 long int tot_lit;
 long int lit_men,lit_women;
 long int ilit_men,ilit_women;

 tot_men = .52 * tot_pop;
 tot_women = .48 * tot_pop;
 tot_lit = .48 * tot_pop;

 lit_men = .35 * tot_pop;
 ilit_men = tot_men - lit_men;
 
 ilit_women = tot_lit-ilit_men;

 printf("The total number of :\n");
 printf("Illiterate men: %ld\n",ilit_men);
 printf("Illiterate women: %ld\n",ilit_women);

 return 0;
}
