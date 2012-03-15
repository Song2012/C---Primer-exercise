#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(void) {
	string str,msg;
	cin>>str;
	for(string::size_type i = 0 ; i != str.size() ; i++) {
		if(!ispunct(str[i])) {
			msg += str[i];
		}
	}
	cout<<msg<<endl;
}
