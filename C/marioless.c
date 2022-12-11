#include <cs50.h>
#include <stdio.h>

int get_size(void);
void print_grid(int size);

int main(void)
{   
    //const int n = 332598;
   int n = get_size();

   print_grid(n);
}












int get_size(void)
{
    int n;
    do
    {
       n = get_int("Size: "); /* code */
    } 
    
    while (n>=1 && n<=8);
    return n;
}

void print_grid(int size)
{

    
   for(int i = 0; i<size; i++)

    {
       printf("#1");
        for(int j = 1;j+i<size ; j++)
        {
            if (i+j<=size)
            {
                printf(" ");
            }
            //The print statement 
            else
            {
                 printf("2#");
            }
             
        }
         //printf("##");
         //
         //
         //
         //
        printf("\n");
    }  
}