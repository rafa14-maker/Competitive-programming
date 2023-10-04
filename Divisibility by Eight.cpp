#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
 //   reverse(s.begin(),s.end());
    int arr[105];
    int n=s.size();
    for(int i=0;i<n;i++)
    {
        arr[i]=(int)(s[i]-'0');
    }
   // for(int i=0;i<n;i++)cout<<arr[i]<<" ";
   for(int i=0;i<n;i++)
   {
      // if(arr[i]==0)continue;
       int isum=arr[i];
       if(isum%8==0)
               {
                   cout<<"YES"<<endl;
                   cout<<isum<<endl;
                   return 0;
               }
       for(int j=i+1;j<n;j++)
       {
           int jsum=isum*10+arr[j];
        //   cout<<jsum<<endl;
           if(jsum%8==0)
               {
                   cout<<"YES"<<endl;
                   cout<<jsum<<endl;
                   return 0;
               }
           for(int k=j+1;k<n;k++)
           {
                int ksum=jsum*10+arr[k];
               //  cout<<ksum<<endl;
               if(ksum%8==0)
               {
                   cout<<"YES"<<endl;
                   cout<<ksum<<endl;
                   return 0;
               }
           }
       }
   } cout<<"NO"<<endl;
}
