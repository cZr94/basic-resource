///bubble sort

#include <stdio.h>

int main()
{
    int n, array[100],loop,sl,swap;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter %d elements \n",n);

    for(loop=0;loop<n;loop++)
    {
        scanf("%d",&array[loop]);           ///input
    }

    for(loop=0;loop<n-1;loop++)
    {
        for(sl=0;sl<n-loop-1;sl++)
        {
            if(array[sl]>array[sl+1])               ///if the value of array[sl] is greater than the value in array[sl+1]
            {
                swap=array[sl+1];
                array[sl+1]=array[sl];              ///value swapping
                array[sl]=swap;
            }
        }
    }

    printf("Sorted array is \n");
    for(loop=0;loop<n;loop++)
    {
        printf("%d\n",array[loop]);                 ///printing sorted array
    }

    return 0;
}
