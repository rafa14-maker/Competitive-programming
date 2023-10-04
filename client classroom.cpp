#include<bits/stdc++.h>
using namespace std;

int nCrModpDP(int n, int r, int p)
{
	int C[r+1];
	memset(C, 0, sizeof(C));


	C[0] = 1;
	for (int i = 1; i <= n; i++)
	{
		for (int j = min(i, r); j > 0; j--)
         C[j] = (C[j] + C[j-1])%p;
	}
	return C[r];
}

int nCrModpLucas(int n, int r, int p)
{
   if (r==0)
	  return 1;

       int ni = n%p, ri = r%p;

        return (nCrModpLucas(n/p, r/p, p) * nCrModpDP(ni, ri, p)) % p;
}

int main()
{
    int n;
    cin>>n;

    string arr,frr;

    while(n--)
    {
        cin>>frr;
        arr+=frr[0];
    }

    sort(arr.begin(),arr.end());

    string krr,jrr;

    for(int i=0;i<arr.size();i++)
    {
        if(i%2==1)
        {
           krr+=arr[i];
        }
        else
        {
            jrr+=arr[i];
        }
    }

   // for(int i=0;i<krr.size();i++)cout<<krr[i]<<" ";
   // cout<<endl;
   // for(int i=0;i<jrr.size();i++)cout<<jrr[i]<<" ";
  int sum=0;
  for(char i='a';i<='z';i++)
  {
      int counter=0;
      for(int j=0;j<krr.size();j++)
      {
          if(i==krr[j])counter++;
      }
      if(counter>1)
      {
          sum+=nCrModpLucas(counter,2,1000000);
      }
  }
  for(char i='a';i<='z';i++)
  {
      int counter=0;
      for(int j=0;j<jrr.size();j++)
      {
          if(i==jrr[j])counter++;
      }
      if(counter>1)
      {
          sum+=nCrModpLucas(counter,2,1000000);
      }
  }

  cout<<sum<<endl;

}


