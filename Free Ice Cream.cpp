#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long m;
    cin>>n>>m;
    int counter=0;
    for(int i=1;i<=n;i++)
    {
        char c;
        long long a;
        cin>>c>>a;
        if(c=='+')m+=a;
        else
        {
            if(m<a)counter++;
            else m-=a;
        }
    }
    cout<<m<<" "<<counter<<endl;
}
