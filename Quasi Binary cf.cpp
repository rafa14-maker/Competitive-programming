#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    int n = 0 ;
    int len = s.size();
    for(int i=0;i<s.size();i++)
    {
        int a = (int)(s[i]-'0');
        n = max(n,a);
    }
    int arr[n+5][len+5];

    for(int i=0;i<len;i++)
    {
        for(int j=0;j<n;j++)
        {
            int a = (int)(s[i]-'0');
            if(a>=j+1)arr[j][i]=1;
            else arr[j][i]=0;
        }
    }

    cout<<n<<endl;

    for(int i=0;i<n;i++)
    {
        bool tr=false;
        for(int j=0;j<len;j++){
                if(arr[i][j]==1)tr=true;
            if(tr)cout<<arr[i][j];
        }
        cout<<" ";
    }
    cout<<endl;

}

int main()
{
    solve();
}
