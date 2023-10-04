#include<bits/stdc++.h>
using namespace std;

string str[]={"GMT","BST","IST","WET","WEST","CET","CEST","EET","EEST","MSK","MSD","AST","ADT","NST",
              "NDT","EST","EDT","CST","CDT","MST","MDT","PST","PDT","HST","AKST","AKDT","AEST","AEDT",
              "ACST","ACDT","AWST"};

int tim[]={0,60,60,0,60,60,120,120,180,180,240,-240,-180,-210,-150,-300,-240,-360,-300,-420,-360,-480,-420,-600,-540,-480,600,660,
            570,630,480};

int get(char c)
{
    if(c=='0')return 0;if(c=='1')return 1;if(c=='2')return 2;
    if(c=='3')return 3;if(c=='4')return 4;if(c=='5')return 5;
    if(c=='6')return 6;if(c=='7')return 7;if(c=='8')return 8;
    if(c=='9')return 9;
}

void pri(int k,bool tr)
{
     k=k%720;
    int a=k/60;
   if(a==0)a=12;
    int b=k%60;

    cout<<a<<":";
    if(b<10)cout<<0<<b<<" ";
    else cout<<b<<" ";
    if(tr)cout<<"a.m."<<endl;
    else cout<<"p.m."<<endl;
}

int con(string s)
{
    int a=0,b=0;
    int counter=0;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]==':')counter++;
        else
        {
            if(counter%2==0)
            {
                a*=10;
                a+=get(s[i]);
            }
            else
            {
                b*=10;
                b+=get(s[i]);
            }
        }
    }

    return (a*60+b)%720;
}

void solve()
{
    string a,b,c,d;
    cin>>a;
    int k;

    if(a=="noon"||a=="midnight")
    {
       cin>>b>>c;

       if(a=="noon")
       {
          k=720;
          d="p.m.";
       }
       if(a=="midnight")
       {
          k=0;
          d="a.m.";
       }
    }

     else{  cin>>d>>b>>c;
     k=con(a);
      if(d=="p.m.")k+=720;

     }

 // if(d=="p.m.")k+=720;

    for(int i=0;i<31;i++)
    {
        if(b==str[i])
        {
            k-=tim[i];
        }
    }

    for(int i=0;i<31;i++)
    {
        if(c==str[i])
        {
            k+=tim[i];
        }
    }

    k=k%1440;

    if(k<0)k=1440+k;

    bool tr=true;

    if(k>=720)tr=false;

   // if(k==1440)tr=true;

    if(k==720)
    {
       cout<<"noon"<<endl;
        return;
    }
    else if(k==0||k==1440)
    {
       cout<<"midnight"<<endl;
       return;
    }

   // cout<<k<<endl;

    pri(k,tr);

}


int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
