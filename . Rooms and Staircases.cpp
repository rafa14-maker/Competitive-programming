#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        string arr;
        cin>>arr;
        int counter=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]=='1')
            counter=max(counter,max((i+1)*2,(n-i)*2));
        }
        cout<<max(counter,n)<<endl;
    }
}
