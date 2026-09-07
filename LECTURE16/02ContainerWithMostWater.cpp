#include<iostream>
#include<vector>

using namespace std;

int main(){
    int maxsofar=0;
    vector<int>height={1,8,6,2,5,4,8,3,7};
    int n=height.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            int width = j-i;
            int h=min(height[i],height[j]);
            int area = width*h;
            maxsofar = max(maxsofar,area);
        }
    }
    
    cout<<maxsofar;
}