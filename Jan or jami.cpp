#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0;i<s.size();i++)
    {
        cnt+=(int)'Z'-s[i];
    }
    if(cnt%4==1)cout<<"Jan"<<endl;
    else cout<<"Jami"<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
