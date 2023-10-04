#include<bits/stdc++.h>
using namespace std;

string name[15];
int att[15];
int def[15];

string str;
int a_atk,b_def;
int cnt;

void built()
{
    for(int i=0;i<10;i++)name[i]="",att[i]=0,def[i]=0;

    a_atk=0;
    b_def=0;

    str="";
}

bool check(string s)
{
    int one=0,two=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0')two++;
        if(s[i]=='1')one++;
    }
    if(one!=two)return false;
    else return true;
}

int cal_att(string s)
{
    int sum=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        {
            sum+=att[i];
        }
    }
    return sum;
}



int cal_def(string s)
{
    int sum=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0')
        {
            sum+=def[i];
        }
    }
    return sum;
}

string m(string a,string b)
{
    string k,p;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='1')k+=name[i];
    }
    for(int i=0;i<b.size();i++)
    {
        if(b[i]=='1')p+=name[i];
    }
    if(k<=p)return a;
    else return b;
}

void f(string s)
{
    if(s.size()==10)
    {
      if(check(s))
      {
          int a=cal_att(s);
          int b=cal_def(s);
          if(a>a_atk)
          {
              a_atk=a;
              b_def=b;
              str=s;
             // cout<<"90 "<<str<<endl;
          }
          else if(a==a_atk)
          {
              if(b>b_def)
              {
                  b_def=b;
                   str=s;
                 //  cout<<"00 "<<str<<endl;
              }
              else if(b==b_def)
              {
                  str=m(str,s);
                //  cout<<"11 "<<str<<endl;
              }
          }
      }
        return ;
    }
    f(s+'0');
    f(s+'1');
}

void pri()
{
  vector<string>kp;
  vector<string>kc;

  for(int i=0;i<str.size();i++)
  {
      if(str[i]=='1')
      {
          kp.push_back(name[i]);
      }
      else if(str[i]=='0')
      {
          kc.push_back(name[i]);
      }
  }

  sort(kp.begin(),kp.end());
  sort(kc.begin(),kc.end());

  cout<<"(";
  for(int i=0;i<kp.size();i++)
  {
      if(i!=0)cout<<", ";
      cout<<kp[i];
  }
  cout<<")"<<endl;

  cout<<"(";
  for(int i=0;i<kc.size();i++)
  {
      if(i!=0)cout<<", ";
      cout<<kc[i];
  }
  cout<<")"<<endl;

}


void solve(int test)
{
    built();
    for(int i=0;i<10;i++)cin>>name[i]>>att[i]>>def[i];
   f(str);
   printf("Case %d:\n",test);
   pri();
}

int main()
{
    int q;
    cin>>q;
    int test=0;
    while(q--)solve(++test);
}

/*
propulsion 5 2
warbler 1 7
nationalism 7 3
congregate 4 10
taurus 1 1
gaseous 7 4
controversial 6 6
refectory 5 7
smarter 5 7
outdo 4 2
*/
