#include <iostream>
using namespace std;

int main() {
    int arr[6]={3,2,1,5,8,2};
    int n=6;

    int maxsofar=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>maxsofar){
            maxsofar=arr[i];
        }
    }
    cout<<"largest no.: "<<maxsofar;
    return 0;
}