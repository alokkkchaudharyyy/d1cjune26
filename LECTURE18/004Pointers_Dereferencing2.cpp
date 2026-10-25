#include<iostream>

using namespace std;

int main() {

	int x = 349;
	int* kptr=&x;
	cout<<*kptr<<endl;

	char* ptr = (char*)&x;
	cout << (int)*ptr << endl;

	return 0;
}