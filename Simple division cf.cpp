#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}

int main()
{
    vector<int>v;

    //cout<<gcd(15,10)<<endl;

    while(1)
    {
        int x;
        v.clear();
        while(1)
        {
            cin>>x;
            if(x==0)break;
            v.push_back(x);
        }
        if(v.size()==0)break;
       int ans = abs(v[0]-v[1]);
       for(int i=2;i<v.size();i++)
       {
           ans = gcd(ans,abs(v[i]-v[i-1]));
       }
       cout<<ans<<endl;
    }

}
