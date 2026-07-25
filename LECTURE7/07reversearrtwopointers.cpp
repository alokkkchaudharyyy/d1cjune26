#include <iostream>

using namespace std;

int main() {
    int arr[6]={3,2,1,5,8,2};
    int n=6;
    int i=0;
    int j=n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for (int x : arr)
    {
        cout<<x<<endl;
    }
    
    
    return 0;
}