#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    int cnt = 0;

    while(n>0){
        cnt=cnt+1;
        n/=10;
    }

    cout << "no. of digits : " << cnt ;

    return 0;
}