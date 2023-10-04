#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr,frr,krr;
    int n,a=0,b=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>frr;
        if(i==0)
        {
            arr=frr;
            a++;
        }
        if(frr==arr)
        {
            a++;
        }
        if(frr!=arr)
        {
            b++;
            krr=frr;
        }
    }
    if(a>b)cout<<arr<<endl;
    else cout<<krr<<endl;
}
