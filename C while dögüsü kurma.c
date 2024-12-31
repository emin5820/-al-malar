/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int sayi;
    
    do{
        printf("bir sayı giriniz (çıkmka için 0 giriniz):");
        scanf("%d",&sayi);
        
        if (sayi != 0) {
            printf("girilen sayının iki katı:%d\n", sayi * 2);
        }
        
    }while(sayi !=0);
        printf("Programdan çıkıldı:\n");
    
  
    return 0;
}