/*
 * =====================================================================================
 *
 *       Filename:  Ex4.18.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012/3/12 ÐÇÆÚÒ» 0:21:03
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Python (), 
 *        Company:  
 *
 * =====================================================================================
 */

#include <iostream>
using namespace std;

int main(void) {
	int a[] ={1,1,1,1,1};
	for(int *pbegin = a , *pend = a+5 ; pbegin != pend ; pbegin++) {
		*pbegin = 0;
	}
	cout<<"a:";
	for(int i = 0;i != 5;i++) {
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}

