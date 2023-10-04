#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    string arr;
    cin>>arr;
    int counter=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]=='1')counter+=a;
            if(arr[i]=='2')counter+=b;
            if(arr[i]=='3')counter+=c;
            if(arr[i]=='4')counter+=d;
    }
    cout<<counter<<endl;
}
