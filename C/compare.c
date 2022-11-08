#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int  x = get_int("What's X ");
    int  y = get_int("whats Y ");

    if (x<y)
    {
        printf("x is less than y\n");
    }
        else if (x==y)
        {
            printf("y equals x\n");
         }
             else 
            {
                printf("y is less than x\n");
            }
}