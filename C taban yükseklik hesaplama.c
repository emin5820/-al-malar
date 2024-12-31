/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
int main()
{
    int taban;
    int yukseklik;
    int alan;
    printf("taban giriniz");
    scanf("%d",&taban);
    printf("yukseklik giriniz");
    scanf("%d",&yukseklik);
    
    alan = taban * yukseklik / 2;
    printf("uçgenin alani %d",alan);
    

    return 0;
}
