#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    string arr;
    cin>>arr;
int    flag=0,counter=0;
     if(arr[a]=='-')flag++;
     for(int i=0;i<arr.size();i++)
     {
         if(arr[i]>='0'&&arr[i]<='9')counter++;
     }
     if(flag>0&&counter+flag==a+b+1)cout<<"Yes"<<endl;
     else cout<<"No"<<endl;
}
