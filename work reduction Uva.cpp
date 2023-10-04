#include<bits/stdc++.h>
using namespace std;

void solve(int test)
{
    int n,m,l;
    cin>>n>>m>>l;

    char p;

    int arr[l+5],frr[l+5];
    string nam[l+5];

    for(int i=0;i<l;i++)
    {
        string s;
        while(1)
        {
            cin>>p;
            if(p!=':')s+=p;
            else
            {
                cin>>arr[i]>>p>>frr[i];
                nam[i]=s;
                break;
            }
        }
    }

    printf("Case %d\n",test);

    vector<pair<int,string> >v;

    for(int i=0;i<l;i++)
    {
        int sum=0;
        int k=n;
            while(k>m)
            {
                int p=k/2;
                 if(p<m||k-p==0)
                 {
                     int kp=k-m;
                     sum+=kp*arr[i];
                     break;
                 }
               else if(frr[i]<p*arr[i])
                {
                    k=p;
                    sum+=frr[i];
                }
                else
                {
                    k-=p;
                    sum+=p*arr[i];
                }
        }
        v.push_back(make_pair(sum,nam[i]));
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i].second<<" "<<v[i].first<<endl;
    }
}

int main()
{
    int q;
    cin>>q;
    int test=0;
    while(q--)solve(++test);
}

