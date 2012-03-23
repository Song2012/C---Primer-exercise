/*
 * =====================================================================================
 *
 *       Filename:  Ex5.18.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012/3/18 ÐÇÆÚÈÕ 15:57:38
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
#include <vector>
using namespace std;

int main(void) {
	vector<string*> pstr;
	string str;
	while(cin>>str) {
		string *p = new string();
		*p = str;
		pstr.push_back(p);
	}
	for(vector<string*>::iterator iter = pstr.begin();
			iter != pstr.end() ; ++iter) {
		cout<<(**iter)<<endl;
		cout<<(*iter)->size()<<endl;
	}
	vector<string*>::iterator p = pstr.begin();
	while(p != pstr.end()) {
		delete *p;
		++p;
	}
}

