#include<iostream>
using namespace std;
int main(){

	int number, temp, reminder, reverse = 0;


	cin >> number;

	temp = number;

	while (temp > 0)
	{
    	reminder = temp % 10;
    	reverse = reverse * 10 + reminder;
    	temp = temp / 10;
	}
	cout << reverse << "\n";

	if(number == reverse) {
		cout<< "YES";
	}
	else {
		cout<< "NO";
	}
 	return 0;
}
