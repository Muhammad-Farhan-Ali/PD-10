#include<iostream>
using namespace std;

int rotation(string arr[],int size);

int main()
{
    int n;

    cout<<"Enter size of array: ";
    cin>>n;

    string array[n];

    cout<<"Enter elements of array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
        if(array[i]!="left" && array[i]!="right")
        {
            cout<<"Invalid input!"<<endl;
            return 0;
        }
    }

    cout<<"Number of rotations:"<<rotation(array,n)<<endl;

    return 0;
}
int rotation(string arr[],int size)
{
    int move=0;

    for(int i=0;i<size;i++)
    {
        if(arr[i]=="left")
        {
            move=move+90;
        }
        else if(arr[i]=="right")
        {
            move=move-90;
        }
    }
    if(move<0)
    {
        move=(-move);
    }
    return move/360;
}
