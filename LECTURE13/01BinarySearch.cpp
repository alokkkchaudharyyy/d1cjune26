#include<iostream>

using namespace std;

int binarysearch(int arr[],int n,int t){

    int s=0; //lower bound
    int e=n-1; //upper bound

    while(s<=e){
        int m=s+(e-s)/2;

        if(arr[m]==t){
            return m; // we have found the target at index m
        }
        else if(t>arr[m]){
            s=m+1;
        }
        else{
            e=m-1;
        }
    }
    return -1;
}

int main(){
    int arr[]={10,20,30,40,50,60,70};
    int n = sizeof(arr)/sizeof(int);

    int t=60;

    cout<<binarysearch(arr,n,t)<<endl;
}