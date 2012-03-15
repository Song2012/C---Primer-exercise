/*
 * =====================================================================================
 *
 *       Filename:  Ex3.32.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012/3/14 ÐÇÆÚÈý 10:14:36
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Python (), 
 *        Company:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	int a[]	 = {1,1,1,2,2,2};
	vector<int> array(a , a+sizeof(a)/sizeof(int));
	for(vector<int>::iterator iter = array.begin() ; iter != array.end();
			++iter) {
		cout<<*iter<<endl;
	}
}

