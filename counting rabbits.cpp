#include <bits/stdc++.h>
#include <cassert>
using namespace std;

int bigmod(long long a,long long b)
{
    if(b==0)
    {
        return 1;
    }
    long long  x=bigmod(a,b/2);
    x=(x*x);
    if(b%2==1)x=(x*a);

    return x;
}


struct matrix {
  long long v[5][5];
  long long row, col;
};
long long mod = 10000;

matrix multiply(matrix a, matrix b) {
  assert(a.col == b.row);
  matrix r;
  r.row = a.row;
  r.col = b.col;
  for (long long i = 0; i < r.row; i++) {
    for (long long j = 0; j < r.col; j++) {
      long long sum = 0;
      for (int k = 0; k < a.col;  k++) {
        sum += a.v[i][k] * b.v[k][j];
        sum %= mod;
      }
      r.v[i][j] = sum;
    }
  }
  return r;
}

matrix power(matrix mat, long long p) {
  assert(p >= 1);
  if (p == 1) return mat;
  if (p % 2 == 1)
    return multiply(mat, power(mat, p - 1));
  matrix ret = power(mat, p / 2);
  ret = multiply(ret, ret);
  return ret;
}

int main() {
  long long  a=0, b=1, m;
  long long n;
  int q;
  cin>>q;

  while (q--) {

    cin>>n;

    matrix mat;
    mat.row = mat.col = 2;
    mat.v[0][0] = mat.v[0][1] = mat.v[1][0] = 1;
    mat.v[1][1] = 0;


   // n = bigmod(2,n);
   mod =10000000;
    a %= mod, b %= mod;
    if (n < 3) {
      if (n == 0) cout << a << endl;
      if (n == 1) cout << b << endl;
      if (n == 2) cout << (a+b) % mod << endl;
    } else {
      mat = power(mat, n-2);
      matrix krr;
      krr.col=1;
      krr.row=2;
      krr.v[0][0]=1;
      krr.v[1][0]=0;
      matrix ans=multiply(mat,krr);
      long long p=ans.v[0][0]%mod;
      cout<<p<<endl;
    }
  }
  return 0;
}
