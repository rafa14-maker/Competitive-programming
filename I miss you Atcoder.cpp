#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr;
    cin>>arr;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]>='a'&&arr[i]<='z')arr[i]='x';
    }
    cout<<arr<<endl;
}
