#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    stack<char>st;
    string frr;
    int cnt = 0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='(')st.push('(');
        else
        {
            int cnt  = 0;
            while(i<s.size()&&s[i]==')')
            {
                char a = st.top();
                if(a=='(')
                {
                    cnt++;
                    st.pop();
                    i++;
                    k-=2;
                    if(k==0)break;
                }
                else break;
            }
            for(int i=0;i<cnt;i++)
            {
                frr+='(';
            }
            for(int i=0;i<cnt;i++)
            {
                frr+=')';
            }
        }
    }
    cout<<frr<<endl;
}

int main()
{
    solve();
}
