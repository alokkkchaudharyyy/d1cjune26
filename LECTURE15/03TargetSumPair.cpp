#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void targetpairtwopointers(vector<int>arr,int n,int X){
    int left = 0;
    int right = n-1;
    while(left<right){
        int sum=arr[left]+arr[right];

        if(sum==X){
            //pair found
            cout<<"{"<<arr[left]<<","<<arr[right]<<"}"<<",";
            left++;
            right--;
        }
        else if(sum<X){
            //we will look another greater element
            left++;
        }
        else{
             //we will look another smaller element
            right--;
        }
    }
}

int main(){
    vector<int>arr(5);
    int n = 5;
    cout<<"enter array values: ";
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    cout<<"enter target :";
    int X;
    cin>>X;
    targetpairtwopointers(arr,n,X);
}