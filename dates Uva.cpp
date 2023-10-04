#include<bits/stdc++.h>
using namespace std;

int day,month,year;

string li[]={"January", "February", "March", "April", "May", "June",
"July", "August", "September", "October", "November" , "December"};

int con(char c)
{
    if(c=='0')return 0;if(c=='1')return 1;if(c=='2')return 2;if(c=='3')return 3;if(c=='4')return 4;
    if(c=='5')return 5;if(c=='6')return 6;if(c=='7')return 7;if(c=='8')return 8;if(c=='9')return 9;
}

int fun(string s)
{

}

bool leap_year(int k)
{
    if(k%400==0||(k%4==0&&k%100!=0))return true;
    return false;
}

int days(int k,int p)
{
    if(k==4||k==6||k==9||k==11)return 30;
    else if(k==2)return 28+leap_year(p);
    else return 31;
}

void cal(string s)
{
   int counter=0;
   string arr,frr,krr,str;
   for(int i=0;i<s.size();i++)
   {
       if(s[i]!='-')str+=s[i];
       else
       {
           counter++;
           if(counter==1)
           {
               arr=str;
               str="";
           }
           else if(counter==2)
           {
               frr=str;
               str="";
           }
       }
   }
   krr=str;
   str="";

   year=0;
   for(int i=0;i<arr.size();i++)
   {
       year*=10;
       year+=con(arr[i]);
   }

  for(int i=0;i<12;i++)
  {
      if(li[i]==frr)month=i+1;
  }

   day=0;
   for(int i=0;i<krr.size();i++)
   {
       day*=10;
       day+=con(krr[i]);
   }

}

void fun(int k)
{
    while(k--)
    {
        day++;
        if(day>days(month,year))
        {
            month++;
            day=1;
            if(month>12)
            {
                month=1;
                year++;
            }
        }
    }
}


void solve(int pk)
{
    string s;
    cin>>s;
   cal(s);
   int k;
   cin>>k;
   fun(k);
   printf("Case %d: ",pk);
   cout<<year<<"-"<<li[month-1]<<"-";
   if(day<10)cout<<0<<day<<endl;
   else cout<<day<<endl;

}

int main()
{
    int q;
    cin>>q;
    cin.ignore();
    for(int i=1;i<=q;i++)solve(i);
}
