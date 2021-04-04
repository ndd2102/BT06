#include<iostream>
using namespace std;

void f(int a[])
{
	cout <<  &a << endl;
	cout <<  &a[0] << endl;
}

int main()
{
	int a[10];
	cout << &a << endl;
	cout << &a[0] << endl;
	f(a);
}
