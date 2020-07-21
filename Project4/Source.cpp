#include<iostream>
using namespace std;
class A {
private:
	int a;
public:
	A(int);
	void show();
};
int main() {
	A obj(6);
	obj.show();

	return 0;
}
A::A(int n) {
	a = n;
}
void A::show() {
	cout << a;
}