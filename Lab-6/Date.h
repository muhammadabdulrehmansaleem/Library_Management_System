#ifndef DATE_H
#define DATE_H
class Date
{
	int day;
	int month;
	int year;
public:
	Date();
	Date(int, int, int);
	void SetDate(int, int, int);
	Date& getDate();
	Date& operator=(const Date&);
	void display();
};
#endif // !DATE_
