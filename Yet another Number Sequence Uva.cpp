#include<bits/stdc++.h>
using namespace std;

using ll = long long ;


int bigmod(ll a,ll b)
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

void solve()
{
    ll a,b,n,m;
    cin>>a>>b>>n>>m;
     matrix mat;
    mat.row = mat.col = 2;
    mat.v[0][0] = mat.v[0][1] = mat.v[1][0] = 1;
    mat.v[1][1] = 0;

    ll ans=a;

    if(n>0){
     mat = power(mat, n-1);
     ans =  mat.v[0][0]*b + mat.v[0][1]*a;
    }

    if(m==1)ans = ans % 10;
    if(m==2)ans = ans % 100;
    if(m==3)ans = ans % 1000;
    if(m==4)ans = ans % 10000;

    cout<<ans<<"\n";

}

int main()
{
    int q;
    scanf("%d",&q);
    while(q--)solve();
  //  solve();
}
