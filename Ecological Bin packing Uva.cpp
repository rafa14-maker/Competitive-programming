#include<bits/stdc++.h>
using namespace std;
vector<long long>v;

void built()
{
    string str;
    getline(cin,str);
    stringstream ss;
    ss<<str;
    long long val;
    while(ss>>val)
    {
        v.push_back(val);
    }
}

long long f(int n,int k)
{
    if(k==0)
    {
        if(n==0)return v[1]+v[2];
        if(n==1)return v[0]+v[2];
        if(n==2)return v[0]+v[1];
    }
    else if(k==1)
    {
        if(n==0)return v[4]+v[5];
        if(n==1)return v[3]+v[5];
        if(n==2)return v[3]+v[4];
    }
    else if(k==2)
    {
        if(n==0)return v[7]+v[8];
        if(n==1)return v[6]+v[8];
        if(n==2)return v[6]+v[7];
    }
}

string con(int i,int j,int k)
{
    string str;
    if(i==0)str+='B';if(i==1)str+='G';if(i==2)str+='C';
    if(j==0)str+='B';if(j==1)str+='G';if(j==2)str+='C';
    if(k==0)str+='B';if(k==1)str+='G';if(k==2)str+='C';
    return str;
}

void solve()
{
    string str="";
    long long idx=1e12;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                if(i!=j&&i!=k&&j!=k)
                {
                    long long sum=0;
                    sum+=f(i,0);
                    sum+=f(j,1);
                    sum+=f(k,2);
                    if(sum<idx)
                    {
                      idx=sum;
                      str=con(i,j,k);
                    }
                    else if(sum==idx)
                    {
                        str=min(str,con(i,j,k));
                    }
                }
            }
        }
    }
    cout<<str<<" "<<idx<<endl;
}

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        v.clear();
        v.push_back(n);
        built();
        solve();
    }
}
