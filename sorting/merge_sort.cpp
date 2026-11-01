#include<iostream>
#include<vector>

using namespace std;
void merge(vector<int>& arr,int left,int mid,int right){
    vector<int>temp;
    int i=left;
    int j=mid+1;
    while(i<=mid&&j<=right){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i++]);
        }
        else{
            temp.push_back(arr[j++]);
        }
    }
    while(i<=mid){
        temp.push_back(arr[i++]);
    }
    while(j<=right){
        temp.push_back(arr[j++]);
    }
    for(int k=0;k<temp.size();k++){
        arr[left+k]=temp[k];
    }
    
}
void mergesort(vector<int>& arr,int left,int right){
    if(left>=right){
        return;
    }
    int mid=left+(right-left)/2;
    mergesort(arr,left,mid);
    mergesort(arr,mid+1,right);
    merge(arr,left,mid,right);

}

int main(){
    int n;
    cout<<"Enter size of array:";
    cin>>n;

    vector<int>arr(n);
    cout<<"Enter array Element :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergesort(arr,0,n-1);
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}