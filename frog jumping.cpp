#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long a,b,k;
        cin>>a>>b>>k;
        if(a==b)
        {
            if(k%2==0)cout<<0<<endl;
            else cout<<a<<endl;
        }
        else if(a>b)
        {
            if(k%2==0)
            {
                cout<<(a-b)*(k/2)<<endl;
            }
            else
            {
                cout<<(((a-b)*((k-1)/2))+a)<<endl;
            }
        }
        else if(b>a)
        {
            if(k%2==0)
            {
                cout<<-((b-a)*(k/2))<<endl;
            }
            else
            {
                cout<<-(((b-a)*((k-1)/2))-a)<<endl;
            }
        }
    }
}
