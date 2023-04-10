#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <string>
#include "Document.h"
using namespace std;
class Book: public Document
{
	string author;
	string ISBN;
	string title;
public:
	Book();
	Book(string ,string ,string,string ,int ,Date );
	void setAuthor(string);
	void setIsbn(string);
	void setTitle(string);
	string getAuthor();
	string getIsbn();
	string getTitle();
	void displayBook();
};
#endif // !BOOK_H
