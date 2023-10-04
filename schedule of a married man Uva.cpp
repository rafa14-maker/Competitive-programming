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

void solve(int p)
{
    string a,b;
    cin>>a>>b;
    int l=con(a),r=con(b);
    cin>>a>>b;
    printf("Case %d: ",p);
    int e=con(a),f=con(b);

  //  cout<<l<<" "<<r<<endl<<e<<" "<<f<<endl;

    if(l<=e&&r>=e||l<=f&&f<=r)cout<<"Mrs Meeting"<<endl;
    else if(l>=e&&r<=f)cout<<"Mrs Meeting"<<endl;
    else cout<<"Hits Meeting"<<endl;
}

int main()
{
    int q;
    cin>>q;
    int p=0;
    while(q--)solve(++p);
}
