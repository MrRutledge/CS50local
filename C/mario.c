#include <cs50.h>
#include <stdio.h>

int get_size(void);
void print_grid(int size);

int main(void)
{   
    //const int n = 3;
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
    
    while (n<1);
    return n;
}

void print_grid(int size)
{
   for(int i = 0; i<size; i++)

    {
       // printf("#");
        for(int j = size; j<=i; j++)
        {
            if (i+j<=size)
            {
                printf("# ");
            }
            else
            {
                 //printf("#");
            }
             
        }
         //printf("##");
        printf("\n");
    }  
}