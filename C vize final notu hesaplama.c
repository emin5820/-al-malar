/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
int main()
{
 float vize;
 float final;
 float genel_ortalama;
 printf("vize notu alınız");
 scanf("%f",&vize);
 printf("final notu alınız");
 scanf("%f",&final);
  
  genel_ortalama = (vize * 0.40) + (final * 0.60);
  printf("genel ortalama %f",genel_ortalama);


    return 0;
}