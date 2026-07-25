#include <iostream>

using namespace std;

int main() {
    int arr[6]={3,2,1,5,8,2};
    int n=6;
    for (int i = 0; i < n/2; i++)
    {
        int j=n-i-1;
        arr[i]=arr[i]+arr[j];
        arr[j]=arr[i]-arr[j];
        arr[i]=arr[i]-arr[j];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}