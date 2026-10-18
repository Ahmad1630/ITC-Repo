// task 1 2 




//#include <iostream>
//using namespace std;
//
//int main()
//
//{
//	// Muhammad Ahmad 0306
//	
//	//Printing hello world
//	cout << "Hello world" << endl;
//
//	cout << "University of Central Punjab \n Faculty of Information Technology \n Orientation Day 2026";
//
//	// Starting welcome message
//	cout << "Welcome" << endl;
//	cout << 2026 << endl;
//	cout << 45 << endl;
//	// calculating and printing 45*3
//	cout << 45*3 << endl;
//	//calculating and printing 1000+500+250
//	cout << 1000+500-250 << endl;
//	// Caclculating total fee and printing together with message Total fee
//	cout << "Total fee: " << 45000+9000 << endl;
//		
//	//Error	C2146	syntax error : missing ';' before identifier 'Cout'	ITC LAB03	C : \Users\L1F26BSCS0306\source\repos\ITC LAB03\ITC LAB03\FileName.cpp	16
//	//Error	C2065	'Cout': undeclared identifier	ITC LAB03	C : \Users\L1F26BSCS0306\source\repos\ITC LAB03\ITC LAB03\FileName.cpp	16
//
//
//
//	// End
//
//	return 0;
//}





// TASK 2 and 3



//#include <iostream>
//using namespace std;
//
//
//int main()
//{
//	cout << "Orientation Day" << endl;
//	cout << "Total students: " << 450 << endl;
//	cout << "Seats left: " << 500 - 450 << endl;
//	cout << "Have a nice day" << endl;
//
//	//fixed by using brackets. before it was 156, after fixing, became 70
//	cout << "Average: " << (60 + 70 + 80) / 3 << endl;
//
//	cout << "Expression 1: " << 10 + 5 * 2 << endl;
//	cout << "Expression 2: " << (10 + 5) * 2 << endl;
//	cout << "Expression 3: " << 20 - 5 - 3 << endl;
//	cout << "Expression 4: " << 100 / 7 << endl;
//	cout << "Expression 5: " << 100 % 7 << endl;
//	cout << "Expression 6: " << 2 * 3 + 8 / 4 - 1 << endl;
//
//
//	return 0;
//}

// ERRORS LOGS before fixing

// Error(active)	E0020	identifier "cout" is undefined	ITC LAB03	C : \Users\L1F26BSCS0306\source\repos\ITC LAB03\ITC LAB03\FileName.cpp	42
// Error(active)	E0020	identifier "endl" is undefined	ITC LAB03	C : \Users\L1F26BSCS0306\source\repos\ITC LAB03\ITC LAB03\FileName.cpp	42 
// Error(active)	E0065	expected a ';'	ITC LAB03	C : \Users\L1F26BSCS0306\source\repos\ITC LAB03\ITC LAB03\FileName.cpp	43
//Error(active)	E0008	missing closing quote	ITC LAB03	C : \Users\L1F26BSCS0306\source\repos\ITC LAB03\ITC LAB03\FileName.cpp	45 (missing closing quote)
//Error(active)	E0065	expected a ';'	ITC LAB03	C : \Users\L1F26BSCS0306\source\repos\ITC LAB03\ITC LAB03\FileName.cpp	46

// Errors explained

// Missing library std (syntax error)
// missing semicolon (syntax error)
// missing << before 450 (syntax error)
// missing proper quotation marks (syntax error)
// wrong calculation of average due to missing brackets (semantic error)

// A syntax error is when there is problem in code like a wrong keyword or missing symbols such as s semicolon
// A semantic error is like a logical erro, thecode is correct, buet the logic is wrong leading to a wrong answer






// task 4



