#include <iostream>
using namespace std;
int main()
{
  cout<<"s1102013"<<endl;
  cout<<"蕭家證"<<endl;
  //-----------------------
  cout<<"demo"<<endl;
  return 1;
}
#include "pch.h"
#include <iostream>

using namespace std;

void split(int n, int num[])
{
	num[0] = n / 1000;
	num[1] = (n / 100) % 10;
	num[2] = (n / 10) % 10;
	num[3] = n % 10;
}
bool noZero(int n)
{
	int num[4];
	split(n, num);
	if ((num[0] && num[1] && num[2] && num[3]) != 0)
		return true;
	else
		return false;
}
bool noRepeat(int n)
{
	int number[4];
		split(n, number);
		if ((number[0] != number[1]) && (number[0] != number[2]) && (number[0] != number[3]) && (number[1] != number[2]) && (number[1] != number[3]) && (number[2] != number[3]))
			return true;
		else
			return false;

}


