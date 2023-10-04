#include<bits/stdc++.h>
using namespace std;

char get(int p)
{
    if(p==0)return '0';if(p==1)return '1';if(p==2)return '2';if(p==3)return '3';
    if(p==4)return '4';if(p==5)return '5';if(p==6)return '6';if(p==7)return '7';
    if(p==8)return '8';if(p==9)return '9';
}

int get2(char c)
{
    if(c=='0')return 0;if(c=='1')return 1;if(c=='2')return 2;if(c=='3')return 3;
    if(c=='4')return 4;if(c=='5')return 5;if(c=='6')return 6;if(c=='7')return 7;
    if(c=='8')return 8;if(c=='9')return 9;
}

string con(int k)
{
    string s;
    while(k>0)
    {
        s+=get(k%10);
        k/=10;
    }
    int pr=4-s.size();
    while(pr--)s+='0';
    reverse(s.begin(),s.end());
    return s;
}

int f2(string a,string b)
{
   int num[10]={0};
   int cnt=0;
   for(int i=0;i<a.size();i++)
   {
       num[get2(b[i])]++;
   }
   for(int i=0;i<a.size();i++)
   {
       if(num[get2(a[i])]>0){
       num[get2(a[i])]--;
       cnt++;
       }
   }
   for(int i=0;i<a.size();i++)
   {
     if(a[i]==b[i])  cnt--;
   }
   return cnt;
}

int f1(string a,string b)
{
    int cnt=0;
    for(int i=0;i<a.size();i++)
    {
            if(a[i]==b[i])cnt++;
    }
    return cnt;
}


void solve()
{
    int n;
    cin>>n;
    string arr[n+5];
    int frr1[n+5],frr2[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        string s;
        cin>>s;
        frr1[i]=get2(s[0]);
        frr2[i]=get2(s[2]);
    }


    vector<string>st;

    for(int i=0;i<=9999;i++)
    {
       string str=con(i);
       bool tr=true;
       for(int j=0;j<n;j++)
       {
           if(frr1[j]!=f1(str,arr[j]))tr=false;
           if(frr2[j]!=f2(str,arr[j]))tr=false;
       }
       if(tr)st.push_back(str);
    }

   if(st.size()==0)cout<<"impossible"<<endl;
   else if(st.size()>1)cout<<"indeterminate"<<endl;
   else
    {
        for(int i=0;i<st.size();i++)cout<<st[i]<<endl;
    }

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
