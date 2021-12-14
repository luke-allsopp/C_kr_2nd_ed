/*exercise 1-8
count tabs balnks and spaces in input*/

#include <stdio.h>

main()
{
    long c, t, b, n;
    
    n = t = b = 0;
    
    while ((c = getchar()) != EOF){
        if (c == '\n')
            ++n;
        if (c == ' ')
            ++b;
        if (c == '\t')
            ++t;
    }
        printf("newlines:%d tabs:%d spaces:%d\n", n, t, b );
}