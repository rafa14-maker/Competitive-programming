#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
int arr[N];

void solve()
{
    int n,k;
    cin>>n>>k;
    for(int i=0;i<k;i++)
    {
        int a;
        cin>>a;
        arr[a]++;
    }
    bool tr=true;
    vector<string>vs;
    for(int i=1;i<=n;i++)
    {
       // if(arr[i]==0)continue;
        vs.clear();
        int a=0,b=0,c=0;
        for(int j=1;j<=n;j++)
        {
           // if(arr[j]==0)continue;
            if(i!=j)
            {
                int kp=arr[i]-arr[j];
                if(kp>1||kp<-1)c++;
                if(kp==0)continue;
                string s;
                char k = '0'+j;
                if(kp<0)
                {
                    s+='-';
                    s+=k;
                    a++;
                }
                else if(kp>0)
                {
                   s+='+';
                   s+=k;
                   b++;
                }
                vs.push_back(s);
            }
        }
        if(vs.size()<=2&&a<=1&&b<=1&&c==0)
        {
            tr=false;
            string a,b;
            for(int i=0;i<vs.size();i++)
            {
                if(vs[i][0]=='-')a=vs[i];
                else b=vs[i];
            }
            cout<<a<<" "<<b<<endl;
            break;
        }
    }
    if(tr)cout<<"*"<<endl;
}

int main()
{
  solve();
}

