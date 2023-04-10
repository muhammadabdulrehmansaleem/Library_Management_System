#include <iostream>
#include "Book.h"
using namespace std;
Book::Book()
{
	author = "";
	ISBN = "";
	title = "";
}
Book::Book(string au, string is, string tit, string dt, int p, Date d):Document(dt,p,d),author(au),ISBN(is),title(tit)
{

}
void Book::setAuthor(string a)
{
	author = a;
}
void Book::setIsbn(string is)
{
	ISBN = is;
}
void Book::setTitle(string a)
{
	title = a;
}
string Book::getAuthor()
{
	return author;
}
string Book::getIsbn()
{
	return ISBN;
}
string Book::getTitle()
{
	return title;
}
void Book::displayBook()
{
	cout << "The author name is " << author << " the title is " << title << " and the ISBN number of the Books is " << ISBN << endl;
}