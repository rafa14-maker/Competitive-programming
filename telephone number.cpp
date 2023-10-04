#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int flag=-1,counter=-1;
        string arr;
        cin>>arr;
        for(int i=0;i<n;i++)
        {
          if(flag==-1&&arr[i]=='8')
          {
              flag=i+1;
          }
          else if(counter==-1)
          {
              counter++;
          }
        }
        if(flag==-1||counter==-1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if(n-flag>=10)cout<<"YES"<<endl;

            else cout<<"NO"<<endl;
        }
    }
}
