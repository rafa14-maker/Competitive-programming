#include<bits/stdc++.h>
using namespace std;
#define FasterIO     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

string haab_month[]={ "pop", "no", "zip", "zotz", "tzec", "xul", "yoxkin", "mol", "chen", "yax", "zac", "ceh", "mac", "kankin", "muan", "pax",
                      "koyab", "cumhu","uayet"};

string tzolkin_day[]={"imix", "ik", "akbal", "kan", "chicchan",
"cimi", "manik", "lamat", "muluk", "ok", "chuen", "eb", "ben", "ix", "mem", "cib", "caban", "eznab", "canac", "ahau" };


int days(int k)
{
    if(k==19)return 5;
    else return 20;
}

int get(char c)
{
    if(c=='1')return 1;if(c=='5')return 5;if(c=='8')return 8;
    if(c=='2')return 2;if(c=='6')return 6;if(c=='9')return 9;
    if(c=='3')return 3;if(c=='7')return 7;if(c=='0')return 0;
    if(c=='4')return 4;
}

int numof(string s)
{
    int p=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='0'&&s[i]<='9'){
        p*=10;
        p+=get(s[i]);}
    }
    return p;
}

int monthko(string s)
{
    for(int i=0;i<20;i++)
    {
        if(haab_month[i]==s)
        {
            return i;
        }
    }
}

void tzolkin(int sum)
{
    cout<<sum%13+1<<" "<<tzolkin_day[sum%20]<<" "<<sum/260<<endl;
}

void cal(int num,int month,int year)
{
    int k=num+20*month+year*365;
    tzolkin(k);
}


void solve()
{
    string arr,frr;
    int k;
    cin>>arr>>frr>>k;
    int a=numof(arr);
    int b=monthko(frr);
  // cout<<a<<" "<<b<<" "<<k<<endl;
    cal(a,b,k);
}

int main()
{
    FasterIO
    int q;
    cin>>q;
    cout<<q<<endl;
    cin.ignore();
    while(q--)solve();
}
