#include <iostream>
#include <string>
#include "Magazineh.h"
using namespace std;
Magazine::Magazine():Document()
{
	editor="";
	companny="";
	type="";
}
Magazine::Magazine(string ed, string co, string ty, string dt, int p, Date d):Document(dt, p, d)
{
	editor = ed;
	companny = co;
	type = ty;
}
void Magazine::set(string ed, string co, string ty)
{
	editor = ed;
	companny = co;
	type = ty;
}
string Magazine::getEditor()
{
	return editor;
}
string Magazine::getComapnnyOfMagazine()
{
	return companny;
}
string Magazine::getTypeOfMagazine()
{
	return type;
}
void Magazine::displayMagazine()
{
	cout << "The editor is  " << editor << " and the companny of the magazine is " << companny << " and the type of the magazine is " << type << endl;
}