#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll mod = 998244353;

void solve()
{
    int n;
    cin>>n;

    string str;
    cin>>str;

    char a=str[0],b=str[str.size()-1];

    int left = 1;
    int right = 1;

    for(int i=1;i<str.size();i++)
    {
        if(str[i]==a)left++;
        else break;
    }

    for(int i=str.size()-2;i>=0;i--)
    {
        if(str[i]==b)right++;
        else break;
    }


        if(a==b)
        {
            left++;
            right++;
            ll sum = left * right;
            sum = sum % mod;
            cout << sum << endl;
        }
        else
        {
            cout <<left+right+1<< endl;
        }

  //  cout<<a<<" "<<b<<" "<<left<<" "<<right<<endl;
}

int main()
{
    solve();
}

/*

2
aa

*/

