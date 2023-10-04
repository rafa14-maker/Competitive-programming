#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr;
    cin>>arr;

    reverse(arr.begin(),arr.end());
    int counter=0,flag=0;
    for(int i=0;i<arr.size();i++)
    {
       if(arr[i]=='0')counter++;
       else
       {
           if(arr[i]=='1'&&i==arr.size()-1)
           {
               continue;
           }
           flag=1;
           int j;
           for(j=i;j<arr.size();j++)
           {
               if(arr[j]=='1')flag++,arr[j]=0;
               else if(arr[j]=='0')
               {
                   arr[j]='1';
                   break;
               }
           }
           counter+=flag;
            i=j-1;
       }
           }
    cout<<counter<<endl;
}
