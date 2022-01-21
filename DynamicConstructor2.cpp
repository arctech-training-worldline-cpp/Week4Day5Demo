#include <iostream>
using namespace std;

class Test
{
	int *ptr;
	public :
		Test()
		{
			ptr = new int[3]{1,2,3};
		}
};

int main()
{
	//five objects of class Test will be created
	//for each object the default constructor will be called
	Test *ptrTest = new Test[5];
	return 0;
}