#include<iostream>
using namespace std;

int maxSubArraySum(int psum[], int n){
    int maxsofar=INT_MIN;
    //iterate over all possible starting indices
    for (int i = 0; i <= n-1; i++)
    {
        //iterate over all possible ending indices
        for (int j = i; j <=n-1; j++)
        {
            //sum of subarray starting from index i to ending index j
            int sum=0;
            sum=psum[j+1]-psum[i];
            maxsofar=max(maxsofar,sum);
        }
    }
    return maxsofar;
}

int main(){
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof(arr)/sizeof(int);
    int psum[101];
    psum[0]=0;
    for (int i = 1; i <=n; i++)
    {
        psum[i]=psum[i-1]+arr[i-1];
    }
    cout<<maxSubArraySum(psum,n);
    return 0;
}