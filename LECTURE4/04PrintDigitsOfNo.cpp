#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    while(n>0){
        cout<< n%10<<endl;  //digit extract
        n/=10;              //reducing number
    }

    return 0;
}