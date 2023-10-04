#include<bits/stdc++.h>
using namespace std;

char arr[55][55];

void solve()
{
    int n;
    cin>>n;
   // char arr[n+5][n+5];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)arr[i][j]='=';
    }
    string s;
    cin>>s;
    int cnt=0;
    vector<int>v;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='2')
        {
            cnt++;
            v.push_back(i);
        }
    }
    if(cnt==1||cnt==2)
    {
        cout<<"NO"<<endl;
        return ;
    }
    for(int i=0;i<v.size();i++)
    {
        if(i==v.size()-1)
        {
            int a= v[i];
            int b = v[0];
            arr[a][b]='+';
            arr[b][a]='-';
        }
        else
        {
            int a= v[i];
            int b = v[i+1];
            arr[a][b]='+';
            arr[b][a]='-';
        }
    }

    for(int i=0;i<n;i++)arr[i][i]='X';

    cout<<"YES"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)cout<<arr[i][j];
        cout<<endl;
    }

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}

/*

1
5
12212

*/
