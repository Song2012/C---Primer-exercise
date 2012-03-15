/*
 * =====================================================================================
 *
 *       Filename:  Ex4.34.cpp
 *
 *    Description:   *
 *        Version:  1.0
 *        Created:  2012/3/14 ÐÇÆÚÈý 10:36:54
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Python (), 
 *        Company:  
 *
 * =====================================================================================
 */

#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

int main(void) {
	vector<string> a;
	string str;
	while(cin>>str) {
		a.push_back(str);
	}
	vector<string>::size_type size = a.size();
	char **carray = new char*[size];
	memset(carray , 0 , size);
	for(vector<string>::size_type i = 0;
			i != a.size() ; ++i ) {
		char *c = new char[a[i].size() + 1]; //´æ·Å'\0'
		strcpy(c , a[i].c_str());
		carray[i] = c;
	}

	for(int i = 0 ; i < size ; i++) {
		cout<<(carray[i])<<endl;
		delete []carray[i];
		carray[i] = 0;
	}
	delete []carray;
	carray = 0;
}

