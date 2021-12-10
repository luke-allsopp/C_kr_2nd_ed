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
    
    fahr = lower;
    printf("heading as per requirement for exercise 1.3:\n");
    while (fahr <= upper){
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}