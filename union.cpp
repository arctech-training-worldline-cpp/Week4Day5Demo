#include <iostream>
using namespace std;

union book
{
  int sr;
  char name[20];
  float price;
};

int main()
{
  book vr;
  cout <<"Enter Sr.No ";
  cin >> vr.sr;
  cout << "Enter book price";
  cin >> vr.price;
  cout << "Enter Book name";
  cin >> vr.name;
  

  cout << endl << "Serial number" << vr.sr << endl;
  cout << "Book name" << vr.name << endl;
  cout << "Price " << vr.price << endl;
  return 0;
}
