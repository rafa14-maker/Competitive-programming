#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr,frr,krr;
    cin>>arr;
    int counter=0,flag=0,c=0;

    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]=='.')c=i;
        if(arr[i]=='e')
        {
            flag++;
        }
        else if(flag==0&&arr[i]!='.')
        {
            frr+=arr[i];
        }
        else if(flag>0)
        {
            counter=i;
            break;
        }
    }
    if(flag==0)
    {
        cout<<arr<<endl;
        return 0;
    }
   int sum=0,k=1;
   for(int i=arr.size()-1;i>=0;i--)
   {
       if(arr[i]=='e')break;
       else
       {
           sum+=((arr[i]-'0')*k);
           k*=10;
       }
   }

  for(int i=0;i<frr.size();i++)
   {
       if(i==c+sum)krr+='.',krr+=frr[i];
      else
      {
          krr+=frr[i];
      }
   }
  // cout<<sum<<endl;
   if(c+sum>frr.size())
   {
       int a=(c+sum)-frr.size();
       while(a--)krr+='0';
   }
   flag=0;
//  cout<<krr<<endl;
   for(int i=0;i<krr.size();i++)
   {
       if(flag==0&&krr[i]=='.')cout<<0<<krr[i],flag++;
       else if(krr[i]=='0'&&flag>0)cout<<krr[i];
       else if(krr[i]!='0')cout<<krr[i],flag++;
   }
}
