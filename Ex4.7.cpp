#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	int a1[] = {1,2,3,4,5,6};
	int a2[] = {2,2,2,2,2,2};
	vector<int> array1;
	vector<int> array2;
	for(vector<int>::size_type i = 0 ; i != 6 ; i++) {
		array1.push_back(0);
		array2.push_back(1);
	}
	cout<<"a1:";
	for(int i = 0 ; i != 6 ; i++) {
		a1[i] = a2[i];
		cout<<a1[i]<<" ";
	}
	cout<<endl;
	array1 = array2;
	cout<<"array1:";
	for(vector<int>::size_type i = 0 ; i != 6 ; i++) {
		cout<<array1[i]<<" ";
	}
	cout<<endl;
	return 0;
} 
