#include<iostream>
using namespace std;
class A {
private:
	int num;
public:
	A(int n) {
		num=n;
	}
	void show() {
		cout << num << endl;
	}
};
int main() {
	A obj1 (5);
	A obj2 (9);
	
	obj1.show();
	obj2.show();
	return 0;

}