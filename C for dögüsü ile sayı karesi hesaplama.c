/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int toplam = 0;
    for(int i = 1; i <= 10; i++){
        toplam += i*i;
    }
    printf("1'den 10'a kadar olan sayıların karesi: %d\n",toplam);

    return 0;
}