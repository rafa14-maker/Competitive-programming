#include<iostream>
using namespace std;

int main()
{
    int a,b,c,d,i,j,k;

    int arr[10];

    cout<<"enter the array elements :";

    for(i=0;i<10;i++)
    {
        cin>>arr[i];
    }

    cout<<"enter element :";
    cin>>j;

    for(i=0;i<=10-1;i++)
    {
        for(k=0;k<10-1;k++)
        {
            if(arr[k]>arr[i])
            {
                d=arr[k];
                arr[k]=arr[i];
                arr[i]=d;
            }
        }
    }

    for(i=0;i<10;i++)
    {
        cout<<arr[i]<<endl;
    }

    a=0;
    b=9;

    while(b>=a)
    {
        c=(a+b)/2;
        if(arr[c]==j)
        {
            cout<<c<<endl;
            return 0;
        }
        else if(j>arr[c])
        {
            b=c+1;
        }
        else
        {
            a=c-1;
        }
    }
    cout<<"not found "<<endl;


}
