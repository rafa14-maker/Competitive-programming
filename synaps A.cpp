#include<bits/stdc++.h>
using namespace std;
using ll = long long;

float roundoff(float value, unsigned char prec)
{
  float pow_10 = pow(10.0f, (float)prec);
  return round(value * pow_10) / pow_10;
}

void solve()
{
   // cout<<"yes"<<endl;

  long double  arr[4];
   cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];

   //sort(arr,arr+4);

  long double sum = 0 ;

   for(int i=0;i<2;i++)
   {
       for(int j=i+1;j<3;j++)
       {
           for(int k=j+1;k<4;k++)
           {

                 long double s = (arr[i]+arr[j]+arr[k])/2.0;
                sum = max(sum,sqrt(s*((s-arr[i])*(s-arr[j])*(s-arr[k]))));
           }
       }
   }

//   printf("%f\n",roundoff(sum,2));
 cout<<fixed<<setprecision(2)<<sum<<endl;

}

int main()
{
   int q;cin>>q;while(q--)solve();
  // solve();
}

