#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr;
    cin>>arr;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]=='W'&&arr[i+1]=='U'&&arr[i+2]=='B')
        {
            arr[i]=' ';
            arr[i+1]=' ';
            arr[i+2]=' ';
        }
    }
    for(int i=0;i<arr.size();i++)
    {
       if(arr[i]!=' ')
       {
           cout<<arr[i];
       }
       if(arr[i]==' '&&arr[i-1]!=' '&&i-1>=0)
       {
           cout<<" ";
       }
    }
}
