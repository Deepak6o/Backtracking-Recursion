#include<iostream>
using namespace std;
void Merge(int *arr,int s,int m, int e)
{
    int i=s;
    int j=m+1;
    int k=s;
    int brr[e];
    while(i<=m && j<=e)
    {
        if(arr[i]<arr[j])
        {
            brr[k++]=arr[i++];
        }
        else
        {
            brr[k++]=arr[j++];
        }
    }
    while(i<=m)
    {
        brr[k++]=arr[i++];
    }
    while(j<=e)
    {
        brr[k++]=arr[j++];
    }
    for(int x=s; x<=e; x++)
    {
        arr[x]=brr[x];
    }
}


void MergeSort(int arr[],int s,int e)
{
    if(s<e)
    {
        int mid=(s+e)/2;
        MergeSort(arr,s,mid);
        MergeSort(arr,mid+1,e);
        Merge(arr,s,mid,e);
    }
}

int main()
{
    int arr[9]= {2,1,3,4,6,5,7,9,8};
    int n=9;
    MergeSort(arr,0,n-1);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

}
