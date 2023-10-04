#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n,k;
    cin>>n>>k;
    vector<long long>vs;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;

       long long pt=0;
       long long idx=1;

       for(int i=s.size()-1;i>=0;i--)
       {
           if(s[i]=='/')break;
           else
           {
               long long kp = (int)s[i]-'0';
               pt+=kp*idx;
               idx*=10;
           }
       }

       vs.push_back(pt);

    }
    sort(vs.begin(),vs.end());

    for(int i=0;i<k;i++)
    {

        cout<<vs[i];
        if(i!=k-1)cout<<" ";
        else cout<<endl;
    }

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
