#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>>n>>k;
        long long int counter=0;
        while(n>0)
        {
            if(n%k==0)
            {
                n/=k;
                counter++;
            }
            else
            {
                long long l=n%k;
                n-=l;
                counter+=l;
            }
        }
        cout<<counter<<endl;
    }
}
