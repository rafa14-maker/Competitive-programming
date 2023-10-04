#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];

    int ans=0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]==1&&arr[i+1]==0)
        {
            string s;
            s+='1';
            s+='0';
            int counter=2;
            int flag=1;
            while((arr[i+counter])!=(s[counter-1]-'0'))
            {
                s+=(arr[i+counter]+'0');
                if(arr[i+counter]==1)flag++;
                counter++;

                if(counter==n)break;
            }
      //    cout<<i<<" "<<flag<<" "<<counter<<" "<<s<<endl;
            ans+=(flag)/2;
            i=i+counter-1;
        }
    }
    cout<<ans<<endl;
}
