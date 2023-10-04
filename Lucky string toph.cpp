#include<bits/stdc++.h>
using namespace std;

#define FasterIO     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

string s1,s2;
string sk;

bool check(string s)
{
    sort(s.begin(),s.end());

   if(s==sk) return true;
   return false;
}

int main()
{
     FasterIO
    cin>>s1>>s2;
    sk=s1;
    sk+=s2;
  //  cout<<sk<<endl;
    sort(sk.begin(),sk.end());
    int n;
    scanf("%d",&n);
    string arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    int cnt=1e9;

    for(int i=0;i<=pow(2,n);i++)
    {
        string s;
        int p=0;
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))
            {
                p++;
                s+=arr[j];
            }
        }
        if(s.size()==s1.size()+s2.size()&&check(s))
        {
          if(p!=0) cnt=min(cnt,p);
        }
    }
  if(cnt!=1e9)  printf("%d\n",cnt);
  else printf("-1\n");
}
