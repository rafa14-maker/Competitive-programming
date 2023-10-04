#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define pf push_front
#define mp make_pair

#define vi vector<int>
#define vll vector<ll>
#define vc vector<char>
#define vs vector<string>

#define rev(v) reverse(v.begin(),v.end())
#define srt(v) sort(v.begin(),v.end())
#define grtsrt(v) sort(v.begin(),v.end(),greater<ll>())

#define pi acos(-1.0)
#define MIN -2147483648
#define FOR(i,j,k) for(int i=j;i<=k;i++)
#define REV(i,j,k) for(int i=j;i>=k;i--)

using namespace std;
int main()
{
    int n;
    string ss;

    cin>>n;
    cin>>ss;

    int x=n-11;
    int y=x/2;


    int eght = 0;

    for(int i=0 ; i<=x ; i++)
    {
        if(ss[i]=='8')
        eght++;
    }


    if(eght-y<=0)
    {
        cout<<"NO"<<endl;
    }
    else
        cout<<"YES"<<endl;


    return 0;
}
