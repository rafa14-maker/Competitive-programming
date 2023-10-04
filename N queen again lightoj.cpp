#include<bits/stdc++.h>
using namespace std;

int qu[10][3];
int frr[10];
int sum ;

void cal()
{
    int len = 0;
     for(int i=0;i<8;i++)
    {
        string s;
        cin>>s;
        for(int j=0;j<s.size();j++)
        {
            if(s[j]=='q')
            {
                qu[len][0] = i;
                qu[len][1] = j;
                len++;
            }
        }
    }
   // for(int i=0;i<len;i++)cout<<qu[i][0]<<" "<<qu[i][1]<<endl;
}

bool check()
{
    for(int i=0;i<8;i++)
    {
        for(int j=i+1;j<8;j++)
        {
            if(frr[i]==frr[j])return false;
            int a = i, b = frr[i];
            int c = j, d = frr[j];

        if(abs(a-b)==abs(c-d))return false;
        if(a+b == c+d)return false;
        }
    }
    return true;
}

void pri()
{
    for(int i=0;i<8;i++)cout<<frr[i]<<" ";cout<<endl;
}

void fun()
{
    int idx = 0;
    for(int i=0;i<8;i++)
    {
        int a = i;
        int b = frr[i];
        int c = qu[i][0];
        int d = qu[i][1];
        if(a==c&&b==d)idx+=0;
       else if(a==c||b==d||(a-b)==(c-d)||a+b==c+d)idx+=1;
        else idx+=2;
    }
    sum = min(sum,idx);
}


void f(int pos)
{
   // cout<<pos<<endl;
    if(pos==8)
    {
       fun();
       return ;
    }

    bool tr=true;

    for(int i=0;i<8;i++)
    {
        frr[pos] = i;
        int flag = 1;
        for(int j=0;j<pos;j++)
        {
            if(frr[pos] == frr[j] || frr[pos]+pos == frr[j]+j || frr[j] - j == frr[pos] - pos)
            {
                flag = 0;
                break;
            }
        }
        if(flag)
            f(pos+1);
    }
}

/
void solve()
{
   cal();
  sum = 1e8+7;
  f(0);
  cout<<sum<<"\n";
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
