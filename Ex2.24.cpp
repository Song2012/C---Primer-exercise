int main(void) {
	//const 引用可以绑定到不同但相关的类型的对象或绑定到右值
	const int &rval3 = 1; //合法
	int ival = 0;
	ival = rval3;

}
