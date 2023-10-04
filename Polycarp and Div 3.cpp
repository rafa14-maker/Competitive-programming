#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;

    int cnt = 0;

    for(int i=0;i<s.size();i++)
    {
        int k = (int)(s[i]-'0');
        if(k%3==0)cnt++;
        else if(i+1<s.size())
        {
            int  p =(int)(s[i+1]-'0');
            k *= 10;
            k+=p;
            if(k%3==0)
            {
                cnt++;
                i++;
            }
        }
    }

    cout<<cnt<<endl;

}

int main()
{
    solve();
}
