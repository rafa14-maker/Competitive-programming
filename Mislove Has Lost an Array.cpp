#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,l,r;
    cin>>n>>l>>r;
    vector<int>arr;
    vector<int>frr;
    int k=1;
    long long sum=0,flag=0;
    for(int i=1;i<=l;i++)
    {
        arr.push_back(k);

        sum+=k;
        k*=2;
    }
    k=1;
        for(int i=1;i<=r;i++)
    {
        frr.push_back(k);
      //  k*=2;
        flag+=k;
        k*=2;
    }
 //   cout<<sum<<" "<<flag<<endl;
    if(n>l)
    {
        for(int i=1;i<=n-l;i++)
        {
            sum+=1;
        }
    }
     if(n>r)
    {
        for(int i=1;i<=n-r;i++)
        {
            int m=frr.size()-1;
            flag+=frr[m];
        }
    }

    cout<<sum<<" "<<flag<<endl;
}
