#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin>>n;
    int k=n/2;
    ll sum1=0,sum2=0;
    vector<int>v;
    for(int i=0;i<k;i++)
    {
        char a;
        cin>>a;
      if(a!='?')  sum1 += (int)(a-'0');
      else v.push_back(1);
    }
    for(int i=0;i<k;i++)
    {
          char a;
        cin>>a;
      if(a!='?')  sum2 += (int)(a-'0');
      else v.push_back(2);
    }

 //for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<endl;

    for(int i=0;i<v.size();i++)
    {
        if(i%2==1)
            {
        if(v[i]==1)
        {
            ll idx=0,pdx=1e12+7;
            for(int k=0;k<=9;k++)
            {
                if(abs((sum1+k)-sum2)<pdx)
                {
                    pdx=abs((sum1+k)-sum2);
                    idx = k;
                }
            }
           // cout<<idx<<" ";
            sum1+=idx;
        }
        else
        {
             ll idx=0,pdx=1e12+7;
            for(int k=0;k<=9;k++)
            {
                if(abs((sum2+k)-sum1)<pdx)
                {
                    pdx=abs((sum2+k)-sum1);
                    idx = k;
                }
            }
           // cout<<idx<<" ";
            sum2+=idx;
        }
        }
        else
        {
           if(v[i]==1)
        {
            ll idx=0,pdx=0;
            for(int k=0;k<=9;k++)
            {
                if(abs((sum1+k)-sum2)>=pdx)
                {
                    pdx=abs((sum1+k)-sum2);
                    idx = k;
                }
            }
           // cout<<idx<<" ";
            sum1+=idx;
        }
        else
        {
             ll idx=0,pdx=0;
            for(int k=0;k<=9;k++)
            {
                if(abs((sum2+k)-sum1)>=pdx)
                {
                    pdx=abs((sum2+k)-sum1);
                    idx = k;
                }
            }
           // cout<<idx<<" ";
            sum2+=idx;
        }
        }
         cout<<sum1<<" "<<sum2<<" "<<i<<endl;
    }
  // cout<<sum1<<" "<<sum2<<endl;
    if(sum1==sum2)cout<<"Bicarp"<<endl;
    else cout<<"Monocarp"<<endl;

}

int main()
{
    solve();
}

/*

10
123455????

*/
