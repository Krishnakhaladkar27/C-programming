#include<stdio.h>


void Display()
{
int iCnt = 0;

   for (iCnt = 1; iCnt <= 5; iCnt++)
   {
    printf("%d",iCnt);
   }
}
int main()
{
   Display();
   return 0;
}