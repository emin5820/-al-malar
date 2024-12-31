/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char karakter;
    printf("bir karakter giriniz:");
    scanf("%c", &karakter);

if(karakter == 'A' || karakter == 'B' ){
    if(karakter == 'A'){
        printf("A'ya bastınız:\n");
    } 
    else
    {
      printf("B'ye bastınız:\n");
        
    }
}
    else
    {
        printf("A veya B ' ye basmadınız:");
    }

    return 0;
}