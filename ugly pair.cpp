#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string arr,zrr,frr;
        cin>>arr;
        sort(arr.begin(),arr.end());
        int counter=0,k=0;

        int krr[28]={0};

        for(int i=0;i<arr.size();i++)
        {
            krr[arr[i]-'a']++;
        }

      //  for(int i=0;i<28;i++)cout<<krr[i]<<" ";

       for(int i=27;i>=0;i--)
       {
           int k=krr[i];
           if(i%2==0)
           {
               while(k>0)
               {
                   zrr+=(i+'a');
                   k--;
               }
           }
           else
           {
                 while(k>0)
               {
                   frr+=(i+'a');
                   k--;
               }
           }
       }

       arr={""};
       arr+=zrr;
       arr+=frr;

        counter=0;

       for(int i=0;i<arr.size();i++)
       {
           if(arr[i]==arr[i+1]+1||arr[i]+1==arr[i+1])
           {
               counter++;
               break;
           }
       }

       if(counter>0)
       {
           cout<<"no answer"<<endl;
       }
       else
       {
           for(int i=0;i<arr.size();i++)
           {
               cout<<arr[i];
           }
           cout<<endl;
       }

    }
}
