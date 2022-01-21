#include <iostream>
using namespace std;

int count = 0;
int countDestroyed = 0;
class Test
{
    public :
        Test()
        {
            count ++;
            cout << " No. of objects created : " << count<< endl;
        }
        ~Test()
        {
            countDestroyed++;
            cout << "No. of obejects destroyed : " << countDestroyed << endl;
        }
};

int main()
{
    cout << "Main start" << endl;
    Test t1, t2, t3;
    {
        Test t4;
        {
            Test t5;
        }
    }
    cout << "Main end" << endl;
    
    return 0;
}
