#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>arr(n);

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int sereja=0;
    int dima=0;

    int left=0;
    int right=n-1;

    bool flag=true; //true is for sereja , and false is for dima

    while(left<=right){
        int value;
        if(arr[left]>arr[right]){
            value=arr[left];
            left++;
        }
        else{
            value=arr[right];
            right--;
        }
        if(flag){
            sereja+=value;
        }
        else{
            dima+=value;
        }
        flag=!flag;
    }
    cout<<sereja<<" "<<dima<<endl;
    return 0;
    
}