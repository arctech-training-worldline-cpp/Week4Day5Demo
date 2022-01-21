#include <iostream>
using namespace std;

class Test
{
	const char *ptr;
	
	public :
		Test()
		{
			ptr = new char[10];
			ptr = "Hello";
		}
		void display()
		{
			cout << ptr << endl;
		}		

};

int main()
{
	Test t;
	t.display();
	return 0;
}