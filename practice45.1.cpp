#include<bits/stdc++.h>
using namespace std;

int main()
{
	int *arr=(int *) malloc(sizeof(int)*10);
	
	int i;

	for(i=0;i<3;i++)
	{
		scanf("%d",(arr+i));
	}
	
	printf("%d",*(arr+2));
	
	return 0;
	
}
