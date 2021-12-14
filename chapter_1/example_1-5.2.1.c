/*example 1-5.2.1
character counting v2*/

#include <stdio.h>

int main()
{
    double nc; 
    
    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%.0f\n", nc);
}