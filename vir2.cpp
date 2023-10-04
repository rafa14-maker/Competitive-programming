#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            for(int j=0,p=i-1;j<p;j++,p--)
            {
                swap(s[j],s[p]);
            }
            //cout<<s<<endl;
        }
    }
   reverse(s.begin(),s.end());
    cout<<s<<endl;
}
