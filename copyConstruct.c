#include <iostream>
using namespace std;

class book
{
public:
    book(){}
    book(book &b);
    book(char* a, double p = 5.0);
    void display();
private:
    double price;
    char * title;
};
book::book(book &b)
{
    price = b.price;
    title = b.title;
}
book::book(char* a, double p)
{
    title = a;
    price = p;
}
void book::display()
{
    cout<<"The price of "<<title<<" is $"<<price<<endl;
}
int main()
{
	book zs("zhangsan",50);
//	book ls(zs);
book ls;
	ls.display();
	
}