#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long a,b,n,s;
        cin>>a>>b>>n>>s;
      //  long long h=a*n;
        if(a*n==s)
        {
            cout<<"YES"<<endl;
        }
        else if(a*n>s)
        {
            long long k=s%n;
            if(k<=b)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else if(a*n<s)
        {
            long long k=s-(a*n);
             if(k<=b)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}
