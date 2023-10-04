#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    string s;
    cin>>s;
    int arr[n+5];
    int counter=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')counter++;
        else if(s[i]=='1')counter=0;

        arr[i]=counter;
    }
    for(int i=n-1;i>0;i--)
    {
        if(arr[i]!=0&&arr[i-1]!=0)arr[i-1]=arr[i],arr[i]=0;
    }
    vector<pair<int,int> >v;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            v.push_back(make_pair(arr[i],i));
        }
    }
 //   sort(v.begin(),v.end());
   // reverse(v.begin(),v.end());

   int ok=v.size();
   int frr[ok+5];
   for(int i=0;i<ok;i++)frr[i]=v[i].first;

   for(int i=1;i<ok;i++)frr[i]=frr[i]+frr[i-1];

  // for(int i=0;i<ok;i++)cout<<frr[i]<<" ";cout<<endl;

   int uo=0,idx1=0;

   for(int i=0;i<ok;i++)
   {
       if(i-k<0)
       {
           if(uo<frr[i])
           {
               uo=frr[i];
               idx1=i;
           }
       }else
       {
           int sum=frr[i]-frr[i-k];
        //   cout<<sum<<endl;
           if(sum>uo)
           {
               uo=sum;
               idx1=i;
           }
       }
   }


  //cout<<uo<<" "<<idx1<<endl;
 for(int i=idx1;i>=max(0,idx1-k+1);i--)
 {
     if(v.size()==0)break;
      int p=v[i].first;
        int idx=v[i].second;
       // cout<<idx<<endl;
     //  if(p<0||idx<0)break;
        for(int j=0;j<p;j++)
        {
            s[idx]='1';
            idx++;
            if(idx>=s.size())break;
        }
 }
   //cout<<s<<endl;
  int po=0,ko=0;
  for(int i=0;i<n;i++)
  {
      if(s[i]=='1')ko++;
      else ko=0;

      po=max(po,ko);
  }
  cout<<po<<endl;
}
