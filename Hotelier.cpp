#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[105]={0};
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='L')
        {
            for(int i=0;i<=9;i++)
            {
                if(arr[i]==0)
                {
                    arr[i]=1;
                    break;
                }
            }
        }
        else if(s[i]=='R')
        {
            for(int i=9;i>=0;i--)
            {
                if(arr[i]==0)
                {
                    arr[i]=1;
                    break;
                }
            }
        }
        else
        {
            int k=s[i]-'0';
            arr[k]=0;
        }
    }
    for(int i=0;i<=9;i++)
    {
        cout<<arr[i];
    }
}
