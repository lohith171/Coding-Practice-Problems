//Sort an array using mergeSort algorithm

/*
    TC = teta(nlogn) for best,avg and worst cases, n is the size of the array;
    SC = O(n);
*/

#include <bits/stdc++.h>

using namespace std;

void merge(vector<int>& arr,int l,int m,int r){
    vector<int>v(r-l+1);
    int i=l,j=m+1,k=0;
    while(i<=m && j<=r){
        if(arr[i]<arr[j]){
            v[k++]=arr[i++];
        }else{
            v[k++]=arr[j++];
        }
    }
    while(i<=m)v[k++]=arr[i++];
    while(j<=r)v[k++]=arr[j++];
    k=0;
    for(int ind=l;ind<=r;ind++){
        arr[ind]=v[k++];
    }
}

void mergesort(vector<int>& arr,int l,int r){
    if(l>=r)return;
    int m=(l+r)/2;
    mergesort(arr,l,m);
    mergesort(arr,m+1,r);
    merge(arr,l,m,r);
}

int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
