#include<bits/stdc++.h>
using namespace std;
const int N =9*1e7+5;

int arr[N];
char in[100];

bool check(int n)
{
    int cur=n%10;
    if(cur==0)return false;
    int d[10]={0};
    while(n>0)
    {
        if(d[cur]||cur==0)return false;
        d[cur]=1;
        n/=10;
        cur=n%10;
    }
    return true;
}

bool f(int n) {
	if(!check(n)) return false;
	sprintf(in, "%d", n);
	int ind = 0, d[10] = {0};
	char cur = in[0] - 48;
	for(int i = 0; i < strlen(in); i++) {
		if((ind = ind + cur % strlen(in)) >= strlen(in))
			ind = ind - strlen(in);
		if(d[cur] == 1) return false;
		d[cur] = 1;
		cur = in[ind] - 48;
	}
	if(cur == in[0] - 48)
		return true;
	return false;
}


void solve(int n,int test)
{
   printf("Case %d: ",test);
     printf("%d\n",arr[n]);
}

int main()
{
    for(int i=9876543;i>9;i--)
    {
        if(f(i))arr[i]=i;
        else arr[i]=arr[i+1];
    }


    int test=0;
   while(1)
   {
       test++;
       int n;
       scanf("%d",&n);
       if(n==0)break;
       solve(n,test);
   }
}
