#include<iostream>
using namespace std;

bool sort(int arr[],int &size);

int main()
{
    int n;

    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];

    cout<<"Enter elements of array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    if(sort(arr,n))
    {
        cout<<"True!"<<endl;
    }
    else  
    {
        cout<<"False!"<<endl;
    }

    return 0;
}
bool sort(int arr[],int &size)
{
    int temp=0;

    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if((arr[i]==arr[j])&&(i!=j))
            {
                return false;
            }
        }
    }
    
    for(int i=0;i<size;i++)
    {
        for(int j=1;j<size-1;j++)
        {
            if((arr[i]!=(arr[j])+1)&&(i==j+1))
            {
                return false;
            }
        }
    }
    return true;
}