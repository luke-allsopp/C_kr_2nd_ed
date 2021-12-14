/*example 1-5.3
input line counter*/

#include <stdio.h>

main()
{
    int c, n1;
    
    n1 = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++n1;
        printf("%d\n", n1);
}