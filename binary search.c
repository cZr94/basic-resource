#include <stdio.h>
///in this case the inputs must be in sorted order to find the searched result..
int main ()
{
    int first,last,middle,n,array[100],loop,search;

    do{
            printf("Number of integers: ");
            scanf("%d",&n);

            printf("Enter Value(s): \n");

            for(loop=0;loop<n;loop++)
            {
                scanf("%d",&array[loop]);   ///input
            }

            printf("Enter search value: ");
            scanf("%d",&search);              ///enter searching value

            first=0;
            last=n-1;
            middle = (first+last)/2;

            while (first <= last)
            {
                if (array[middle] < search)
                    first = middle + 1;               ///if first value in the array is less of equals to last then check if the searched value is greater then the new value of first would be middle + 1th value of array and if its less then last would be the middle - 1th value of array
                else if (array[middle] == search)
                {
                    printf("\n%d found at location %d.\n", search, middle+1);
                    break;
                }
                else
                    last = middle - 1;

                    middle = (first + last)/2;

                    ///debugging

                    ///printf("\n1st: %d\n",first);
                    ///printf("\nMid: %d\n",middle);
                    ///printf("\nlast: %d\n",last);
                }
                if (first > last)
                    printf("\nNot found! %d isn't present in the list.\n", search);
                    printf("\n\n");

        }while(1);

    return 0;
}
