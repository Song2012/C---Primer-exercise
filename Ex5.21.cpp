/*
 * =====================================================================================
 *
 *       Filename:  Ex5.21.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012/3/18 ÐÇÆÚÈÕ 16:57:14
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Python (), 
 *        Company:  
 *
 * =====================================================================================
 */
#include <vector>
#include <iostream>
using namespace std;

int main(void) {
	vector<int> a;
	int n;
	int count = 0;
	while(cin>>n) {
		a.push_back(n);
	}

	for(vector<int>::iterator iter = a.begin() ; 
			iter != a.end() ; ++iter) {
		*iter = (*iter%2 != 0) ? (*iter)*2 : *iter;
	}

	for(vector<int>::iterator iter = a.begin() ; 
			iter != a.end() ; ++iter) {
		cout<<*iter<<" ";
		++count;
		if(count%5 == 0){
			cout<<endl;
		}
	}
	cout<<endl;
}



