#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr;
    cin>>arr;
    int t=arr.find('0');
    if(t==-1)
    {
        arr.erase(arr.size()-1);
    }
    else
    {
        arr.erase(t,1);
    }
    cout<<arr<<endl;
}
