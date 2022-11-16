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
       //printf("#1");
        for(int j=size; j<=size; j++)
        {
            if (size<=i+j)
            {
                printf("# ");
            }
            else
            {
                 printf("2#");
            }
             
        }
         //printf("##");
        printf("\n");
    }  
}