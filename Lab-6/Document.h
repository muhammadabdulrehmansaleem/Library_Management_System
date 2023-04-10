#ifndef DOCUMENT_H
#define DOCUMENT_H
#include <iostream>
#include "Date.h"
#include <string>
using namespace std;
class Document
{
protected:
	string doctype;
	int pages;
	Date publisDate;
public:
	Document();
	Document(string, int, Date);
	string getDocType();
	int getPages();
	Date getPublishDate();
	void setDocType(string);
	void setPages(int);
	void setDate(Date);
	void DisplayDocument();
};
#endif // !DOCUMENT_H
