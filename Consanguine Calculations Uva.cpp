#include<bits/stdc++.h>
using namespace std;

string cha(char n)
{
    if(n=='0')return "A";
    if(n=='1')return "B";
    if(n=='2')return "AB";
    if(n=='3')return "O";
}

char rcha(string n)
{
    if(n=="A")return '0';
    if(n=="B")return '1';
    if(n=="AB")return '2';
    if(n=="O")return '3';
}

int get(char c)
{
    if(c=='0')return 0;
    if(c=='1')return 1;
    if(c=='2')return 2;
    if(c=='3')return 3;
}

string child[5][5];
string pre[5][5];

void built()
{
    child[0][0]="03";child[0][1]="0123";child[0][2]="012";child[0][3]="03";
    child[1][0]="0123";child[1][1]="13";child[1][2]="012";child[1][3]="13";
    child[2][0]="012";child[2][1]="012";child[2][2]="012";child[2][3]="01";
    child[3][0]="03";child[3][1]="13";child[3][2]="01";child[3][3]="3";


    pre[0][0]="0123";pre[0][1]="12";pre[0][2]="12";pre[0][3]="013";
    pre[1][0]="02";pre[1][1]="0123";pre[1][2]="02";pre[1][3]="013";
    pre[2][0]="0123";pre[2][1]="0123";pre[2][2]="012";pre[2][3]="";
    pre[3][0]="02";pre[3][1]="12";pre[3][2]="";pre[3][3]="013";
}

void f(string a,string b,int counter)
{
    if(a=="O-"&&b=="O-")
    {
       printf("Case %d: ",counter);
       cout<<a<<" "<<b<<" "<<"O-";
       return;
    }
  int idx=a.size()-1;
  char fl=a[idx];

  idx=b.size()-1;
  char fl2=b[idx];

  string arr,frr;
  for(int i=0;i<a.size()-1;i++)arr+=a[i];
  for(int i=0;i<b.size()-1;i++)frr+=b[i];

  char ak=rcha(arr);
  char bk=rcha(frr);

 // cout<<ak<<" "<<bk<<endl;

  int ap=get(ak);
  int bp=get(bk);

 // cout<<ap<<" "<<bp<<endl;

  string str=child[ap][bp];
  reverse(str.begin(),str.end());

 // cout<<str<<endl;

  bool pl=true,pl2=true;


   if(fl=='-'&&fl2=='-')pl=false;

  printf("Case %d: ",counter);
  cout<<a<<" "<<b<<" "<<"{";

  bool tr=true;

   for(int i=0;i<str.size();i++)
  {
      string s=cha(str[i]);

      if(pl&&pl2)
      {
          if(tr)
          {
              cout<<s<<"-";
              tr=false;
          }
          else
          {
              cout<<", "<<s<<"-";
          }
          if(tr)
          {
              cout<<s<<"+";
              tr=false;
          }
          else
          {
              cout<<", "<<s<<"+";
          }
      }
     else if(pl2)
      {
          if(tr)
          {
              cout<<s<<"-";
              tr=false;
          }
          else
          {
              cout<<", "<<s<<"-";
          }
      }
     else if(pl)
      {
            if(tr)
          {
              cout<<s<<"+";
              tr=false;
          }
          else
          {
              cout<<", "<<s<<"+";
          }

      }

  }

  //if(str.size()==0)cout<<"IMPOSSIBLE";

  cout<<"}";
}
void f1(string a,string b,int k,int counter)
{
    int idx=a.size()-1;
  char fl=a[idx];

  idx=b.size()-1;
  char fl2=b[idx];

  string arr,frr;
  for(int i=0;i<a.size()-1;i++)arr+=a[i];
  for(int i=0;i<b.size()-1;i++)frr+=b[i];

  char ak=rcha(arr);
  char bk=rcha(frr);

  int ap=get(ak);
  int bp=get(bk);

  string str=pre[ap][bp];
  reverse(str.begin(),str.end());

  bool pl=true,pl2=false;

  if(fl2=='-'||fl=='+')pl2=true;


   printf("Case %d: ",counter);

   if(k==2)cout<<a<<" ";


 if(str.size()!=0){
   cout<<"{";
   bool tr=true;
   for(int i=0;i<str.size();i++)
  {
      string s=cha(str[i]);

      if(pl&&pl2)
      {
          if(tr)
          {
              cout<<s<<"-";
              tr=false;
          }
          else
          {
              cout<<", "<<s<<"-";
          }
          if(tr)
          {
              cout<<s<<"+";
              tr=false;
          }
          else
          {
              cout<<", "<<s<<"+";
          }
      }
     else if(pl2)
      {
          if(tr)
          {
              cout<<s<<"-";
              tr=false;
          }
          else
          {
              cout<<", "<<s<<"-";
          }
      }
     else if(pl)
      {
            if(tr)
          {
              cout<<s<<"+";
              tr=false;
          }
          else
          {
              cout<<", "<<s<<"+";
          }

      }

  }
     cout<<"} ";

 }
 else cout<<"IMPOSSIBLE"<<" ";

     if(k==1)cout<<a<<" ";

    cout<<b;
}

int main()
{
    int counter=0;
    string a,b,c;
    built();
  while(1)
  {
     // if(counter!=0)cout<<endl;
      counter++;

      //if(s=="E N D")break;
      string arr;
      getline(cin,arr);
      if(arr.size()==0)
      {
          counter--;
          continue;
      }
      a="",b="",c="";

      int cnt=0;
      bool tr=false;

      for(int i=0;i<arr.size();i++)
      {
          if(arr[i]!=' ')tr=true;
          if(!tr)continue;
          if(i-1>=0&&arr[i]==' '&&arr[i-1]==' ')continue;
          if(arr[i]!=' ')
          {
              if(cnt==0)a+=arr[i];
              else if(cnt==1)b+=arr[i];
              else if(cnt==2)c+=arr[i];
          }
          else
          {
              cnt++;
          }
      }

      if(a=="E"&&b=="N"&&c=="D")break;
      if(c=="?")f(a,b,counter);
      else
      {
          if(a=="?")f1(b,c,1,counter);
          else f1(a,c,2,counter);
      }
      cout<<endl;
  }
}
