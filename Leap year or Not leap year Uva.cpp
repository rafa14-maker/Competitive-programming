#include<bits/stdc++.h>
using namespace std;


int get(char c)
{
    if(c=='0')return 0;if(c=='1')return 1;
    if(c=='2')return 2;if(c=='3')return 3;if(c=='4')return 4;
    if(c=='5')return 5;if(c=='6')return 6; if(c=='7')return 7;
    if(c=='8')return 8;if(c=='9')return 9;
}


bool f(string s,int k)
{
    long long sum=0;
    //reverse(s.begin(),s.end());
    for(int i=0;i<s.size();i++)
    {
        sum*=10;
        sum+=get(s[i]);
        sum=sum%k;
    }
    sum=sum%k;
   // cout<<sum<<endl;
    if(sum==0)return true;
    return false;
}


bool leap(string s)
{
   if((f(s,4)&&!f(s,100))||f(s,400))return true;
   return false;
}

int main()
{
    string s;
    char A[1000000];
    bool p=false;
    while(cin>>A)
    {
        s="";
        for(int i=0;i<strlen(A);i++)s+=A[i];
        if(p)cout<<endl;
        p=true;
        bool tr=false;
       if(leap(s))
       {
           tr=true;
           cout<<"This is leap year."<<endl;

       }
       if(f(s,3)&&f(s,5))
       {
           tr=true;
           cout<<"This is huluculu festival year."<<endl;
       }

        if(leap(s)&&f(s,5)&&f(s,11))cout<<"This is bulukulu festival year."<<endl;

       if(tr)
       {
          // cout<<endl;
           continue;
       }
       cout<<"This is an ordinary year."<<endl;
      // cout<<endl;
    }
}
