
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
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n = 100, r =6, p = 1e10;
	cout << "Value of nCr % p is " << nCrModpLucas(n, r, p);
	return 0;
}
