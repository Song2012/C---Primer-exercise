/*
 * =====================================================================================
 *
 *       Filename:  Rand.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012/3/22 ÐÇÆÚËÄ 14:16:26
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Python (), 
 *        Company:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <ctime>
using namespace std;

int random(int a , int b) {
	return (rand()%(b-a+1)) + a; 
}

double getPercentage(double numerator , double base) {
	return numerator/base*100;
}

int main(void) {
	srand((unsigned)time(NULL));
	int a = 0, b = 4;
	const int count = 10000;
	int a1 = 0,a2 = 0,a3 = 0,a4 = 0,a5 = 0,a6 = 0;
//	int def = 10;
	for(int i = 0 ; i != count ; ++i) {
		switch(random(a,b)) {
			case 0:
				++a1;
				break;
			case 1:
				++a2;
				break;
			case 2:
				++a3;
				break;
			case 3:
				++a4;
				break;
			case 4:
				++a5;
				break;
			case 5:
				++a6;
				break;
		}
	}

	cout<<"0: "<<getPercentage(a1,count)<<"%"<<endl;
	cout<<"1: "<<getPercentage(a2,count)<<"%"<<endl;
	cout<<"2: "<<getPercentage(a3,count)<<"%"<<endl;
	cout<<"3: "<<getPercentage(a4,count)<<"%"<<endl;
	cout<<"4: "<<getPercentage(a5,count)<<"%"<<endl;
	cout<<"5: "<<getPercentage(a6,count)<<"%"<<endl;

}
