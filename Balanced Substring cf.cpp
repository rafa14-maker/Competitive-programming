#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    int n;
    cin>>n;
    cin>>s;
    int one,two;
    for(int i=0;i<s.size();i++)
    {
        one =0;
        two=0;
        for(int j=i;j<s.size();j++)
        {
            if(s[j]=='a')one++;
            else two++;
            if(one==two)
            {
                cout<<i+1<<" "<<j+1<<endl;
                return ;
            }
        }
    }
    cout<<-1<<" "<<-1<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
