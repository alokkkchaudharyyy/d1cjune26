#include<iostream>
#include<vector>

using namespace std;

int targetpaircount(vector<int>arr,int n,int X){
    int count=0;
    for (int i = 0; i <= n-2; i++)
    {
        for (int j = i+1; j<=n-1; j++)
        {
            if(arr[i]+arr[j]==X){ //target found
                count++;
            }
        }
    }
    return count;
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
    cout<<"total no. of pairs: "<<targetpaircount(arr,n,X);
}