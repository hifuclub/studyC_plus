#ifndef MY_ADD
int myAdd1(int a, int b) {
	return a + b;
}
extern "C" int myAdd2(int a, int b) {
	return a + b;
}
extern const float pi=3.14;
#endif