#include <iostream>
using namespace std;

class book
{
    char **author;
    char **title;
    float *price;
    char **publisher;
    int *stock_copy;
    int size;
    public:
        book(); 
        //set size to 4 and create 4 entries of books after allocating memory 
        //Example : title[0]="object oriented programming with c++";
        void book_detail(int i);//call from within buy if copies are available
        void buy(int i); //check the index search has returned and ask for number of copies required, if those copies are in stock show total price       
        int search();//return the index of the matching book
};

int main()
{
    book b1;
    int result;
    result = b1.search();
    b1.buy(result);
    return 0;
}


/*output smaple

Enter author name : shahani
and title of book in small latter : computer algorithm
*********book detail *********
Title Author Name Stock copy
computer algorithm shahani 80
How many copies of this book is required : ? 78
Total price = 14079 TK
*/