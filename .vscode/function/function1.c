#include <stdio.h>

void main()
{
    void print_star();
    void print_message();

    print_star();
    print_message();
    print_star();
}

void print_star()
{
    printf("************\n");
}

void print_message()
{
    printf("Hello World!\n");
}