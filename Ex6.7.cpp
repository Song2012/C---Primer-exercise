/*
 * =====================================================================================
 *
 *       Filename:  Ex6.7.cpp
 *
 *    Description:  Description
 *
 *        Version:  1.0
 *        Created:  2012/3/22 ÐÇÆÚËÄ 17:49:17
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
using namespace std;

int main(void) {
	string text;
	string str;
	int a = 0, e = 0 , i = 0 , o = 0 , u = 0;
	int space = 0, tab = 0, enter = 0;
	while(getline(cin , str)) {
		text += str;
	}

	for(string::iterator iter = text.begin() ; 
			iter != text.end() ; ++iter) {
		switch(*iter) {
			case 'a': case 'A':
				++a;
				break;
			case 'e': case 'E':
				++e;
				break;
			case 'i': case 'I':
				++i;
				break;
			case 'o': case 'O':
				++o;
				break;
			case 'u': case 'U':
				++u;
				break;
			case ' ':
				++space;
				break;
			case '\t':
				++tab;
				break;
			case'\n':
				++enter;
				break;

				
		}
	}

	cout<<text<<endl;
	cout<<"a: "<<a<<endl;
	cout<<"e: "<<e<<endl;
	cout<<"i: "<<i<<endl;
	cout<<"o: "<<o<<endl;
	cout<<"u: "<<u<<endl;
	cout<<"space: "<<space<<endl;
	cout<<"tab: \t"<<tab<<endl;
	cout<<"enter: "<<enter<<endl;


}
