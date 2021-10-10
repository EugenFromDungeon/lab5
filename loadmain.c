#include "load.h"
#include <stdio.h>
#include <locale.h>
  int main(void) {
   setlocale(LC_ALL,"rus");
   int a=0,b=1;
    printf("Выберите, с чем работать:\n");
    printf("1. Массив\n2. Матрица\n3. Выход\n");
 while(b) 
{
   scanf("%d",&a);
    if(a==1) LoadRun("lib1.dll");
    if(a==2) LoadRun("lib2.dll");
    if(a==3) b=0; 
}
  return 0;
}
