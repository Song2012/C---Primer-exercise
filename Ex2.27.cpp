#include <iostream>
using std::cout;
using std::endl;
int main(void) {
	int i , &ri = i;
	i = 5;
	ri = 10;
	cout<<i<< " "<<ri<<endl;
}
