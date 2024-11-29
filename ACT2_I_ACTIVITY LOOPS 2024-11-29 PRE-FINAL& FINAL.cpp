#include <iostream>
using namespace std;

int main() 
{
    char symbol1;
    char symbol2;
    char symbol3;
    cout << "Enter Symbol 1: ";
    cin >> symbol1;
    cout << "Enter Symbol 2: ";
    cin >> symbol2;
    cout << "Enter Symbol 3: ";
    cin >> symbol3;
    int i =9;
    for(int x=0; x <=12;x++){
    for (int y=0; y< 16; y++){
    	if (y< 10){
    		if(x ==6 || x==7){
    			cout << symbol1;
    		}
    		else {
    			cout <<" ";
    			}
    	}else {
    	if (y== i){
    		cout << symbol3;	
    	
    	}
    	else if (y< i){
    		cout << symbol2;
    		}
    		else{
    			break;}
    }
    }
    	if(x <6){
    		i++;
    		}
    		
    	else if (x>6){
    			i--;}
    	cout << endl;
    	}
    return 0;
}
