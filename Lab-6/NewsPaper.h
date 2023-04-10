#ifndef NEWSPAPER_H
#define NEWSPAPER_H
#include <iostream>
#include <string>
#include "Date.h"
#include "Document.h"
using namespace std;
class NewsPaper:public Document
{
	string owner;
	string companny; 
	string language;
public:
	NewsPaper();
	NewsPaper(string, string, string, string, int, Date);
	void Ste(string, string, string);
	string getOwner();
	string getCompany();
	string getLanguage();
	void displayNewsPaper();
};
#endif // !NEWSPAPER_H
