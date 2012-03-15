/*
 * =====================================================================================
 *
 *       Filename:  Ex4.28.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012/3/12 星期一 0:31:17
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Python (), 
 *        Company:  
 *
 * =====================================================================================
 */

#include<iostream>
#include<vector>
using namespace std;

int main(void) {
	int n;
	vector<int> a;
	while(cin>>n) {
		a.push_back(n);
	}
	vector<int>::size_type size = a.size();
	int *array = new int[size];              //注意释放内存！！！
	for(vector<int>::size_type i = 0 ; i !=size ; i++) {
		array[i] = a[i];
	}
	for(vector<int>::size_type i = 0 ; i !=size ; i++) {
		cout<<array[i]<<" ";
	}
	cout<<endl;
	delete []array;
	return 0;
}









