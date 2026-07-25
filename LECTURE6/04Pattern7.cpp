#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;

  for(int i=1;i<=n;i++){
    //stars1
    for(int j=1;j<=i;j++){
      cout<<"*";
    }
    //spaces
    for(int j=1;j<=2*(n-i);j++){
      cout<<" ";
    }
    //stars2
    for(int j=1;j<=i;j++){
      cout<<"*";
    }

    cout<<endl;
  }
  //lower half
  for(int i=n-1;i>=1;i--){
    //stars1
    for(int j=1;j<=i;j++){
      cout<<"*";
    }
    //spaces
    for(int j=1;j<=2*(n-i);j++){
      cout<<" ";
    }
    //stars2
    for(int j=1;j<=i;j++){
      cout<<"*";
    }
    cout<<endl;
  }
  return 0;
}