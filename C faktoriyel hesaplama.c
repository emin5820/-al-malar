/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int sayi, i;
    unsigned long long faktoriyel = 1;
    
    printf("bir sayı giriniz:");
    scanf("%d",&sayi);
    
    if(sayi<0){
        printf("negetif sayılar hesaplanmaz:");
    }else{
        for(i = 1; i <= sayi; i++){
            faktoriyel *=i;
        }
        printf("%d sayısının faktöriyeli: %llu\n", sayi,faktoriyel);
    }
    

    return 0;
}