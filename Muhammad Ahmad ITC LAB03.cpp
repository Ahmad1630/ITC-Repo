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



// TASK 2

#include <iostream>
using namespace std;


int main()
{
	cout << "Orientation Day" << endl;
	cout << "Total students: " << 450 << endl;
	cout << "Seats left: " << 500 - 450 << endl;
	cout << "Have a nice day" << endl;

	//fixed by using brackets. before it was 156, after fixing, became 70
	cout << "Average: " << (60 + 70 + 80) / 3 << endl;

	cout << "Expression 1: " << 10 + 5 * 2 << endl;
	cout << "Expression 2: " << (10+5) * 2 << endl;
	cout << "Expression 3: " << 20 - 5 - 3 << endl;
	cout << "Expression 4: " << 100/7 << endl;
	cout << "Expression 5: " << 100%7 << endl;
	cout << "Expression 6: " << 2 * 3 + 8 / 4 - 1 << endl;


	return 0;
}

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


