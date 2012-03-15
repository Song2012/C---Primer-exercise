#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

int main(void) {
	vector<int> array;
	int n = 0;
	while(cin>>n) {
		if(n ==0)
			break;
		array.push_back(n);
	}
	for(vector<int>::size_type i = 0 ; i != (array.size()/2) ; i++) {
		cout<<array[i]<<"+"<<array[array.size()-i-1]<<"=";
		cout<<array[i] + array[array.size() - i - 1]<<endl;
	}
	/*for(vector<int>::size_type i = 1 ;
			i < array.size() ; i += 2) {
		cout<<array[i-1]<<"+"<<array[i]<<"="<<array[i] + array[i-1]<<endl;
	}
	vector<int>::size_type tmp = array.size();
	if(tmp%2 != 0) {
		cout<<"the last one:"<<array[tmp-1]<<endl;
	}*/
}
