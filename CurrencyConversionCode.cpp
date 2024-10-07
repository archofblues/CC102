#include <iostream>
using namespace std;

int main()
{
	double exchangerate,amount;
	char conversiontype;
	cout <<"Enter exchange rate (1 USD to PHP):";
	cin >> exchangerate;
	cout << "Enter the amount followed by 'P' if PHP to Dollar or 'D' to Dollar to PHP=";
	cin >> amount >> conversiontype;
	double convertedamount;
	 if(conversiontype =='P' || conversiontype == 'p')
	 {convertedamount = amount / exchangerate;
	 cout << amount << "Peso =" << convertedamount << "Dollar" <<endl;
	 } else if (conversiontype =='D' || conversiontype == 'd')
	 {convertedamount = amount * exchangerate;
	  cout << amount << "Dollar =" << convertedamount << "Peso" <<endl;
	 }
	  return 0;
}	