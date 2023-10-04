#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

string arr;
ll cnt ;

ll  f(int left,int right)
{
    if(left == right)
    {
        int k = (int)(arr[left]-'0');
        if(k%4==0)
        {
            cnt++;
        }
        return k;
    }
    int mid = (left+right)/2;
    ll x = 10 * f(left,mid);
    x += f(mid+1,right);
    if(x%4==0)cnt++;
    return x%4;
}

void solve()
{
   // cout<<"yes"<<endl;
    string s;
    cin>>s;
    ll cnt = 0;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]%4==0)cnt++;
    }
    for(int i=0;i<s.size()-1;i++)
    {
        ll  a = s[i]*10 + s[i+1];
        if(a%4 == 0)cnt += i+1;
    }

    cout << cnt << endl;
}

int main()
{
    CherryFrog;
  // int q;cin>>q;while(q--)solve();
    solve();
}

