///with a twist and looped so can run until you input '0' as the value of n

#include<stdio.h>
#include<string.h>

int main ()
{
    int n,loop,next,first,second;
    char c[10];
    while(1)
    {
        first=0;
        second=1;
        printf("Fibonacci to ");
        scanf("%d%s",&n, c);

        if(strcmp(c,"s")==0)
        {
            if(n==0)
                break;
            else
            {
                printf("Fibonacci series to the %dth values are 0 1 ",n);
                for(loop=1;loop<=n;loop++)
                {
                    next=first+second;
                    first=second;
                    second=next;

                    printf("%d ",next);
                }

            }
        }
        else if(strcmp(c,"v")==0)
        {
            if(n==0)
                break;
            else
            {
                for(loop=1;loop<=n;loop++)
                {
                    next=first+second;
                    first=second;
                    second=next;
                }
                 printf("Fibonacci series to the %dth value is %d",n,next);
            }

        }
        else
        {
            printf("\nInvalid input must put 's' or 'v'\n");
            printf("to check series put 's' or to check single value 'v'\n");
        }

       printf("\nAgain or to terminate input '0'\n\n");

    }

    return 0;
}
