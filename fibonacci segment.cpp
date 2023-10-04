#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

const int N = 1e6+7, INF = 1e9+7, K = 9,M=1e5+2;
int i,j,k,l,a,b;

int main()
{
         ios_base::sync_with_stdio(false);
    cin.tie(NULL);


  cin>>a;
  int arr[a];
  int counter=0,n=0;

  for(int i=0;i<a;i++)
  {
      cin>>arr[i];
  }
   for(int i=2;i<a;i++)
  {
      if(arr[i]==arr[i-1]+arr[i-2])
      {
          counter++;
          n=max(n,counter);
      }
      else
      {
          counter=0;
      }
  }
  if(a>2)
  {
     cout<<n+2<<endl;
  }
  else
  {
      cout<<a<<endl;
  }

}
