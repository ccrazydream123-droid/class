#include <iostream>
using namespace std;

class Base {
public:
	int n;
	Base(int i) :n(i)
	{
		cout << "基类" << n << "构造" <<endl;
	}
};
class Derived :public Base {
public:
	Derived(int i) :Base(i)
	{
		cout << "派生类构造" << endl;
	}
};
int main()
{
	Derived Obj(1);
	return 0;
}