#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"size of array : ";
    cin>>n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int target;
    cout<<"enter target : ";
    cin>>target;
    int i;
    for (i = n-1; i >=0; i--)
    {
        if(arr[i]==target){
            cout<<"last occurence :"<<i;
            break;
        }
    }

    if(i==-1)  cout<<-1;
    return 0;
}