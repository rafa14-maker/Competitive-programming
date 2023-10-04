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
        int sum=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            sum=sum^(a*2);
        }
        cout<<sum<<endl;
    }
}
