//temp table example 1.2

#include <stdio.h>

/* print farenheight to celsius table
    for fahr = 0, ..., 40, 60 etc... */
    

int main()
{
    float fahr, celsius; 
    int lower, upper, step;
    
    lower = 0;  //lower limit
    upper = 300; // upper limit
    step = 20;  //step sizeof
    
    celsius = lower;
    printf("heading as per requirement for exercise 1.3:\n");
    while (celsius <= upper){
        fahr = ((5.0 * celsius) / 9.0) + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}