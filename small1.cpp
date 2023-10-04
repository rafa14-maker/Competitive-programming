 #include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int arr[10000];
    for(int i=0;i<n;i++){
        cin>>arr[i];}
    sort(arr, arr+n);
    int m=0;
    for(int j=0;j<(n-1);j++)
    {
        int counter=0;
        for(int k=j+1;k<n;k++)
        {
            if(abs(arr[j]-arr[k])<=1)
                counter++;
        }
        if(counter>m)
            m=counter;
    }
    cout<<m+1<<endl;

}
}
