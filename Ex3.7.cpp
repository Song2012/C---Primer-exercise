#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main(void ) {
	string str1;
	string str2;
	cin>>str1>>str2;
	if(str1.size() == str2.size()) {
		cout<<"=="<<endl;
	}
	else {
		if(str1.size() > str2.size()) {
			cout<<str1<<">"<<str2<<endl;
		}
		else {
			cout<<str1<<"<"<<str2<<endl;
		}
	}
	/*if(str1 == str2) {
		cout<<"=="<<endl;
	}
	else {
		if(str1 > str2) {
			cout<<str1<<">"<<str2<<endl;
		}
		else {
			cout<<str1<<"<"<<str2<<endl;
		}
	}*/
}
