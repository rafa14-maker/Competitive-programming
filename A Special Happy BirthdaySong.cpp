#include<bits/stdc++.h>
using namespace std;

string str[]={"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};

int main()
{
    int n;
    cin>>n;
    string arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    int k= n/16;
    if(n%16!=0)k++;
    int i=0,j=0;

        for(;;i++,j++)
        {
            if(i==16)i=0,k--;
              if(k==0)break;
            if(j==n)j=0;
            cout<<arr[j]<<": "<<str[i]<<endl;
        }

}
