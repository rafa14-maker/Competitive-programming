#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,w,i,sum=0;

    cin>>k>>n>>w;

    for(i=1;i<=w;i++)
    {
        sum+=i*k;
    }
    if(sum<=n)
    {
        cout<<"0"<<endl;
        return 0;
    }
    cout<<sum-n<<endl;

}
