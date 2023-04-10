#include <iostream>
#include "Document.h"
using namespace std;
Document::Document()
{
	doctype = "None";
	pages = 0;
	Date(0, 0, 0);
}
Document::Document(string dt, int p, Date pd)
{
	doctype = dt;
	pages = p;
	publisDate = pd;
}
string Document::getDocType()
{
	return doctype;
}
int Document::getPages()
{
	return pages;
}
Date Document::getPublishDate()
{
	return publisDate;
}
void Document::setDocType(string a)
{
	doctype = a;
}
void Document::setDate(Date a)
{
	publisDate = a;
}
void Document::setPages(int a)
{
	pages = a;
}
void Document::DisplayDocument()
{
	cout << "The document has type " << doctype << " and it has " << pages << " number of pages\n";
	cout << "The document was published on: ";
	publisDate.display();
}