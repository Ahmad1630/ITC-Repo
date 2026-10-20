//#include <iostream>
//using namespace std;
//
//int main()
//
//{
//	float weight = 0;
//	float height = 0;
//
//	float heightMeters = 0;
//	float BMI = 0;
//
//	cout << "Input height in centimeters: " << endl;
//	cin >> height;
//
//	cout << "Input weight in KGs: " << endl;
//	cin >> weight;
//
//
//	heightMeters = height / 100;
//
//	BMI = weight / (heightMeters * heightMeters);
//
//	cout << "Your BMI is: " << BMI << endl;
//
//	if (BMI < 18.5) {
//		cout << "You are underweight" << endl;
//	}
//	else if (BMI >= 18.5 && BMI < 25) {
//		cout << "Your weight is normal" << endl;
//	}
//	else if (BMI >= 25) {
//		cout << "You are overweight" << endl;
//	}
//
//	return 0;
//}





// TASK 2 



//#include <iostream>
//using namespace std;
//
//int main() {
//	int number = 0;
//
//	cout << "Enter an integer: " << endl;
//	cin >> number;
//
//	if (number > 0) {
//		cout << "Positive number" << endl;
//	}
//	else if (number < 0) {
//		cout << "Negative number" << endl;
//	}
//	else {
//		cout << "Zero" << endl;
//	}
//
//	return 0;
//}


// TASK 3 


#include <iostream>
using namespace std;

int main()
{
	float price = 0;
	int quantity = 0;

	float originalBill = 0;
	float discount = 0;
	float finalBill = 0;

	cout << "Enter price of one item: " << endl;
	cin >> price;

	cout << "Enter quantity purchased: " << endl;
	cin >> quantity;

	originalBill = price * quantity;

	if (originalBill >= 5000) {
		discount = originalBill * 0.10;
		finalBill = originalBill - discount;

		cout << "Original bill = Rs. " << originalBill << endl;
		cout << "Discount = Rs. " << discount << endl;
		cout << "Final bill = Rs. " << finalBill << endl;
	}
	else {
		discount = 0;
		finalBill = originalBill;

		cout << "Original bill = Rs. " << originalBill << endl;
		cout << "No discount " << endl;
		cout << "Final Bill = Rs. " << finalBill << endl;
	}

	return 0;
}