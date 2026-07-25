#include <iostream>
using namespace std;

int main() {
    int nums[3]={1,2,3};
    int n=3;

    int ans[6];

    for (int i = 0; i < n; i++)
    {
        ans[i]=nums[i];
        ans[i+n]=nums[i];
    }
    for (int i = 0; i < 2*n; i++)
    {
        cout<<ans[i]<<endl;
    }
    return 0;
}