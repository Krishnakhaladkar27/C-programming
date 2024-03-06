#include<stdio.h>

typedef unsigned long int ULONG;

ULONG Factorial(int iNo)
{
    ULONG iFact = 1;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = iNo; iCnt >=1; iCnt--)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    ULONG iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Result is : %d\n",iRet);

    return 0;
}

/*
    iNo = 5;
    
    5!
    
    Factorial = 5 * 4 * 3 * 2 * 1   = 120

    Factorial = 1 * 2 * 3 * 4 * 5   = 120

*/