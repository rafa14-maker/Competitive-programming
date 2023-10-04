#include<bits/stdc++.h>
using namespace std;
using ll =long long;

vector<string>vs;
vector<ll>v;
map<string,bool>mp;

int get(char c)
{
    if(c=='0')return 0;if(c=='1')return 1;if(c=='2')return 2;if(c=='3')return 3;
      if(c=='4')return 4;if(c=='5')return 5;if(c=='6')return 6;if(c=='7')return 7;
      if(c=='8')return 8;if(c=='9')return 9;
}

ll kp(string s)
{
    ll k=0;
    for(int i=0;i<s.size();i++)
    {
        k*=10;
        k+=get(s[i]);
    }
    return k;
}

void built()
{
    v.clear();

    for(int i=0;i<vs.size();i++)
    {
        v.push_back(kp(vs[i]));
    }
}

string f(string a,string b)
{
    string s;
    s=a;
    s+='-';
    int kp=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]!=b[i])
        {
            kp=i;
            break;
        }
    }

    for(int i=kp;i<b.size();i++)s+=b[i];

    return s;
}

void solve(int n,int test)
{
    vs.clear();
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        vs.push_back(s);
    }
    sort(vs.begin(),vs.end());
    built();

    int idx=0,counter=1,cnt=0;
   // v[0]=0;

  // for(int i=0;i<vs.size();i++)cout<<vs[i]<<" ";cout<<endl;
  // for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<endl;

    vector<string>frr;

    for(int i=1;i<v.size();i++)
    {
        if(v[i]==v[cnt]+1)
        {
            counter++;
            cnt=i;
        }
        else
        {
            if(counter>=2)
            {
                vs[i-1]=f(vs[idx],vs[i-1]);
                for(int j=idx;j<i-1;j++)vs[j]="0";
            }
            counter=1;
            idx=i;
            cnt=i;
        }
    }
    if(counter>=2)
    {
         vs[n-1]=f(vs[idx],vs[n-1]);
        for(int j=idx;j<n-1;j++)vs[j]='0';
    }

   printf("Case %d:\n",test);

   for(int i=0;i<vs.size();i++)if(vs[i]!="0")cout<<vs[i]<<endl;
  cout<<endl;
}

int main()
{
   int test=0;
    int n;
    while(1){
    test++;
    cin>>n;
    if(n==0)break;
    else solve(n,test);
    }
}
