#include <bits/stdc++.h>

using namespace std;

using ll = long long ;



struct matrix {
  long long v[5][5];
  long long row, col;
};
long long mod = 1e9+7;

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
 //   cout<<1<<endl;
  assert(p >= 1);
  if (p == 1) return mat;
  if (p % 2 == 1)
    return multiply(mat, power(mat, p - 1));
  matrix ret = power(mat, p / 2);
  ret = multiply(ret, ret);
  return ret;
}

int main() {
       ll a,b,n,x;
       cin>>a>>b>>n>>x;
       ll k =(a*x)%mod;
       k = (k+b)%mod;

       matrix mat;
       mat.row=2;
       mat.col=2;

       if(n==1)
       {
           cout<<k<<endl;
           return 0;
       }
       if(n==2)
       {
           cout<<(((a*k)%mod)+b)%mod<<endl;//cout<<1<<endl;
           return 0;
       }

       mat.v[0][0]=a; mat.v[0][1]=1; mat.v[1][0]=0; mat.v[1][1]=1;


        mat=power(mat,n-1);
        //  cout<<mat.v[0][0]<<" "<<mat.v[0][2]<<" "<<endl;

         matrix krr;
         krr.row=2;
         krr.col=1;

         krr.v[0][0]=k;
         krr.v[1][0]=b;


         matrix ans=multiply(mat,krr);
         cout<<ans.v[0][0]<<endl;
}

