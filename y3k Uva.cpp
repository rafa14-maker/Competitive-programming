#include<bits/stdc++.h>
using namespace std;

#define FasterIO     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool leap(int k)
{
    if(k%400==0)return true;
    if(k%100!=0&&k%4==0)return true;
   // if(k%4==0)return true;
    return false;
}

int days(int k,int year)
{
    if(k==4||k==6||k==9||k==11)return 30;
    if(k==2)return 28+leap(year);
    return 31;
}

void solve(int n,int date,int month,int year)
{
    while(n>=400)
    {
       if(month==1||month==2)
       {
           if(leap(year))
           {
               n-=366;
               year++;
           }
           else
           {
               n-=365;
               year++;
           }
       }
       else
       {
            if(leap(year+1))
           {
               n-=366;
               year++;
           }
           else
           {
               n-=365;
               year++;
           }
       }
    }
   while(n--)
    {
        date++;
        if(days(month,year)<date)
        {
            date=1;
            month++;
            if(month>12)
            {
                month =1;
                year++;
            }
        }
    }
    cout<<date<<" "<<month<<" "<<year<<endl;
}

int main()
{
    FasterIO
    while(1)
    {
        int n;
        int date,month,year;
        cin>>n>>date>>month>>year;
        if(n==0&&date==0&&month==0&&year==0)break;
        solve(n,date,month,year);
    }
}
