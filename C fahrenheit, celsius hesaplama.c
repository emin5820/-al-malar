/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
int main()
{
    float fahrenheit, celsius;
    printf("fahrenheit giriniz:");
    scanf("%f",&fahrenheit);
    
    celsius = (fahrenheit - 32) / 1.8;
     printf("%f Fahrenheit, %f celsius esittir.",fahrenheit, celsius);
    

    return 0;
}