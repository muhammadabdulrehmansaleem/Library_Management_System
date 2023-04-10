#ifndef MAGAZINE_H
#define MAGAZINE_H
#include <iostream>
#include <string>
#include "Document.h"
#include "Date.h"
class Magazine:public Document
{
	string editor;
	string companny;
	string type;
public:
	Magazine();
	Magazine(string, string, string, string, int, Date);
	void set(string, string, string);
	string getEditor();
	string getComapnnyOfMagazine();
	string getTypeOfMagazine();
	void displayMagazine();
};
#endif // !MAGAZINE_H
