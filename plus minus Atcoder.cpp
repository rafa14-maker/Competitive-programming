#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=-100;i<=100;i++)
    {
        int k=a-i;
        if(i-k==b)
        {
            cout<<i<<" "<<k<<endl;
            return 0;
        }
    }
}
