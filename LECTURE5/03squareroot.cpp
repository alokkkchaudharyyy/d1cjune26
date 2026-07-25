#include<iostream>

using namespace std;

int main(){
    int n,p;
    cin>>n;
    cin>>p;
    double ans=0;
    //integer part
    for(int i=1;i*i<=n;i++){
        ans=i;
    }
    //decimal part
    double inc=0.1;
    int i=1;
    while(i<=p){
        while((ans+inc)*(ans+inc)<=n){
            ans+=inc;
        }
        inc/=10;
        i++;
    }
    cout<<ans;
    return 0;
}


