#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
    int q;
    cin>>q;
    while(q--)
    {
        long long n,x;
        cin>>n>>x;
        if(n%(x+1)==0)
        {
            cout<<((n/(x+1)))*(x*2+1)<<endl;
        }
        else
        {
            long long p=(n-(n%(x+1)));
            p=((n/(x+1))*(x*2+1));
            int k=n%(x+1);
            p+=1;
            k--;
            p+=k*2;
            cout<<p<<endl;
        }
    }
}
