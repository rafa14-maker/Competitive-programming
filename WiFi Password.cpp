#include<bits/stdc++.h>
using namespace std;


struct matrix {
  long long v[5][5];
  int row, col;
};
long long mod = 10000;

matrix multiply(matrix a, matrix b) {
  assert(a.col == b.row);
  matrix r;
  r.row = a.row;
  r.col = b.col;
  for (int i = 0; i < r.row; i++) {
    for (int j = 0; j < r.col; j++) {
      int sum = 0;
      for (int k = 0; k < a.col;  k++) {
        sum += (a.v[i][k] * b.v[k][j])%mod;
        sum %= mod;
      }
      r.v[i][j] = sum;
    }
  }
  return r;
}

matrix power(matrix mat, int p) {
  assert(p >= 1);
  if (p == 1) return mat;
  if (p % 2 == 1)
    return multiply(mat, power(mat, p - 1));
  matrix ret = power(mat, p / 2);
  ret = multiply(ret, ret);
  return ret;
}



int main()
{
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
    int q;
    cin>>q;
    mod=1e9+7;
    for(int t=1;t<=q;t++)
    {
        string s,k;
        cin>>s>>k;
        int n;
        cin>>n;
        long long a=0,b=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')b++;
        }
        for(int i=0;i<k.size();i++)
        {
            if(k[i]=='0')a++;
        }

          matrix mat;
    mat.row = mat.col = 2;
    mat.v[0][0] = mat.v[0][1] = mat.v[1][0] = 1;
    mat.v[1][1] = 0;

    //  cout<<a<<" "<<b<<endl;
     if (n < 3) {
      if (n == 0) printf("Case %d: %ld\n",t,b);
      if (n == 1) printf("Case %d: %ld\n",t,a);
      if (n == 2) printf("Case %d: %ld\n",t,(a+b)%mod);
    } else {
      mat = power(mat, n-1);
      matrix krr;
      krr.col=1;
      krr.row=2;
      krr.v[0][0]=a;
      krr.v[1][0]=b;
      matrix ans=multiply(mat,krr);
      long long p=ans.v[0][0]%mod;
      printf("Case %d: %ld\n",t,p);
    }
    }
}
