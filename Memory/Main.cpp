#include <iostream>
using namespace std;

void set(int& i) {
	cout << &i << endl;
	i = 100;
}

int main() {
	int i1 = 10;
	int i2 = 20;

	int& r = i1;
	int* p = nullptr;
	p = &i1;

	/*
	r = 30;
	set(i1);
	cout << i1 << endl;
	cout << r << endl;

	cout << p << endl;
	cout << *p << endl;
	*/

	int* p1 = new int(10); // <- Heap
	cout << p1 << endl;
	cout << *p1 << endl;
	cout << &p1 << endl;

	delete p1;

	char* c1 = new char;
	char* c2 = new char;

	cout << std::hex << (unsigned int)c1 << endl;
	cout << std::hex << (unsigned int)c2 << endl;

	int* a = new int[5];

	int ar[4]{ 1, 2, 3, 4 };
	cout << ar[0] << endl;

	char* pc = (char*)&i1;

}