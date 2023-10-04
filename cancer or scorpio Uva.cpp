#include<bits/stdc++.h>
using namespace std;

int con(char c)
{
    if(c=='0')return 0;if(c=='1')return 1;
     if(c=='2')return 2;if(c=='3')return 3;if(c=='4')return 4;if(c=='5')return 5;
    if(c=='6')return 6;if(c=='7')return 7;if(c=='8')return 8;if(c=='9')return 9;
}

bool leap_year(int years){return years % 4 == 0 && !(years % 100 == 0 && years % 400 != 0);}

int days(int mon,int year)
{
    if(mon==11||mon==4||mon==6||mon==9)return 30;
    if(mon==2)
    {
        return 28+leap_year(year);
    }
    return 31;
}

void pri(int months,int day)
{
     if ((day>=21 && months==1)  || (day<=19 && months==2)) printf("aquarius\n");
     if ((day>=20 && months==2)  || (day<=20 && months==3)) printf( "pisces\n");
     if ((day>=21 && months==3)  || (day<=20 && months==4)) printf( "aries\n");
     if ((day>=21 && months==4)  || (day<=21 && months==5)) printf( "taurus\n");
     if ((day>=22 && months==5)  || (day<=21 && months==6)) printf( "gemini\n");
     if ((day>=22 && months==6)  || (day<=22 && months==7)) printf( "cancer\n");
     if ((day>=23 && months==7)  || (day<=21 && months==8)) printf( "leo\n");
     if ((day>=22 && months==8)  || (day<=23 && months==9)) printf( "virgo\n");
     if ((day>=24 && months==9)  || (day<=23 && months==10)) printf( "libra\n");
     if ((day>=24 && months==10) || (day<=22 && months==11)) printf( "scorpio\n");
     if ((day>=23 && months==11) || (day<=22 && months==12)) printf( "sagittarius\n");
     if ((day>=23 && months==12) || (day<=20 && months==1))  printf( "capricorn\n");
}

void solve(int qk)
{
   // string s;
   // cin>>s;

   int mon ,day,year;
      scanf("%2d%2d%4d", &mon , &day, &year);

   // cout<<day<<" "<<mon<<" "<<year<<endl;

    for(int i=0;i<40;i++)
    {
        int c=days(mon,year);
        day=(day+6)%c+1;
        if(day<8)
        {
            mon=mon%12+1;
            if(mon==1)++year;
        }
    }

    printf ("%d %02d/%02d/%04d ", qk, mon, day, year % 10000);pri(mon,day);


}

int main()
{
    int q;
  cin>>q;
  for(int i=0;i<q;i++)solve(i+1);
}
