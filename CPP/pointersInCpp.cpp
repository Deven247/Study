#include<iostream>
#include "headers.h"

void increment(int *e)
{
    *e++;
}
int main()
{
    // Pointers are the variable that store the address of other variable

    int a = 10; // address of is 0x61ff08
    int* aptr = &a; // address of a store in aptr
    std::cout<<a<<std::endl;
    std::cout<<aptr<<std::endl;
    std::cout<<*aptr<<std::endl;

    // We can modify the value of a using its pointer
    *aptr = 20;
    std::cout<<a<<std::endl;
    std::cout<<aptr<<std::endl;
    std::cout<<*aptr<<std::endl;

    // We can perform arithmatic operation on pointers ++,--,+,-
    std::cout<<aptr+1<<std::endl;

    // Pointers and Array
    int arr[] = {100,200,300,400};
    std::cout<<arr<<std::endl;
    std::cout<<*arr<<std::endl;
    std::cout<<arr[0]<<std::endl;
    std::cout<<arr[1]<<std::endl;

    int* arrptr = arr;
    for(int i=0;i<4;i++)
    {
        std::cout<<*arrptr<<std::endl;
        arrptr++;
        std::cout<<arr<<std::endl;
        //arr++;  This is wrong we cant do this 
        arr + i;
    }

    //Pointer to Pointer
    int b = 1;
    int* bptr = &b;
    int** bptrptr = & bptr;
    std::cout<<b<<std::endl;         // print value of b
    std::cout<<bptr<<std::endl;      // print value of bptr which is address of a
    std::cout<<bptrptr<<std::endl;   // print value of bptrptr which is address of bptr

    std::cout<<*bptr<<std::endl;     
    std::cout<<*bptrptr<<std::endl;  
    std::cout<<**bptrptr<<std::endl;

    // Pointers to Function

    int c = 7;
    int d = 11;

    //swap(&c,&d);
    std::cout<<c<<std::endl;
    std::cout<<d<<std::endl;

    int e = 1000;
    increment(&e);
    std::cout<<e<<std::endl;
    return 0;
}

