#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int main(void) {
	string str;
	vector<string> array;
	int count = 0;
	
	while(cin>>str) {
		array.push_back(str);
	}

	for(vector<string>::iterator iter = array.begin();
			iter != array.end();iter++) {
		string tmp = *iter;
		for(string::size_type i = 0 ; i !=(*iter).size();i++) {
			(*iter)[i]  = toupper((*iter)[i]);
		}
		cout<<*iter<<" ";
		count++;
		if(count == 8) {
			cout<<endl;
		}

	}

	cout<<endl;

}
