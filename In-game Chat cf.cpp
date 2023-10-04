#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    stack<char>st;
    for(int i=0;i<n;i++)
    {
        char a;
        cin>>a;
        st.push(a);
    }
    int cnt=0;
    while(!st.empty())
    {
        char a =st.top();
        if(a>='a'&&a<='z')break;
        cnt++;
        st.pop();
    }
    if(cnt>st.size())cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
