#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
int n;

int arr[N];
vector<int>even;
vector<int>odd;


/*
long long f()
{
    int frr[n+5];
    for(int i=0;i<n;i++)
    {
        if(i%2==0)frr[i]=0;
        else frr[i]=1;
    }
    long long sum=0;
    int idx=0,pdx=0,kdx=0;
    for(int i=0;i<n;i++)
    {
        if(frr[i]==0)
        {
            int k = even[idx];
            idx++;
            if(kdx==0){
            sum+= abs(i-k);
            kdx+=abs(i-k);
            }
            else
            {
                if(kdx>=abs(i-k))kdx-=abs(i-k);
                else
                {
                 int q = abs(i-k);
                    q-=kdx;
                    kdx=q;
                    sum+=q;
                }
            }
        }
        else
        {
           int k = odd[pdx];
            pdx++;
             if(kdx==0){
            sum+= abs(i-k);
            kdx+=abs(i-k);
            }
            else
            {
                if(kdx>=abs(i-k))kdx-=abs(i-k);
                else
                {
                  int  q = abs(i-k);
                    q-=kdx;
                    kdx=q;
                    sum+=q;
                }
            }
        }
    }
    cout<<sum<<endl;
    return sum;
}

long long f1()
{
    int frr[n+5];
    for(int i=0;i<n;i++)
    {
        if(i%2==0)frr[i]=0;
        else frr[i]=1;
    }
    long long sum=0;
    int idx=0,pdx=0,kdx=0;
    for(int i=0;i<n;i++)
    {
        if(frr[i]==1)
        {
            int k = even[idx];
            idx++;
            if(kdx==0){
            sum+= abs(i-k);
            kdx+=abs(i-k);
            }
            else
            {
                if(kdx>abs(i-k))kdx-=abs(i-k);
                else
                {
                 int q = abs(i-k);
                    q-=kdx;
                    kdx=q;
                    sum+=q;
                }
            }
        }
        else
        {
           int k = odd[pdx];
            pdx++;
             if(kdx==0){
            sum+= abs(i-k);
            kdx+=abs(i-k);
            }
            else
            {
                if(kdx>abs(i-k))kdx-=abs(i-k);
                else
                {
                  int  q = abs(i-k);
                    q-=kdx;
                    kdx=q;
                    sum+=q;
                }
            }
        }
    }
    cout<<sum<<endl;
    return sum;
}
*/

void solve()
{

    // I was not able to solve it .

    odd.clear();
    even.clear();
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)arr[i]=0;
        if(arr[i]%2==1)arr[i]=1;
    }
     if(n==1)
     {
         cout<<0<<endl;
         return ;
     }
   for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            even.push_back(i);
        }
        else odd.push_back(i);
    }
    int pk = odd.size();
    int kp = even.size();
        if(odd.size()==0||even.size()==0||abs(kp-pk)>=2)
    {
        cout<<-1<<endl;
        return ;
    }
  /* long long kp = min(f1(),f());
   cout<<kp<<endl;*/


   long long sum=0;

   for(int i=1;i<n;i++)
   {
       if(arr[i]%2==arr[i-1]%2)
       {
           int k ;
           if(arr[i]%2==0)k=1;
           else k=0;
           for(int j=i+1;j<n;j++)
           {
               if(arr[j]%2==k)
               {
                   swap(arr[j],arr[i]);
                   sum+=abs(i-j);
                   break;
               }
           }
       }
   }

   cout<<sum<<endl;

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}

/*
1
6
1 1 1 2 2 2
*/
