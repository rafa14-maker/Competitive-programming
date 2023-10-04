#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
const int N = 30005;

int arr[N];
int l[N];
int r[N];
int n;
int test;

stack<int>st;

void fl()
{
     for(int i=1;i<=n;i++)
  {
      while(!st.empty())
      {
          int f = st.top();
          if(arr[f]>arr[i])
          {
              st.pop();
          }
          else break;
      }
      if(st.empty())
      {
          l[i] = 1;
      }
      else
      {
          int f = st.top();
          if(arr[f] == arr[i])
          {
              l[i] = l[f];
          }
          else
          {
              l[i] = f+1;
          }
      }
      st.push(i);
  }
}

void fr()
{
    while(!st.empty())
    {
        st.pop();
    }
    int op = n;
    for(int i=n;i>=1;i--)
    {
        while(!st.empty())
        {
            int f = st.top();
            if(arr[f]>arr[i])
            {
                st.pop();
            }
            else break;
        }
        if(st.empty())
        {
            r[i] = op;
        }
        else
        {
            int f = st.top();
            if(arr[f] == arr[i])
            {
                r[i] = r[f];
            }
            else
            {
                r[i] = f-1;
            }
        }
     //   if(r[i] == 0)r[i] = op;
        st.push(i);
    }
}

void solve()
{
  //  cout<<"yes"<<endl;

  //int n;
  cin>>n;

  for(int i=1;i<=n;i++)cin>>arr[i];

   fl();
   fr();

   int mx = 0;

  // for(int i=1;i<=n;i++)cout << l[i] <<" ";cout << endl;
  //  for(int i=1;i<=n;i++)cout << r[i] <<" ";cout << endl;

   for(int i=1;i<=n;i++)
   {
       int left = l[i];
       int right = r[i];
       int sum = (right - left +1);
       sum *= arr[i];

       mx = max(mx, sum);
   }

   cout <<"Case "<<++test<<": "<<mx<<"\n";

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
  // solve();
}

/*

1
5
4 4 3 2 4

*/

