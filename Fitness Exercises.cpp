#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        int arr[n+5];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        string s;
        cin>>s;
        int flag=0;
        for(int i=0;i<s.size();i++)
        {
           if(s[i]=='>'&&arr[i+1]==-1)arr[i+1]=arr[i]-1;
          else if(s[i]=='='&&arr[i+1]==-1)arr[i+1]=arr[i];
          else if(s[i]=='>'&&arr[i]==-1&&arr[i+1]>=0)arr[i]=arr[i+1]+1;
           else if(s[i]=='='&&arr[i]==-1&&arr[i+1]>=0)arr[i]=arr[i+1];
          else if(s[i]=='<'&&arr[i-1]==-1)arr[i-1]=arr[i]-1;
          else   if(s[i]=='<'&&arr[i]==-1&&arr[i-1]>=0)arr[i]=arr[i-1]+1;
        }


      /*  for(int i=s.size()-1;i>=0;i--)
        {
             if(s[i]=='<'&&arr[i-1]==-1)arr[i-1]=arr[i]-1;
             if(s[i]=='<'&&arr[i]==-1&&arr[i-1]>=0)arr[i]=arr[i-1]+1;
        }*/

        for(int i=0;i<n-1;i++)
        {
            if(arr[i+1]<0||arr[i]<0)
            {
                flag++;
                break;
            }
             if(s[i]=='<'&&arr[i]>=arr[i+1])
            {
                flag++;
                break;
            }
            if(s[i]=='>'&&arr[i]<=arr[i+1])
            {
                flag++;
                break;
            }
             if(s[i]=='='&&arr[i]!=arr[i+1])
            {
                flag++;
                break;
            }
        }

       // for(int i=0;i<n;i++)cout<<arr[i]<<" ";

        if(flag==0)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}
