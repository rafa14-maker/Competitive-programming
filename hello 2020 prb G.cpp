#include<bits/stdc++.h>
using namespace std;

int q,k;
vector<int>arr;

int dp[25][4010];

int f(int pos,int sum)
{
  if(sum<0)return 0;
  if(pos>=arr.size())
  {
    //  cout<<sum<<" "<<k<<endl;
      if(k-sum==sum)return 1;
      return 0;
  }
   if(k-sum==sum)return 1;

    if(dp[pos][sum]!=-1)return dp[pos][sum];

    int ans=0;
    ans=max(f(pos+1,sum-arr[pos]),f(pos+1,sum));
    return dp[pos][sum]=ans;
}

int main()
{
    int q;
    cin>>q;

    while(q--)
    {
        int n;
        cin>>n;
        string str;
       getline(cin,str);
      // cout<<str<<endl;
        string tmp;
          stringstream str_strm(str);
          vector<string> words;
        arr.clear();
        arr.push_back(n);
   while (str_strm >> tmp){
      words.push_back(tmp);
   }
   k=0;
   k+=n;
    for(int i=0;i<words.size();i++)
    {
       string s=words[i];
       int sum=0,r=1;
       reverse(s.begin(),s.end());
       for(int j=0;j<s.size();j++)
       {
           sum+=r*((int)s[j]-'0');
           r*=10;
       }
       arr.push_back(sum);
       k+=sum;
    }
   memset(dp,-1,sizeof dp);
    // for(int i=0;i<arr.size();i++)cout<<arr[i]<<" ";

    if(f(0,k))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
   // arr.push_back(n);
  //  for(int i=0;i<arr.size();i++)cout<<arr[i]<<" ";
  //  cout<<"END"<<endl;
    }
}
