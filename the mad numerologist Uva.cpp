#include<bits/stdc++.h>
using namespace std;

char cho[]={'J','S','B','K','T','C','L','D','M','V','N','W','F','X','G','P','Y','H','Q','Z','R'};
char vow[]={'A','U','E','O','I'};

int frr[21];
int arr[5];
int test=0;

void solve()
{
    memset(arr,0,sizeof arr);
    memset(frr,0,sizeof frr);
    string s;
    string f;
    int n;
    cin>>n;
    int cnt=0;
    int ik=0,pk=0;
    for(int i=0;i<n;i++)
    {
        if(cnt%2==0)
        {
           while(arr[ik]>=21)ik++;
           s+=vow[ik];
           arr[ik]++;
         //  ik++;
        }
        else
        {
            while(frr[pk]>=5)pk++;
            f+=cho[pk];
            frr[pk]++;
          //  pk++;
        }
        cnt++;
    }
    sort(f.begin(),f.end());
    sort(s.begin(),s.end());
    printf("Case %d: ",++test);
    int idx1=0,idx2=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            cout<<s[idx1];
            idx1++;
        }
        else
        {
            cout<<f[idx2];
            idx2++;
        }
    }
    cout<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
