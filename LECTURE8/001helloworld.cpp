#include<iostream>

using namespace std;

void greet(){
    cout<<"hello world";
}

int main(){
    for (int i = 0; i < 5; i++)
    {
        greet();
        cout<<endl;
    }
}