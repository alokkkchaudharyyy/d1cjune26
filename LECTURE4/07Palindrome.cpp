#include<iostream>

using namespace std;

int main(){
    int num;
    cin>> num;

    int original = num;
    int rev = 0;

    while(num!=0){
        int digit = num % 10;
        rev = rev * 10 +digit;
        num/=10;
    }

    if(rev==original){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}