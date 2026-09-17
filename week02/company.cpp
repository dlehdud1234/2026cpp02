#include "company.h"

Company::Company(string name, string tel) : name(name), tel(tel)
{
}
Company::~Company()
{
}
void Company::print() const
{
	cout << "영수증: " << name << '\n';
	cout << "총 금액 : " << tel << '\n';
}