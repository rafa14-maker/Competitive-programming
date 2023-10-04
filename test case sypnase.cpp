#include<bits/stdc++.h>
using namespace std;

void countSort(vector <int>& arr)
{
    int max = *max_element(arr.begin(), arr.end());
    int min = *min_element(arr.begin(), arr.end());
    int range = max - min + 1;

    vector<int> count(range), output(arr.size());
    for(int i = 0; i < arr.size(); i++)
        count[arr[i]-min]++;

    for(int i = 1; i < count.size(); i++)
           count[i] += count[i-1];

    for(int i = arr.size()-1; i >= 0; i--)
    {
         output[ count[arr[i]-min] -1 ] = arr[i];
              count[arr[i]-min]--;
    }

    for(int i=0; i < arr.size(); i++)
            arr[i] = output[i];
}


int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
       int n,m;
       scanf("%d %d",&n,&m);
       long long x,a,b,c;
        scanf("%lld %lld %lld %lld",&x,&a,&b,&c);

        vector<int>arr;
        arr[0]=x;
        for(int i=1;i<n;i++)
        {
            arr[i]=((((arr[i-1])*a)%c)+b)%c;
        }
        countSort(arr);
            printf("%lld\n",arr[m-1]);
   }
}
