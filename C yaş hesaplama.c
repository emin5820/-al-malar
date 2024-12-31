/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
int main()
{
  int dogum_yılı;
  int yıl;
  int kullanıcı_yası;
  
  printf("dogum yılı giriniz:");
  scanf("%d",&dogum_yılı);
  
  yıl = 2024;
  
   kullanıcı_yası = yıl - dogum_yılı;
   printf("kullanıcı yası:  %d",kullanıcı_yası);
  

    return 0;
}