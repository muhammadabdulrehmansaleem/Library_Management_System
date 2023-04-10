#include <iostream>
#include "NewsPaper.h"
using namespace std;
NewsPaper::NewsPaper():Document()
{
	owner = "";
	companny = "";
	language = "";
}
NewsPaper::NewsPaper(string ow, string co, string la, string dt, int p, Date d) :Document(dt, p, d)
{
	owner = ow;
	companny = co;
	language = la;
}
void NewsPaper::Ste(string a, string b, string d)
{
	owner = a;
	companny = b;
	language = d;
}
string NewsPaper::getOwner()
{
	return owner;
}
string NewsPaper::getCompany()
{
	return companny;
}
string NewsPaper:: getLanguage()
{
	return language;
}
void NewsPaper::displayNewsPaper()
{
	cout << "The owner of the newspaper is " << owner << " the companny is " << companny << " and the language is " << language << endl;
}