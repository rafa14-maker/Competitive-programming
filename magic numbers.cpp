#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr;
    cin>>arr;

    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]=='1'&&arr[i+1]=='4'&&arr[i+2]=='4')
        {
            arr[i]=' ';
            arr[i+1]=' ';
            arr[i+2]=' ';
        }
        else if(arr[i]=='1'&&arr[i+1]=='4')
        {
            arr[i]=' ';
            arr[i+1]=' ';
        }
        else if(arr[i]=='1')
        {
            arr[i]=' ';
        }
    }
    int counter=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]!=' ')counter++;
    }
    if(counter==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
