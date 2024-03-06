#include<stdio.h>
#include<stdlib.h>


int main()
{
    int iSize = 0;
    int *ptr = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d",&iSize);


    ptr = (int *)malloc(iSize * sizeof(int));  //1
    if(ptr == NULL)
    {
    printf("Unable to allocate memory\n");     //2
    return -1;
    }

printf("Memory allocated succesfully..\n");
    return 0;
}
