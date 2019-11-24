///insertion sort

#include <stdio.h>

int main()
{
    int n, array[1000], loop, sl, temp;
do{
    printf("Enter number of elements\n");
    scanf("%d", &n);

    printf("Enter %d integers\n", n);

    for (loop = 0; loop < n; loop++)            ///value input
        scanf("%d", &array[loop]);

    for (loop = 1 ; loop <= n - 1; loop++)         ///secondary loop(sl) runs with the same flow as the main loop(loop)
    {
        sl = loop;

        while ( sl > 0 && array[sl-1] > array[sl]) ///this while loop will continue for conditions like 'sl' is greater than 0 and the value saved in array[sl-1] is greater than the value of array[sl]
        {
            temp         = array[sl];              ///swapping the values of array[sl] and array[sl-1]
            array[sl]   = array[sl-1];
            array[sl-1] = temp;

            sl--;                                  ///decrement of 'sl' is necessary to finish the while loop.
        }
    }

  printf("Sorted list in ascending order:\n");

  for (loop = 0; loop <= n - 1; loop++)            ///printing the value sorted
    {
        printf("%d\n", array[loop]);
    }
    printf("\n\n");
}while(1);
  return 0;
}
