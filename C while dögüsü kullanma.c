/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    int num;
    int sum = 0;

    printf("Sayıları giriniz (Negatif bir sayı girdiğinizde program sonlanır):\n");

    while (1) {
        printf("Bir sayı girin: ");
        scanf("%d", &num);

        
        if (num < 0) {
            break; 
        }

        
        sum += num;
    }

    printf("Girilen sayıların toplamı: %d\n", sum);

    return 0;
}
