#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr;
    cin>>arr;
    int counter=0;
    for(int i=0,j=arr.size()-1;j>i;j--,i++)
    {
        if(arr[i]!=arr[j])
        {
            counter++;
        }
    }
   if(arr.size()%2==0&&counter==1)
   {
       cout<<"YES"<<endl;
   }
   else  if(arr.size()%2==1&&counter<=2)
   {
       cout<<"YES"<<endl;
   }
   else
   {
       cout<<"NO"<<endl;
   }
}
