#include<iostream>
using namespace std;


class two
{
public:
	two();
	~two();

private:

};

two::two()
{
	cout << "two";
}

two::~two()
{
	cout << "two.";
}

class th
{
public:
	th();
	~th();

private:

};

th::th()
{
	cout << "th";
}

th::~th()
{
	cout << "th.";
}
class one
{
public:
	one();
	~one();

private:
	two tw;
	th th;
};

one::one()
{
	cout << "1";
}

one::~one()
{
	cout << "1.";

}

void main()
{
	one o;
}