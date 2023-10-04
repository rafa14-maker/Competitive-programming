#include<bits/stdc++.h>
using namespace std;

int n,l,r;
bool vis[20];
int cnt;

int get(char ch)
{
    if(ch=='0')return 0;if(ch=='1')return 1;if(ch=='2')return 2;if(ch=='3')return 3;
    if(ch=='4')return 4;if(ch=='5')return 5;if(ch=='6')return 6;if(ch=='7')return 7;
    if(ch=='8')return 8;if(ch=='9')return 9;if(ch=='A')return 10;if(ch=='B')return 11;
    if(ch=='C')return 12;if(ch=='D')return 13;
}

char pk(int ch)
{
    if(ch==0)return '0';if(ch==1)return '1';if(ch==2)return '2';if(ch==3)return '3';
    if(ch==4)return '4';if(ch==5)return '5';if(ch==6)return '6';if(ch==7)return '7';
    if(ch==8)return '8';if(ch==9)return '9';if(ch==10)return 'A';if(ch==11)return 'B';
    if(ch==12)return 'C';if(ch==13)return 'D';
}

bool check(string s,bool kp)
{
    int a=0,b=0;
    int mx=0;
    for(int i=0;i<s.size();i++)
    {
        if(get(s[i])>mx)
        {
            mx=get(s[i]);
            a++;
        }
    }
    if(a>l)return false;
    int len=s.size()-1;
    mx=0;
    for(int i=len;i>=0;i--)
    {
        if(get(s[i])>mx)
        {
            mx=get(s[i]);
            b++;
        }
    }
    if(b>r)return false;
    if(kp)
    {
        if(r==b&&a==l)return true;
        return false;
    }
    return true;
}

void f(int pos,string s)
{
   // cout<<s<<endl;
    if(pos==n)
    {
        if(check(s,true))
        {
            cnt++;
        }
        return;
    }

    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            vis[i]=true;
            f(pos+1,s+pk(i));
            vis[i]=false;
        }
    }
}

void solve()
{
   scanf("%d %d %d",&n,&l,&r);
   memset(vis,false,sizeof vis);
    cnt=0;
    f(0,"");
    printf("%d\n",cnt);
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
