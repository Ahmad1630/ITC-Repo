// Muhammad Ahmad L1F26BSCS 0306 CS Section A7

//#include <iostream>
//using namespace std;
//
//int main()
//
//{
//	int dayNumber = 0;
//	
//	cout << "Enter a day number: ";
//	cin >> dayNumber;
//
//	switch (dayNumber)
//
//	{
//	case 1:
//		cout << "Day: Monday" << endl;
//		break;
//
//	case 2: 
//		cout << "Day: Tuesday" << endl;
//		break;
//
//	case 3:
//		cout << "Day: Wednesday" << endl;
//		break;
//
//	case 4:
//		cout << "Day: Thursday" << endl;
//		break;
//
//	case 5: 
//		cout << "Day: Friday" << endl;
//		break;
//
//	case 6:
//		cout << "Day: Saturday";
//		break;
//
//	case 7:
//		cout << "Day: Sunday";
//		break;
//
//	default:
//		cout << "Invalid day number" << endl;
//
//
//	}
//
//	return 0;
//}



// TASK 2


//#include <iostream>
//using namespace std;
//
//int main()
//
//{
//
//	char grade;
//	double gradePoint;
//
//	cout << "Enter your grade as a single character: ";
//	cin >> grade;
//
//	switch (grade)
//
//
//	{
//	case 'A': case 'a':
//		cout << "Excellent work" << endl;
//		gradePoint = 4.0;
//		break;
//
//	case 'B': case 'b':
//		cout << "Good" << endl;
//		gradePoint = 3.0;
//		break;
//
//	case 'C': case 'c':
//		cout << "Satisfactory" << endl;
//		gradePoint = 2.0;
//		break;
//
//	case 'D': case 'd':
//		cout << "Needs improvement" << endl;
//		gradePoint = 1.0;
//		break;
//
//
//	case 'F': case 'f':
//		cout << "Fail" << endl;
//		gradePoint = 0.0;
//		break;
//
//
//	default:
//			cout << "Invalid grade";
//			gradePoint = 0.0;
//			break;
//
//	}
//	 
//	return 0;
//
//}




// TASK 3

//#include <iostream>
//using namespace std;
//
//int main()
//
//{
//
//	int choice = 0;
//	float value;
//	float converted;
//
//	cout << "Unit Converter" << endl;
//	cout << "1- Kilometers to miles" << endl;
//	cout << "2- Kilograms to pounds" << endl;
//	cout << "3- Celsius to Fahrenheit" << endl;
//	cout << "4- Inches to centimeters" << endl;
//
//	cout << "Enter your choice (1-4): ";
//	cin >> choice;
//
//	cout << "Enter the value: ";
//	cin >> value;
//
//	switch (choice)
//
//	{
//	case 1:
//		cout << value << " Kilometers = " << value * 0.621371 << " Miles";
//		break;
//	case 2:
//		cout << value << " Kilograms = " << value * 2.20462 << " Pounds";	
//		break;
//	case 3:
//		cout << value << " Celsius = " << (value * 9/5) + 32 << " Fahrenheit";
//		break;
//	case 4:
//		cout << value << " Inches = " << value * 2.20462 << " centimeters";
//		break;
//
//	default:
//		cout << "Invalid choice";
//	}
//
//	return 0;
//}



// TASK 4


#include <iostream>
using namespace std;

int main()

{
	int month;

	cout << "Enter month: ";
	cin >> month;

	switch (month)

	{
	case 12: case 1: case 2:
		cout << "Winter season" << endl;
		break;

	case 3: case 4: case 5:
		cout << "Spring season" << endl;
		break;

	case 6: case 7: case 8:
		cout << "Summer season" << endl;
		break;

	case 9: case 10: case 11:
		cout << "Autumn season" << endl;
		break;

	default:
		cout << "invalid month" << endl;

	}

	switch (month)

	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			cout << "31 days" << endl;
			break;

		case 4: case 6: case 9: case 11:
			cout << "30 days" << endl;
			break;

		case 2:
			cout << "28 days" << endl;
			break;

		default:
			cout << "Invalid month" << endl;

	}

	return 0;
}



