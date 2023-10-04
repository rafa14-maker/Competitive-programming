#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+2][2];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i][0]>>arr[i][1];
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int a=0,b=0,c=0,d=0;
        for(int j=0;j<n;j++)
        {

                if(arr[j][0]>arr[i][0]&&arr[j][1]==arr[i][1])a++;
              else  if(arr[j][0]<arr[i][0]&&arr[j][1]==arr[i][1])b++;
              else  if(arr[j][0]==arr[i][0]&&arr[j][1]<arr[i][1])c++;
              else  if(arr[j][0]==arr[i][0]&&arr[j][1]>arr[i][1])d++;
        }
      //  cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
        if(a!=0&&b!=0&&c!=0&&d!=0)sum++;
    }
    cout<<sum<<endl;
}
