#include<bits/stdc++.h>
using namespace std;

void solve()
{
    multiset<int>ms;
    set<int>s;
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    int cnt=0;
    bool tr=true;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
    //    cout<<i<<endl;
        if(arr[i]>0)
        {
            bool fk=false;
            auto it=ms.lower_bound(arr[i]);
            if(*it==arr[i])fk=true;
            auto jt=s.lower_bound(arr[i]);
            if(*jt==arr[i])fk=true;
            if(fk)
            {
                tr=false;
                break;
            }
            else
            {
                ms.insert(arr[i]);
                cnt++;
                s.insert(arr[i]);
            }
        }
        else if(arr[i]<0)
        {
            int p= -1*arr[i];
            auto k= ms.lower_bound(p);
          //  auto kp=s.find(p);
            if(*k!=p)
            {
                tr=false;
                break;
            }
            else
            {
                ms.erase(p);
                cnt++;
                if(ms.size()==0)
                {
                   v.push_back(cnt);
                   cnt=0;
                   s.clear();
                }
            }
        }
    }
   //cout<<s.size()<<endl;
    if(!tr||ms.size()!=0)cout<<-1<<endl;
    else
    {
        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<endl;
    }
}

int main()
{
    solve();
}
