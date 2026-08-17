#include<iostream>
using namespace std;

void generateSubArrays(int arr[] , int n){
    //iterate over all possible starting indices
    for (int i = 0; i <= n-1; i++)
    {
        cout<<"start = " << i << endl;
        //iterate over all possible ending indices
        for (int j = i; j <=n-1; j++)
        {
            cout<<"end = " << j <<" : ";
            //print all elements from starting to ending indices (from i to j)
            for (int k = i; k <=j; k++)
            {
                cout<< arr[k] << " ";
            }
            cout<<endl;
        }

    }
    cout<<endl<<endl;
}

int main(){
    int arr[]={10,20,30,40,50};
    int n = sizeof(arr)/sizeof(int);
    generateSubArrays(arr,n);
    return 0;
}