#include<stdio.h>

int main ()
{
    int first[10][10],second[10][10],sum[10][10],loop,s_loop,lim1,lim2;

    printf("number of row and columns: ");
    scanf("%d %d",&lim1,&lim2);

    printf("Enter the elements of first matrix\n");
///first matrices
    for(loop=0;loop<lim1;loop++)
        for(s_loop=0;s_loop<lim2;s_loop++)
            scanf("%d",&first[loop][s_loop]);
    printf("Enter the elements of second matrix\n");
///second matrices
    for(loop=0;loop<lim1;loop++)
        for(s_loop=0;s_loop<lim2;s_loop++)
            scanf("%d",&second[loop][s_loop]);

///summation of first and second matrices
printf("The summation of matrices\n");

    for (loop = 0; loop < lim1; loop++)
    {
        for (s_loop = 0 ; s_loop < lim2; s_loop++)
        {
         sum[loop][s_loop] = first[loop][s_loop] + second[loop][s_loop];
         printf("%d\t", sum[loop][s_loop]);
        }
      printf("\n");
   }

    return 0;
}
