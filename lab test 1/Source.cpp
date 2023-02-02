#include <iostream>
using  namespace std;
int main()
{
	double salesperweek, commission;
	// reading gross sales for this week 
	cout << "Enter gross sales for this week: ";
	cin >> salesperweek;

	// checking salesperweek is zero 
	switch (salesperweek == 0) {

		//when salesperweek is zero
	case 1:
		commission = 200;
		break;

		//otherwise
	default:
		commission = 200 + salesperweek * 0.09;
		break;
	}

	//printing commission 
	cout << "commission = " << commission << endl;

	return 0;

}