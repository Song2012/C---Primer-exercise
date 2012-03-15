/*
 * =====================================================================================
 *
 *       Filename:  Ex4.31.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012/3/12 ÐÇÆÚÒ» 15:56:58
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Python (), 
 *        Company:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int getSize(int a[]) {
	return sizeof(a)/sizeof(int); 
}

int main(void) {
	size_t size = 1;
	size_t current = 0;
	const size_t buffer = 1;
	char *a = new char[size];
	memset(a , 0 , size);
	string str = "";
	while(cin>>str) {
		if(current + str.size() > size) {
			do {
				char *tmp = new char[size + buffer];
				size += buffer;
				memset(tmp , 0 , size);
				for(size_t i = 0 ; i < current ; i++) {
					tmp[i] = a[i];
				}
				a = tmp;
				delete []tmp;
				tmp = 0;


			}while(current + str.size() >size)

			for(string::size_type i = 0 ; i < str.size() ; i++) {
				a[current] += str[i];
				cout<<str[i]<<endl;
				current++;
			}

		}
		else {
			for(string::size_type i = 0 ; i < str.size() ; i++) {
				a[current] += str[i];
				cout<<str[i]<<endl;
				current++;
			}

		}

	}
	cout<<current<<endl;
	for(size_t i = 0 ; i < current ; i++) {
		cout<<"a:"<<a[i]<<" ";
	}
	cout<<endl;


}
