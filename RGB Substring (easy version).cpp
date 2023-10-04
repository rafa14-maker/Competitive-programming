#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    string s="RGBRGBRGB";
    while(q--)
    {
        int n,k;
        cin>>n>>k;
        string arr;
        cin>>arr;
        int m=INT_MAX;
        for(int i=0;i<arr.size();i++)
        {
           for(int j=0;j<s.size();j++)
           {
              // int sum=0,flag=0;
               if(arr[i]==s[j])
               {
                 /*  int c=j+1;
                   if(sum+flag>=k)break;
                   if(c>=s.size())c=0;
                   for(int k=0;k<arr.size();k++)
                   {
                       if(arr[k]==s[c])
                       {
                           sum++;
                       }
                       else
                       {
                           flag++;
                       }
                       c++;
                       if(sum+flag>=k)break;
                   }
               }
               m=min(flag,m);*/
               cout<<s[j]<<" ";
           }

          }
          cout<<m<<endl;
    }
}
}
