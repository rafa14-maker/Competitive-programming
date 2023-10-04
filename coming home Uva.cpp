#include<bits/stdc++.h>
using namespace std;

int k(char c)
{
    if(c=='0')return 0;if(c=='3')return 3;if(c=='4')return 4;
    if(c=='1')return 1;if(c=='5')return 5;if(c=='6')return 6;
    if(c=='2')return 2;if(c=='8')return 8;if(c=='9')return 9;
    if(c=='7')return 7;
}

int con(string s)
{
   // cout<<s<<endl;
    int a,b,c,d;
    a=k(s[0]);
    b=k(s[1]);
    c=k(s[3]);
    d=k(s[4]);
   // cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    int k=((a*10+b)*60)+(c*10+d);
    return k;
}


void solve(int pk)
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int l=con(s);

    int sum=1e5;

    for(int i=0;i<n;i++)
    {
        int a;
        cin>>s;
        cin>>a;
       if(con(s)>=l) sum=min(sum,con(s)+a-l);
       else sum=min(sum,1440-l+con(s)+a);
    }
    printf("Case %d: %d\n",pk,sum);
}

int main()
{
    int q;
    cin>>q;
    for(int i=1;i<=q;i++)solve(i);
}
