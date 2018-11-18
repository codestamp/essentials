#include <iostream>
/*
 *  https://stackoverflow.com/questions/121162/what-does-the-explicit-keyword-mean
*/

class Foo {
	public:
		//single parameter constructor can be used as an implicit conversion
		explicit Foo(int foo):m_foo(foo){}
		int GetFoo() { return m_foo; }
	private:
		int m_foo;
};

void DoBar(Foo foo) {
	int i=foo.GetFoo();
	std::cout << i << '\n';
}

int main() {
	DoBar(Foo(42));
	return 0;
}
