//Sort an array using quick sort.

/*
   TC = O(nlogn) in best, avg and O(n*n) in worst case
   SC =O(1);
*/

#include <bits/stdc++.h>

using namespace std;

int partition(vector<int>& arr,int l,int h){
    int pivot=arr[h];
    int i=l;
    for(int j=l;j<h;j++){
        if(arr[j]<pivot){
            swap(arr[i],arr[j]);
            i++;
        }
    }
    swap(arr[i],arr[h]);
    return i;
}

void quicksort(vector<int>& arr,int l,int h){
    if(l>=h)return;
    int pi=partition(arr,l,h);
    quicksort(arr,l,pi-1);
    quicksort(arr,pi+1,h);
}


int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
