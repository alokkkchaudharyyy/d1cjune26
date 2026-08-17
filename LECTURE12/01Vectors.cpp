#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int>v;

    cout<<"size: "<<v.size()<<endl; 

    v.push_back(10);

    cout<<"size: "<<v.size()<<endl; 

    for(int x:v){
        cout<<x<<endl;
    }

    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    cout<<"size: "<<v.size()<<endl; 

    for(int x:v){
        cout<<x<<" ";
    }
    cout<<endl;

    v.pop_back();

    cout<<"size: "<<v.size()<<endl; //4

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

    for(auto it=v.begin(),end = v.end();it!=end;it++){
        cout<<*it<<endl;
    }

    v.push_back(50);

    reverse(v.begin()+1,v.begin()+4);
    for(int x:v){
        cout<<x<<" ";
    }
    cout<<endl;

    vector<int>arr={4,2,1,0,5,9,7};
    reverse(arr.begin()+2,arr.end()-3);
    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;

    sort(arr.begin(),arr.end());
    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    sort(arr.begin(),arr.end(),greater<int>());
    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    sort(arr.rbegin(),arr.rend());
    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    
}