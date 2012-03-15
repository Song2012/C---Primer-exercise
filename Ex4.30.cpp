#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(void) {
	char c1[] = "hello";
	char c2[] = "world";
	char *c3 = new char[11];
 	//重要！！！！
	//如果不给该数组进行初始化，将会导致不可预知的结果	
	memset(c3,0,12); 

	strncat(c3,c1,6);
	strncat(c3,c2,6);
	cout<<c3<<endl;
	delete []c3;
	string str1(c1);
	string str2(c2);
	string str3 = str1 + str2;
	cout<<str3<<endl;

}
