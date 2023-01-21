#include<iostream>


void Log(const char* message)
{
    std::cout<< message<<std::endl;
}

int sum(int a, float b)
{
    return a + b;
}

void divi(int x, float y)
{
    std::cout<<x/y;
}

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void increment(int *e)
{
    *e+1;
}