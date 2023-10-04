#include<bits/stdc++.h>
using namespace std;

int n,k;
string sk;

int f()
{
    int sum=0;
    string s=sk;
     for(int i=s.size()-1;i>=0;i--)
    {
        if(i+1<s.size()&&s[i+1]=='W'&&s[i]=='L')
             {
                 if(k>0)
                 {
                     k--;
                     s[i]='W';
                 }
             }
             else
             {

             }
    }


    for(int i=0;i<s.size();i++)
    {
        if(i==0)
        {
            if(s[i]=='W')sum+=1;
        }
        else
        {
             if(s[i-1]=='W'&&s[i]=='W')sum+=2;
             else if(s[i-1]=='L'&&s[i]=='W')sum+=1;
             else if(s[i-1]=='W'&&s[i]=='L')
             {
                 if(k>0)
                 {
                     k--;
                     sum+=2;
                     s[i]='W';
                 }
             }
        }
    }
    return sum;
}

int f1()
{  int sum=0;
     string s=sk;
      for(int i=0;i<s.size();i++)
    {
        if(i==0)
        {
            if(s[i]=='W')sum+=1;
        }
        else
        {
             if(s[i-1]=='W'&&s[i]=='W')sum+=2;
             else if(s[i-1]=='L'&&s[i]=='W')sum+=1;
             else if(s[i-1]=='W'&&s[i]=='L')
             {
                 if(k>0)
                 {
                     k--;
                     sum+=2;
                     s[i]='W';
                 }
             }
        }
    }

     for(int i=s.size()-1;i>=0;i--)
    {
        if(i+1<s.size()&&s[i+1]=='W'&&s[i]=='L')
             {
                 if(k>0)
                 {
                     k--;
                     sum+=2;
                     s[i]='W';
                 }
             }
             else
             {
                 if(k>0&&s[i]=='L'&&s[i+1]=='W')
                 {
                     sum+=2;
                     s[i]='W';
                     k--;
                 }
                 if(k>0&&s[i]=='L')
                 {
                     sum+=1;
                     s[i]='W';
                     k--;
                 }
             }
    }
    return sum;
}

void solve()
{
  //  int n,k;
    cin>>n>>k;
   // string s;
    cin>>sk;
    int sum=0;
    int cnt=0;
    int a=f(),b=f1();
   // cout<<a<<" "<<b<<endl;
    cout<<max(a,b)<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
