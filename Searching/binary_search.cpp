#include<iostream>
using namespace std;
class binarysearch{
    int* arr;
    int n;
    public:
    int pos;
    void input(){
    
        cout<<"Enter Size Of Array:";
        cin>>n;
        arr=new int[n];
        cout<<"Enter Array Element:";

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
    }
    int search(int target){
        int left=0;
        int right=n-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(arr[mid]==target){
                pos=mid;
                return 1;
                
            }
            else if(arr[mid]<target){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return -1;
    }
};
int main(){
    binarysearch B;
    B.input();
    int target;
    cout<<"Enter Taregt:";
    cin>>target;

    int result=B.search(target);
    if(result==1){
        cout<<"YES!! Taarget is found at "<<B.pos<<"index";
    }
    else{
        cout<<"Target is Not Found";
    }
    return 0;

}