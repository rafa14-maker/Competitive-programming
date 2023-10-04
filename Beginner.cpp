#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int m=0;
    if(n<10)
    {
        m=100*(10-n);
    }
    cout<<m+k<<endl;
}
