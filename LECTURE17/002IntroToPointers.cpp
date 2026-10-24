#include<iostream>
#include<vector>

using namespace std;

int main(){
    int x =10;
    int* xptr = &x;
    cout<<"xptr : "<<xptr<<endl;
    cout<<"&x : "<<&x<<endl;
    cout<<"*xptr : "<< *xptr <<endl;
    cout<<"x : "<<x<<endl;
    
    
}