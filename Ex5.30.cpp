#include <string>
#include <vector>
using std::string;
using std::vector;
int main(void) {
	vector<string> svec(10);
	vector<string> *pvec1 = new vector<string>(10);
	delete pvec1;
	//error
	//vector<string> **pvec2 = new vector<string>[10];
	//delete[] pvec2;

}
