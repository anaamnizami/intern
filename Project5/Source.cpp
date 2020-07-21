#include<iostream>
using namespace std;
class A {
private:
	int a;
public:
	void set(int n) {
		a = n;
	}
	void show() {
		cout << a;
	}
};
int main() {
	A obj;
	obj.set(7);
	obj.show();
	return 0;
}