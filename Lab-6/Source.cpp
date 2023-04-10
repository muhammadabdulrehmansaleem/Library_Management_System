#include <iostream>
#include <string>
#include "Date.h"
#include "Document.h"
using namespace std;
int main()
{
	Date a(12, 10, 2021);
	Document p("Magazine", 2000, a);
	p.DisplayDocument();
	return 0;
}