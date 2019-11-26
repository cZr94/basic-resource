#include<stdio.h>
///linear search

int main()
{
    int array[100],n,loop,search;
    char ch[10];

    printf("Enter the number of integers: ");
    scanf("%d",&n);

    printf("\nEnter %d integer(s): \n",n);
    for(loop=0;loop<n;loop++)
    scanf("%d",&array[loop]);     ///input

     printf("\nEnter search: ");
     scanf("%d",&search);

     for(loop=0;loop<n;loop++)
     {
         if(array[loop]==search)
         {
             printf("\n%d is found in %d %c location\n",search,ch,loop+1);
             break;
         }

     }
     if(loop==n)
     {
         printf("\n%d is not found in this array\n",search);
     }


    return 0;
}
