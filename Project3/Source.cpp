#include<iostream>
using namespace std;
class A {
private:
	int a;
public:
	A(int n) {
		a = n;

	}
	void show() {
		cout << a;
	}
};
int main() {
	A obj(7);
	obj.show();
	return 0;
}