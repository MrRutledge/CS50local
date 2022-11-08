#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string first = get_string("What's your name?\n");
    string last  = get_string("what's your last name\n");
    printf("hello,%s %s\n" , first, last);

}