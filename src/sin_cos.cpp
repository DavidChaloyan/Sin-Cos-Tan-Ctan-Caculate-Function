#include "include.hpp"

long long unsigned int factorial(int number)
{
	long long unsigned int answer = 1;
	if(number > 1) { answer = factorial(number - 1) * number; }
	else if(number == 1) { return answer; }
	else if(number == 0) { return 1; }
	return answer;
}



int main()
{
	double x;
	string sc;
	cout << "Enter a number\n"; cin >> x;
	cout << "Write what you want to do with that number\n";
	cout << "Enter <sin> or <cos> or <tg> or <ctg> \n"; cin >> sc;
	if( sc == "sin" )
		cout << "sin( " << x << " ) = " << sin(x) << endl;
	else if(sc == "cos" )
		cout << "cos( " << x << " ) = " << cos(x) << endl;
	else if(sc=="tg")
		cout << "tg( "<< x << " ) = " << tg(x) << endl;
	else if(sc=="ctg")
		cout << "ctg( "<< x << ") = " << ctg(x) << endl;
	return 0;

}
