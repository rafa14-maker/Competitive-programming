#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n;
    string arr;

    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>arr;
        int counter=0,j,k;
        for(j=0,k=arr.size()-1;j<k;j++,k--)
        {
            if(arr[j]!=arr[k])
            {
                counter++;
            }
        }
        if(counter==0)
        {
            printf("Case %d: Yes\n",i);
        }
        else
        {
              printf("Case %d: No\n",i);
        }
    }
}
