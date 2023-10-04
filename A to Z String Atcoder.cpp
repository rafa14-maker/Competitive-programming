#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr;
    cin>>arr;
    int a=0,b=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]=='A')
        {
            a=i;
            break;
        }
    }
    for(int i=arr.size()-1;i>=0;i--)
    {
        if(arr[i]=='Z')
        {
            b=i;
            break;
        }
    }
    cout<<b-a+1<<endl;
}
