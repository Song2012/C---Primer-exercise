/*
 * =====================================================================================
 *
 *       Filename:  Ex4.14.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012/3/12 ÐÇÆÚÒ» 0:12:23
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Python (), 
 *        Company:  
 *
 * =====================================================================================
 */
#include<iostream>
using namespace std;
int main(void) {
	const int i = 0 , *q = i;
	int a = 6;
	int b = 5;
	int *p = &a;
	cout<<"p:"<<p<<endl;
	cout<<"*p:"<<*p<<endl;
	p = &b;
	cout<<"p:"<<p<<endl;
	cout<<"*p:"<<*p<<endl;
	*p = 9;
	cout<<"p:"<<p<<endl;
	cout<<"*p:"<<*p<<endl;
}

