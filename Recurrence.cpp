#include<bits/stdc++.h>
using namespace std;


struct matrix {
  long long v[16][16];
  int row, col;
};
int mod = 10000;

matrix multiply(matrix a, matrix b) {
  assert(a.col == b.row);
  matrix r;
  r.row = a.row;
  r.col = b.col;
  for (int i = 0; i < r.row; i++) {
    for (int j = 0; j < r.col; j++) {
      int sum = 0;
      for (int k = 0; k < a.col;  k++) {
        sum +=( a.v[i][k] * b.v[k][j])%mod;
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
  matrix ret = power(mat, p /2);
  ret = multiply(ret, ret);
  return ret;
}



int main()
{
    long long d,n,m;
    while(1==1)
    {
        cin>>d>>n>>m;
        mod=m;
        if(d==0&&n==0&&m==0)break;

        matrix mat;
        mat.col=d;
        mat.row=d;
        for(int i=0;i<d;i++)
        {
            long long p;
            cin>>p;
            mat.v[0][i]=(p%m);
        }
        for(int i=1;i<d;i++)
        {
            for(int j=0;j<d;j++)
            {
                mat.v[i][j]=0;
                }
        }
        for(int i=1;i<d;i++)
        {
            mat.v[i][i-1]=1;
        }
        matrix krr;

        krr.row=d;
        krr.col=1;
      long long arr[d+5];

      for(int i=0;i<d;i++)cin>>arr[i];

      int i=d-1;
        for(int j=0;j<d;j++)
        {
           krr.v[j][0]=(arr[i]%m);
           i--;
        }

          if(n<=d)
      {
          cout<<arr[n-d]<<endl;
      }
       else {
             mat = power(mat,n-d);

             matrix ans =  multiply(mat,krr);

            cout<<(ans.v[0][0])%m<<endl;
       }

       /* for(int i=0;i<d;i++)
        {
            for(int j=0;j<d;j++)
            {
                cout<<mat.v[i][j]<<" ";
            }
            cout<<endl;
        }*/

    }
}

