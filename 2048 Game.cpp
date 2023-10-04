#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        long long arr[n+5];
        for(int i=0;i<n;i++)
        {
            long long a;
            cin>>a;
            if(a>2048)arr[i]=0;
            else arr[i]=a;
        }
        sort(arr,arr+n);
        int counter=0;

        while(counter==0)
        {
            int flag=0;
            for(int i=0;i<n;i++)
            {
                if(arr[i]==0)continue;
                else if(arr[i]==2048)
                {
                    counter++;
                    break;
                }
                for(int j=i+1;j<n;j++)
                {
                    if(arr[j]==0)continue;
                   else if(arr[i]==arr[j])
                    {
                        flag++;

                        arr[i]+=arr[j];
                        if(arr[i]==2048)
                        {
                            counter++;
                            break;
                        }
                        arr[j]=0;
                    }
                }

            }
            if(flag==0)break;
            sort(arr,arr+n);
        }
        if(counter==0)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

           }
}
