#include<iostream>
#include "headers.h"

int c = 100;
int main()
{
    std::cout<< "Hello World!! from main" << std::endl;
    Log("Hello From Log Function");

    int a = 12;
    float pi = 3.14;
    double d = 1.2;
    char ch = 'A';
    bool is_True = true;

    //Calling sum function
    int sum_result = sum(a,pi);
    std::cout<<sum_result<<std::endl;

    //Calling sum function
    divi(a,pi);

    // Input and Output statement
    int b;
    int c;
    std::cout<<"Enter the value of b"<<std::endl;
    std::cin>>b;
    std::cout<<"Enter the value of c"<<std::endl;
    std::cin>>c;
    std::cout<<"value of b is "<<b<<std::endl;
    std::cout<<"value of c is "<<c<<std::endl;

    // Accesing global variable
    std::cout<<"value of c is "<<c<<std::endl;
    std::cout<<"Value of global variable is  "<<::c<<std::endl;

    // Size of keyword
    std::cout<<"Size of f is "<<sizeof(a)<<std::endl;
    std::cout<<"Size of f is "<<sizeof(b)<<std::endl;
    std::cout<<"Size of f is "<<sizeof(c)<<std::endl;
    std::cout<<"Size of f is "<<sizeof(d)<<std::endl;
    std::cout<<"Size of f is "<<sizeof(ch)<<std::endl;
    std::cout<<"Size of f is "<<sizeof(is_True)<<std::endl;

    // Reference variable
    int & x = a;
    std::cout<<"x is a reference variable of a : "<<& x<<std::endl;
    

    // Typecasting
    int e = float(a);
    std::cout<<"value of e "<<e<<std::endl;

    // Constant variable
    const int f = 100;
    return 0;
}





