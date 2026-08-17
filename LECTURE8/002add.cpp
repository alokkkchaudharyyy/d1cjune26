#include<iostream>

using namespace std;

//function definition
int add(int A,int B){
    return A+B;
}

int main(){
    for (int i = 0; i < 5; i++)
    {
        int a;
        int b;
        cin>>a>>b;
        cout<<add(a,b)<<endl; //function calling
    }
}