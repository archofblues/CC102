#include <iostream>

using namespace std;

int main ()
{
	float sugarPriceUSD,coffeePriceUSD, milkPriceUSD;
	float ricePricePound,sardinesPricePound;
	float sugarQty,riceQty,sardinesQty,coffeeQty,milkQty;
	cout <<"*****SARI-SARI STORE*****\n";
	cout << "Sugar Price:$";
	cin >> sugarPriceUSD;
	cout << "Coffee Price:$";
	cin >> coffeePriceUSD;
	cout << "Milk Price:$";
	cin >> milkPriceUSD;
	cout << "Rice Price:£";
	cin >> ricePricePound;
	cout << "Sardines Price:£";
	cin >> sardinesPricePound;
	double exchangerate,amount,usdToPhp,poundToPhp;
	char conversiontype;
	cout <<"Enter exchange rate (1 USD/Pound to PHP):";
	cin >> exchangerate;
	cout << "Enter the amount followed by 'P' if PHP to Dollar or 'O' to Pound to PHP=";
	cin >> amount >> conversiontype;
	double convertedamount;
	 if(conversiontype =='P' || conversiontype == 'p')
	 {convertedamount = amount / exchangerate;
	 cout << amount << "usdToPhp =" << convertedamount << "Dollar" <<endl;
	 } else if (conversiontype =='O' || conversiontype == 'o')
	 {convertedamount = amount * exchangerate;
	  cout << amount << "poundToPhp =" << convertedamount << "Peso" <<endl;
	 }
	 char name,quantity;
	 float PricePHP,TotalCostPerItemPhp,TotalCostPhp,sugarCostPHP,riceCostPHP,sardinesCostPHP,coffeeCostPHP,milkCostPHP;
	cout << "Item name:\n";
	cin >> name;
	cout << "Quantity purchased:\n";
	cin >> quantity;
	cout << "Price per item in PHP:\n";
	cin >> PricePHP;
	cout << "Total cost per item in PHP:\n";
	cin >> TotalCostPerItemPhp;
	TotalCostPhp =sugarCostPHP + riceCostPHP + sardinesCostPHP + coffeeCostPHP + milkCostPHP;
	cout << "Total amount to paid in PHP:\n";
	cin >> TotalCostPhp;
	return 0;
}

	