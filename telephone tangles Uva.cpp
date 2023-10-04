#include<bits/stdc++.h>
using namespace std;

vector<float>cost;
vector<string>name;
vector<string>phn;

char he(int a)
{
  if(a==0)return '0';if(a==1)return '1';if(a==2)return '2';
  if(a==3)return '3';if(a==4)return '4';if(a==5)return '5';
  if(a==6)return '6';if(a==7)return '7';if(a==8)return '8';
  if(a==9)return '9';
}

string con(float pkr)
{
    string s;
    if(pkr<0.00)s+='-',pkr*=(-1);

    bool tr=false;
    pkr*=100.00;
    if(pkr/10.00!=1.00)tr=true;
  // cout<<pkr<<endl;
    string gr;

    int k=pkr;

    while(k>0)
    {
        int p=k%10;
        k/=10;
        gr+=he(p);
    }
   // cout<<gr<<endl;
    reverse(gr.begin(),gr.end());
   // cout<<gr<<endl;

   if(gr.size()==2)s+='0';

    for(int i=0;i<gr.size();i++)
    {
        if(gr.size()-2==i)
        {
            s+='.';
            s+=gr[i];
        }
        else s+=gr[i];
    }
 // cout<<gr<<endl;
    return s;
}
string con1(float p)
{
    int k=p;
   string gr="";

   // int k=pkr;

    while(k>0)
    {
        int p=k%10;
        k/=10;
        gr+=he(p);
    }
  reverse(gr.begin(),gr.end());
    return gr;
}

int get(char c)
{
    if(c=='0')return 0;if(c=='1')return 1;if(c=='2')return 2;
    if(c=='3')return 3;if(c=='4')return 4;if(c=='5')return 5;
    if(c=='6')return 6;if(c=='7')return 7;if(c=='8')return 8;
    if(c=='9')return 9;
}

void f(string a,string b,string c,string d,string e,string f)
{
    cout<<setw(16)<<a;

    cout<<setfill(' ')<<setw(25)<<b;

    cout<<setfill(' ')<<setw(10)<<c;

    cout<<setw(5)<<d;
    cout<<setw(6)<<e;
    cout<<setw(7)<<f;
    cout<<endl;
}


void call(string s,string str)
{
    phn.push_back(s);
    string f;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='$')break;
        f+=str[i];
    }
    name.push_back(f);
    bool tr=false;
    float k=0;
    for(int i=0;i<str.size();i++)
    {
       if(str[i]=='$')
       {
           tr=true;
           continue;
       }
       if(tr)
       {
           k*=10;
         k+=get(str[i]);
       }
    }
    cost.push_back(k);
}

void pri(string s,float k)
{
    if(s[0]!='0')
    {
       f(s,"Local",s,con1(k),"0.00","0.00");
       return;
    }
   bool tr=true;
   int idx=-1;
   string gr="";
   for(int i=0;i<phn.size();i++)
   {
      // string krr=phn[i];
       if(phn[i].size()<s.size())
       {
           tr=true;
           int kpt=phn[i].size();
           int mn=min(3,kpt);
           for(int j=0;j<mn;j++)
           {
               if(phn[i][j]!=s[j])tr=false;
           }
           if(tr)
           {
              // cout<<name[i]<<" ";
                gr="";
               for(int j=phn[i].size();j<s.size();j++)gr+=s[j];
               //cout<<gr<<endl;
              // cout<<cost[i]/100<<" ";
              // cout<<(cost[i]/100)*k<<endl;
              // f(s,name[i],gr,con1(k),con(cost[i]/100),con((cost[i]/100)*k));
              idx=i;
             //  return ;
           }
       }
   }
   if(idx!=-1)
   {
       f(s,name[idx],gr,con1(k),con(cost[idx]/100),con((cost[idx]/100)*k));
       return ;
   }
   if(!tr)
   {
      f(s,"Unknown","",con1(k),"","-1.00");
   }

}


void solve()
{
    while(1)
    {
        string s;
        cin>>s;
        if(s=="000000")
        {
          //  cout<<"Yes"<<endl;
            break;
        }
        cin.ignore();
        string str;
       getline(cin,str);
        call(s,str);
    }
    while(1)
    {
        string s;
        cin>>s;
        if(s=="#")break;
        float k;
        cin>>k;
        pri(s,k);
    }
}

int main()
{
   solve();
}

/*
088925 Broadwood$81
03 Arrowtown$38
0061 Australia$140
000000
031526 22
0061853279 3
0889256287213 122
779760 1
002832769 5
#
*/
