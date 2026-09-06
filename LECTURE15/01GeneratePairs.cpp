#include<iostream>
#include<vector>

using namespace std;

void generatepairs(vector<int>arr,int n){
    for (int i = 0; i <= n-2; i++)
    {
        for (int j = i+1; j<=n-1; j++)
        {
            cout<<"{"<<arr[i]<<","<<arr[j]<<"}"<<",";
        }
    }
}

int main(){
    vector<int>arr(5);
    int n = 5;
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    generatepairs(arr,n);
}