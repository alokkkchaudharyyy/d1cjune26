#include<iostream>
using namespace std;

int maxSubArraySum(int arr[] , int n){
    int maxsofar=INT_MIN;
    //iterate over all possible starting indices
    for (int i = 0; i <= n-1; i++)
    {
        //iterate over all possible ending indices
        for (int j = i; j <=n-1; j++)
        {
            //sum of subarray starting from index i to ending index j
            int sum=0;
            cout<<" {";
            for (int k = i; k <=j; k++)
            {
                cout<<arr[k]<<",";
                sum+=arr[k];
            }
            cout<<"} ";
            cout<<"sum = "<<sum <<" ";
            maxsofar=max(maxsofar,sum);
            cout<<"maxsofar = "<<maxsofar;
            cout<<endl;
        }
        cout<<endl;
    }
    return maxsofar;
}

int main(){
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof(arr)/sizeof(int);
    cout<<maxSubArraySum(arr,n);
    return 0;
}