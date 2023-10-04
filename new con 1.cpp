#include<bits/stdc++.h>
using namespace std;

int rBinarySearch(int sortedArray[],int first,int last,int key) {

   if (first <= last) {
       int mid = (first + last) / 2;
       if (key == sortedArray[mid])
           return mid;
       else if (key < sortedArray[mid])
          return rBinarySearch(sortedArray, first, mid-1, key);
       else
         return rBinarySearch(sortedArray, mid+1, last, key);
   }
   return -(first + 1);
}

int main()
{
    int i,n,a,b;

    cin>>n;

    int arr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cin>>a;

    b= rBinarySearch( arr,n-1,0,a);

    if(b>=0)
    {
        cout<<b<<endl;
    }
    else
    {
        cout<<"not found "<<endl;
    }

}
