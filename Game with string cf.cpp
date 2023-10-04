#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    stack<char>q;
    int cnt = 0;
    for(int i=0;i<s.size();i++)
    {
        if(q.empty())q.push(s[i]);
        else
        {
            char f = q.top();
            if(s[i]==f)
            {
                q.pop();
                cnt++;
            }
            else q.push(s[i]);
        }
    }
    if(cnt%2==0)cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
}

int main()
{
    solve();
}
