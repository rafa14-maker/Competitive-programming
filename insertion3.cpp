#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[20],i,j,n,num,pos;

    cout<<"enter size of array :";
    cin>>n;

    cout<<"enter array elements :";
    for(i=0;i<n;i++)
    {

        cin>>arr[i];
    }
    cout<<"enter postion:";
    cin>>pos;
    cout<<"enter number :";
    cin>>num;

     for(i=n;i>=pos;i--)
     {

         arr[i]=arr[i-1];
     }
     n++;
     arr[pos-1]=num;
      for(i=0;i<n;i++)
    {

        cout<<arr[i];
    }

}
