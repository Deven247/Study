#include<iostream>

int main()
{
    std::cout<<"Enter the size of array"<<std::endl;
    int n;
    std::cin>>n;
    int arr[n];
    int max;

    for(int i=0;i<n;i++)
    {
        int a;
        std::cout<<"Enter the value"<<std::endl;
        std::cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        std::cout<<arr[i]<< " ";
    }
    std::cout<<"Below is a max array"<<std::endl;
    for(int i=0;i<n;i++)
    {
        // 65 44 9 5 74
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                max = arr[i];
            }
            else
            {
                max = arr[j];
            }
        } 
    }
    std::cout<<max;
    return 0;
}