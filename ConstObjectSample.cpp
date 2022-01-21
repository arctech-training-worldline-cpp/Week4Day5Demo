#include <iostream>
using namespace std;

class Test
{
    public :
        int x;
        Test()
        {
            x = 0;
        }
        void setValue(int val)
        {
            x = val;
        }

};
// constructor has to be provided in case of constant object as after creating there is no means of setting the data members
int main()
{
    const Test obj;
    //obj.x = 30;     
    //obj.setValue(10);

    return 0;
}