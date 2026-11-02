#include<iostream>
using namespace std;

class linearsearch{
    int *arr;
    int n;
    
    public:
    int pos=0;
    void input(){

        cout<<"Enter Size Of array:";
        cin>>n;
        arr=new int[n];
        cout<<"Enter Array Eleent:";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
    }
    int search(int target){
        for(int i=0;i<n;i++){
            if(arr[i]==target){
                pos=i;
                return 1;
            }
        }
        return -1;
    
    }
};
int main(){
    linearsearch obj;
    obj.input();

    int target;
    cout<<"Enter target:";
    cin>>target;
    int result=obj.search(target);
    if(result == 1){
        cout<<"YES!! Target is fount at "<<obj.pos<<" index";
    }
    else{
        cout<<"Sorry Target Not found in Array";
    }
    return 0;
    
}