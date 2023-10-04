#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
int frr[N];

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n+5];
    for(int i=1;i<=n;i++)arr[i]=0;
    for(int i=0;i<k;i++)
    {
        int a;
        cin>>a;
        arr[a]++;
    }

    for(int i=1;i<=n;i++)
    {
        vector<string>vs;
        int idx1=0,idx2=0;
        for(int j=1;j<=n;j++)
        {
            if(i!=j)
            {
                if(arr[i]<arr[j])
                {
                    int pk=arr[j]-arr[i];
                    char k= (char)'0'+j;
                    string s="-";
                    s+=k;
                    vs.push_back(s);
                    idx1++;
                }
                else if(arr[i]>arr[j])
                {
                     int pk=arr[i]-arr[j];
                    char k= (char)'0'+j;
                    string s="+";
                    s+=k;
                    vs.push_back(s);
                    idx2++;
                }
            }
        }
        if(idx1<=1&&idx2<=1)
        {
            for(int i=0;i<vs.size();i++)cout<<vs[i]<<" ";
            printf("\n");
            return 0;
        }
    }


}