//#include <iostream>
//using namespace std;
//
//
//int main()
//{
//
//	// here i declare all the required variables
//
//	int rollNo = 1045;
//	int semester = 1;
//	char section = 'B';
//	float cgpa = 3.5;
//	float totalFee = 45000;
//	float feePaid = 20000;
//
//	// now we display them
//
//	cout << "Roll number = " << rollNo << endl;
//	cout << "Semester = " << semester << endl;
//	cout << "Section = " << section << endl;
//	cout << "CGPA = " << cgpa << endl;
//	cout << "Total Fee = " << totalFee << endl;
//	cout << "Fees paid = " << feePaid << endl;
//
//	// moving to next semester
//
//	semester = semester + 1;
//	feePaid = feePaid + 5000;
//
//	// dispalying remaining fee and percentage of fee paid
//
//	float remainingFee = 0;
//	float percentagePaid = 0;
//
//	remainingFee = totalFee - feePaid;
//	percentagePaid = (feePaid * 100) / totalFee;
//
//	//displaying info
//
//	cout << "Semester = " << semester << endl;
//	cout << "Fees paid = " << feePaid << endl;
//	cout << "remaining Fee = " << remainingFee << endl;
//	cout << "Percentage fee Paid = " << percentagePaid << endl;
//
//
//	// marking identifiers as valid or invalid
//	// 2ndYear = invalid, shouldnt start witha number
//	// student_name = valid
//	// total-marks = invalid, shouldnt contain - 
//	// _fee = valid
//	// Roll No = invalid, no space allowed
//	// marks2 = valid
//
//	/*
//	
//	*/
//
//	//int x;
//	//cout << x << endl;
//
//	// unsafe to use uninitialized values because they may not work or cause unexpected outputs or garbage values
//
//
//
//
//
//	return 0;
//}





// task 5



//#include <iostream>
//using namespace std;
//
//int main()
//
//{
//	int age;
//	int creditHours;
//	int feePerCreditHour;
//	int totalFee = 0;
//	int discountedFee = 0;
//
//
//	//cout << "Enter age, credit hours, and fee per credit hour: ";
//	//cin >> age >> creditHours >> feePerCreditHour; ( COMMENTED OUT AFTER TEST 1 WAS FINISHED )
//
//	cout << "Enter age: ";
//	cin >> age;
//
//	cout << "Enter credit hours: ";
//	cin >> creditHours;
//
//	cout << "Enter fee per credit hour: ";
//	cin >> feePerCreditHour;
//
//	cout << "Age = " << age << endl;
//	cout << "Credit Hours = " << creditHours << endl;
//	cout << "Feeper credit hour =" << feePerCreditHour << endl;
//
//
//	totalFee = creditHours * feePerCreditHour;
//	discountedFee = totalFee - 2000;
//
//	cout << "Total fee is = " << totalFee << endl;
//	cout << "Discounted fee is = " << discountedFee << endl;
//
//	cout << "Year of birth is = " << 2026 - age << endl;
//	cout << "Year when 25 = " << (2026 - age) + 25 << endl;
//
//
//	return 0;
//}

// task 5 experiments
// 
// experiment 1 : results remainthe same for all 3 tests when taking inputs together, this is becasue cin makes all whitespaces act as separator
// experiment 2 : 19 is stored in age , the next values arent taken, they are not taken and are stored as some random garbage value. this is probably becaause age is an integer and we entered a float value
// Feeper credit hour =-858993460 (this is a garbage value that i did not declare). We must declare an intiail value if we want to avoid garbage values filling up. The main problem is from entering a float value in an integer variable




// TASK 6


//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int price = 0;
//	int quantity = 0;
//	int total = 0;
//	int tax = 0;
//	int grandTotal = 0;
//
//	cout << "Input price = " << endl;
//	cin >> price;
//
//	cout << "Input quantity = " << endl;
//	cin >> quantity;
//
//	total = price * quantity;
//	tax = (total * 5) / 100;
//	grandTotal = total + tax;
//
//	cout << "Total is = " << total << endl;
//	cout << "Tax is = " << tax << endl;
//	cout << "Grand Total is = " << grandTotal << endl;
//
//
//	// 3. Run the program again with price = 99 and quantity = 7. A calculator gives a tax of 34.65. What
//	// does your program print, and why is it different ? Answer in a comment.
//
//	// My program gives 34 because my variables are declared as integers, which dont take the decimal point values.
//
//
//
//	return 0;
//}



// task 7


#include <iostream>
using namespace std;

int main()

{

	int CelsiusTemp;
	int Fahrenheit;

	cout << "Enter temperature in celsius = " << endl;
	cin >> CelsiusTemp;

	Fahrenheit = (CelsiusTemp * 9 / 5) + 32;

	cout << "Celsius temperature was = " << CelsiusTemp << endl;
	cout << "Fahrenheit temperature is = " << Fahrenheit << endl;

	return 0;
}

// My program prings 98
// this is because values in my program are taken as integers, not float