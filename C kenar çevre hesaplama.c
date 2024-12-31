/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
int main()
{
    int kenar;
    int uzunluk;
    int cevre;
    printf("kener uzunlugu girin");
    scanf("%d",&kenar);
     uzunluk = kenar * kenar;
     printf("karenin alanı : %d\n",uzunluk);
     cevre = 4*kenar;
     printf("kareini cevresi: %d",cevre);
    
    

    return 0;
}