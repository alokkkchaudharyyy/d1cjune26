#include<iostream>
#include<vector>

using namespace std;

void generatetriplets(vector<int>arr,int n){
    for (int i = 0; i <= n-3; i++)
    {
        for (int j = i+1; j<=n-2; j++)
        {
            for (int k = j+1; k<=n-1; k++)
            {
                cout<<"{"<<arr[i]<<","<<arr[j]<<","<<arr[k]<<"}"<<",";
            }
        }
    }
}

int main(){
    vector<int>arr(6);
    int n = 6;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    generatetriplets(arr,n);
}