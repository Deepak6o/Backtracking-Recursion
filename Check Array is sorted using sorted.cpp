#include<iostream>
using namespace std;
bool sorted(int *arr,int size)
{
    if(size==0 || size==1)
    {
        return true;
    }
    if(arr[0]>arr[1])
    {
        return false;
    }
    else
    {
        bool remaining=sorted(arr+1,size-1);
        return remaining;
    }
}
int main()
{
    int arr[5]={1,2,5,4,3};
    cout<<sorted(arr,5);
}
