#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n))
    {
        if(n==0)break;
        int arr[n+5];
        for(int i=0;i<n;i++)cin>>arr[i];
        string s;
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                if(i+1<n&&arr[i]<arr[i+1])s+='a';
                else if(i+1<n&&arr[i]>arr[i+1])s+='b';
            }
            else if(arr[i]<arr[i-1])s+='a';
            else if(arr[i]>arr[i-1])s+='b';
        }
      s=s+s;
      int counter=0;
     for(int i=0;i<s.size()-1;i++)
     {
         if(s[i]!=s[i+1])counter++;
     }
     int len=s.size()-1;
    if(s[len]!=s[0])counter++;
    cout<<counter/2<<endl;
    }
}
