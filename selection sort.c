///selection sort

#include<stdio.h>

int main()
{
    int n,array[100],loop,sl,position,swap;         ///n is the number of elements ,array[100] represents the array, loop for looping the program, sl is secondary loop, position is needed as this sorting algorithm is selection sort,swap is to swap the values of the arrays

    printf("Enter the number of elements: ");
    scanf("%d",&n);

    printf("Enter the elements: \n");

    for(loop=0;loop<n;loop++)
    {
        scanf("%d",&array[loop]);           ///input
    }

    for(loop=0;loop<n-1;loop++)
    {
        position=loop;                ///loop's value determines the value of current position

        for(sl=loop+1;sl<n;sl++)
        {
            if(array[position]>array[sl])   ///if the value of array[position] is greater than the value of array[sl]
            {
                position=sl;                /// the new value of position is updated to sl(secondary loop)
            }
        }
        if(position!=loop)                  ///if position is not equals to loop then
        {
            swap=array[loop];
            array[loop]=array[position];        ///swaps the values
            array[position]=swap;
        }
    }

    printf("Sorted array: \n");
    for(loop=0;loop<n;loop++)
    {
        printf("%d\n",array[loop]);         ///printing the sorted array
    }

    return 0;
}
