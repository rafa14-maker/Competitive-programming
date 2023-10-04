#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int flag=0,counter=0;
    for(int i=0,j=str.size()-1;i<j;i++,j--)
    {
        if(str[i]!=str[j])counter++;
    }
   // cout<<counter<<endl;
    int len = str.size();
    int n = (len-1)/2;
    for(int i=0,j=n-1;i<j;i++,j--)
    {
        if(str[i]!=str[j])counter++;
    }
   //  cout<<counter<<endl;
    len = str.size();
     n = (len+3)/2;
      for(int i=n-1,j=len-1;i<j;i++,j--)
    {
        if(str[i]!=str[j])counter++;
    }
   //  cout<<counter<<endl;
    if(counter==0)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
