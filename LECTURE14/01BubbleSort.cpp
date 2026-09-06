#include<iostream>

using namespace std;

void bubblesort(int arr[],int n){
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j<n-i; j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        
    }
}

int main(){
    int arr[]={50,40,30,20,10};
    int n = sizeof(arr)/sizeof(int);
    bubblesort(arr,n);
    for(int x:arr){
        cout<<x<<" ";
    }
}