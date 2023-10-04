#include<bits/stdc++.h>
using namespace std;
#define maxn 500005


int n;
int a[maxn],b[100];
int c[]={4,8,15,16,23,42};

int main()
{

    cin>>n;
    int arr[n+5];
   for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		b[a[i]]++;
		for(int j=0;j<6;j++){
			if(a[i]==c[j])break;
			else if(b[a[i]]>b[c[j]])b[a[i]]--;
		}
	}

    int m=1e9;
    for(int i=0;i<6;i++)
    {
        m=min(b[c[i]],m);
    }

        cout<<n-m*6<<endl;
}
