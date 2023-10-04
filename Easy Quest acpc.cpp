#include<bits/stdc++.h>
using namespace std;

void solve()
{
   int n;
   cin>>n;
   int cnt=0;
   vector<int>v;
vector<int>vk;
bool tr=true;

for(int i=0;i<n;i++)
{
    int a;
    cin>>a;
    if(a==0)cnt++;
    else if(a>0)vk.push_back(a);
    else
    {
        int k=(-1)*a;
        bool kp=true;
        for(int j=0;j<vk.size();j++)
        {
            if(vk[j]==k)
            {
                kp=false;
                vk[j]=0;
                break;
            }
        }
        if(kp)
        {
            if(cnt==0)tr=false;
            else
            {
                cnt--;
                v.push_back(k);
            }
        }
    }
}



    if(tr)
    {
        cout<<"Yes"<<endl;
        for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<endl;
    }
    else cout<<"No"<<endl;

}

int main()
{
    solve();
}
