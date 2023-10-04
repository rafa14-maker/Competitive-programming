#include<bits/stdc++.h>
using namespace std;
int n;

const int N=100;
bool prime[N];

void seive()
{
    memset(prime,true,sizeof prime);

    for(int i=2;i*i<=N;i++)
    {
        if(prime[i])
        {
            for(int j=i*2;j<=N;j+=i)
            {
                prime[j]=false;
            }
        }
    }
}

set<string>st;

int Set(int n,int pos)
{
    return (n | (1<<pos));
}
bool Check(int n,int pos)
{
    return (n & (1<<pos));
}

char get(int i)
{
    if(i==1)return '1';if(i==2)return '2';if(i==3)return '3';if(i==4)return '4';if(i==5)return '5';
    if(i==6)return '6';if(i==7)return '7';if(i==8)return '8';if(i==9)return '9';if(i==10)return 'A';
    if(i==11)return 'B';if(i==12)return 'C';if(i==13)return 'D';if(i==14)return 'E';if(i==15)return 'F';
    if(i==16)return 'G';
}

int kop(char c)
{
    if(c=='1')return 1; if(c=='2')return 2; if(c=='3')return 3; if(c=='4')return 4; if(c=='5')return 5;
     if(c=='6')return 6; if(c=='7')return 7; if(c=='8')return 8; if(c=='9')return 9; if(c=='A')return 10;
      if(c=='B')return 11; if(c=='C')return 12; if(c=='D')return 13; if(c=='E')return 14; if(c=='F')return 15;
       if(c=='G')return 16;
}


void f(int mk,string s,int pre,int cnt)
{
  //  cout<<s<<endl;
    if(cnt==n)
    {
      if(prime[pre+1]) st.insert(s);
       return;
    }
    for(int i=0;i<n;i++)
    {
        if(!Check(mk,i)&&prime[i+pre+1])
        {
            f(Set(mk,i),s+get(i+1),i+1,cnt+1);
        }
    }
}

void solve(int test)
{
    st.clear();
    f(1,"1",1,1);
    printf("Case %d:\n",test);
    for(auto it=st.begin();it!=st.end();it++)
    {
        string s=*it;
        for(int i=0;i<s.size();i++)
        {
          int c=kop(s[i]);
          if(i==s.size()-1)cout<<c<<"\n";
          else cout<<c<<" ";
        }
    }
}

int main()
{
   seive();
   int test=0;
    while(scanf("%d",&n)!=EOF)
    {
        if(test)cout<<"\n";
        solve(++test);
    }
}
