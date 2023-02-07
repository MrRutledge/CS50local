#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string first = get_string("What's your name?\n");
    string last  = get_string("what's your last name\n");

    //print first name and last name h//
    printf("hello,%s %s\n" , first, last);

}