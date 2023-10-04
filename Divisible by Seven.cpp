#include<bits/stdc++.h>
using namespace std;

 int frr[20];
 int mp[7]={1869,6198,1896,9186,9168,6189,8691};

int main()
{
    string s;
    cin>>s;

    for(int i=0;i<s.size();i++)
    {
        int a=(int)s[i]-'0';
        frr[a]++;
    }
    frr[1]--;
    frr[6]--;
    frr[8]--;
    frr[9]--;
    int arr[]={1,6,8,9};

    int sum=0;

    for(int i=1;i<=9;i++)
    {
        for(int j=0;j<frr[i];j++)
        {
            cout<<i;
            sum*=10;
            sum+=i;
            sum=sum%7;
        }
    }

  for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            for(int k=0;k<4;k++)
            {
                for(int p=0;p<4;p++)
                {
                    if(arr[i]!=arr[j]&&arr[i]!=arr[k]&&arr[i]!=arr[p]&&arr[j]!=arr[k]&&arr[j]!=arr[p]&&arr[k]!=arr[p])
                    {
                        int r=sum*10000+arr[i]*1000+arr[j]*100+arr[k]*10+arr[p];
                        r=r%7;

                        if(r==0)
                        {
                            cout<<arr[i]<<arr[j]<<arr[k]<<arr[p];
                            for(int c=0;c<frr[0];c++)cout<<0;
                            return 0;
                        }
                    }
                }
            }
        }

    }


  //  cout<<mp[sum];
  //  for(int i=0;i<frr[0];i++)cout<<0;
    return 0;
}
