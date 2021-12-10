//temp table example 1.2

#include <stdio.h>

/* print farenheight to celsius table
    for fahr = 0, ..., 40, 60 etc... */
    

int main()
{
    int fahr, celsius; 
    int lower, upper, step;
    
    lower = 0;  //lower limit
    upper = 300; // upper limit
    step = 20;  //step sizeof
    
    fahr = lower; 
    while (fahr <= upper){
        celsius = 5 * (fahr-32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}