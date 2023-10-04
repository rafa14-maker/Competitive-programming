#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];

    if(n==2||n==1)
    {
        cout<<0<<endl;
        return 0;
    }

    vector<int>v1;
    vector<int>v2;

    int a=arr[0];
    v1.push_back(a-1);
    v1.push_back(a);
    v1.push_back(a+1);

     a=arr[1];
    v2.push_back(a-1);
    v2.push_back(a);
    v2.push_back(a+1);

    int op=99999999;

    for(int i=0;i<v1.size();i++)
    {
        for(int j=0;j<v2.size();j++)
        {
            int p=v2[j]-v1[i];
            int counter=0,flag=0,c=v2[j];
           // cout<<v1[i]<<" "<<v2[j]<<" "<<p<<" "<<c<<endl;
           if(v1[i]!=arr[0])flag++;
           if(v2[j]!=arr[1])flag++;
            for(int k=2;k<n;k++)
            {
                if(arr[k]-c==p)
                {
                    c=arr[k];
                    counter++;
                }
                else  if(arr[k]+1-c==p)
                {
                    c=arr[k]+1;
                    counter++;
                    flag++;
                }
                else  if(arr[k]-1-c==p)
                {
                    c=arr[k]-1;
                    counter++;
                    flag++;
                }
                else break;
            }
            if(counter==n-2)
            {
                op=min(op,flag);
            }
        }
    }
   if(op==99999999) cout<<-1<<endl;
   else cout<<op<<endl;

}
