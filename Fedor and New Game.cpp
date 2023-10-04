#include<bits/stdc++.h>
using namespace std;

int main()
{
  long long n,m,k;
  cin>>n>>m>>k;
    long long arr[n+5];
    for(int i=0;i<m;i++)cin>>arr[i];
    int c;
    cin>>c;
    int frr[n+5];
   // for(int i=0;i<n;i++)frr[i]=(c&(1<<i));
    long long flag=0;
    for(int p=0;p<m;p++)
    {
        long long counter=0;
          for (int i = 0; i < 21; i++) {
        if (((arr[p] >> i) & 1) != ((c >> i) & 1)) {
            counter++;
        }
    }
    // cout<<counter<<" "<<99<<endl;
      if(counter<=k)flag++;
    }
    cout<<flag<<endl;
}
