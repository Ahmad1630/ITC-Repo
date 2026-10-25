//// Muhammad Ahmad L1F26BSCS0306 Section A7 Computer Science
//
//
//
//#include <iostream>
//using namespace std;
//
//
//int main() {
//    int number;
//
//    cout << "Enter an integer: ";
//    cin >> number;
//
//    if (number > 0) {
//        cout << "Positive number" << endl;
//    }
//
//    // If number is 0 or negative, the condition is false  so the message is not printed

//
//    return 0;
//}



// TASK 2



//#include <iostream>
//using namespace std;
//
//
//int main() 
//
//{
//    int billAmount;
//
//    cout << "Enter bill amount: ";
//    cin >> billAmount;
//
//    cout << "Bill amount: Rs. " << billAmount << endl;
//
//    if (billAmount >= 5000) {
//        cout << "You qualify for a discount." << endl;
//    }
//
//    // >= is used because if bill is 5000, it should also be processed
//
//    return 0;
//}




// TASK 3



//#include <iostream>
//using namespace std;
//
//
//int main() {
//    int number;
//
//    cout << "Enter an integer: ";
//    cin >> number;
//
//    if (number % 2 == 0) {
//        cout << "Even number" << endl;
//    }
//    else {
//        cout << "Odd number" << endl;
//    }
//
//    return 0;
//
//    // 0 is even because 0 % 2 == 0 , 0's remainder when divided by 2 is also 0
//}





// TASK 4




//#include <iostream>
//using namespace std;
//
//
//int main() 
//
//{
//    int age;
//
//    cout << "Enter your age: ";
//    cin >> age;
//
//    if (age >= 18) {
//        cout << "Eligible to vote" << endl;
//    }
//    else {
//        cout << "Not eligible to vote" << endl;
//    }
//
//    return 0;
//}



// TASK 5 




//#include <iostream>
//using namespace std;
//
//
//int main() 
//
//
//{
//    int firstNumber, secondNumber;
//
//    cout << "Enter two numbers: ";
//    cin >> firstNumber >> secondNumber;
//
//    if (firstNumber > secondNumber) 
//    {
//        cout << "First number is greater" << endl;
//    }
//    else {
//        cout << "First number is not greater" << endl;
//    }
//
//    return 0;
//}
// // when both numbers are equal, 
// // the output is First number is not greater because > checks if the first number is  greater 
// // equal numbers dont fit into this condiiton



// TASK 6



//#include <iostream>
//using namespace std;
//
//int main() {
//    int marks;
//
//    cout << "Enter marks (0-100): ";
//    cin >> marks;
//
//    if (marks >= 90) {
//        cout << "Grade: A" << endl;
//    }
//    else if (marks >= 80) {
//        cout << "Grade: B" << endl;
//    }
//    else if (marks >= 70) {
//        cout << "Grade: C" << endl;
//    }
//    else if (marks >= 60) {
//        cout << "Grade: D" << endl;
//    }
//    else {
//        cout << "Grade: F" << endl;
//    }
//
//    // in the flow of the program , highest range is checked first so higher marks get the correct grade before low ranges are checked, if we went the opposite way, there would be logical error and unexpected grade
//    
//
//    return 0;
//}




// TASK 7 




//#include <iostream>
//using namespace std;
//
//
//int main() {
//    int temperature;
//
//    cout << "Enter temperature in Celsius: ";
//    cin >> temperature;
//
//    if (temperature < 10) {
//        cout << "Weather: Cold" << endl;
//    }
//    else if (temperature < 25) {
//        cout << "Weather: Pleasant" << endl;
//    }
//    else if (temperature < 35) {
//        cout << "Weather: Warm" << endl;
//    }
//    else {
//        cout << "Weather: Hot" << endl;
//    }
//
//    return 0;
//}
//
////  for temperature 18
//// 1-  18 < 10 is false
//// 2- 18 < 25 is true
//// 3-  program prints Weather: Pleasant , and skips the remaining conditions




// TASK 8


// mistake is if (marks = 50) . = is for assigning, it doesnt compare, it makes marks get assigned the value 50. correct would be marks >= 50. == is correct when using comparisons instead of =


//#include <iostream>
//using namespace std;
//
//
//int main() {
//    int marks;
//
//    cout << "Enter marks: ";
//    cin >> marks;
//
//    if (marks >= 50) {
//        cout << "Pass" << endl;
//    }
//    else {
//        cout << "Fail" << endl;
//    }
//
//
//    return 0;
//}




// TASK 9 




//#include <iostream>
//using namespace std;
//
//
//int main() {
//    int units;
//
//    cout << "Enter monthly units: ";
//    cin >> units;
//
//    if (units <= 100) {
//        cout << "Usage category: Low usage" << endl;
//    }
//    else if (units <= 300) {
//        cout << "Usage category: Medium usage" << endl;
//    }
//    else {
//        cout << "Usage category: High usage" << endl;
//    }
//
//    return 0;
//}




// TASK 10



//#include <iostream>
//using namespace std;
//
//
//int main() 
//
//{
//    int marks;
//
//    cout << "Enter marks: ";
//    cin >> marks;
//
//    if (marks >= 85) {
//        cout << "Scholarship awarded" << endl;
//    }
//    else {
//        cout << "Scholarship not awarded" << endl;
//    }
//
//    return 0;
//}




// TASK 11




//#include <iostream>
//using namespace std;
//
//
//int main() {
//    int visitorAge;
//
//    cout << "Enter visitor age: ";
//    cin >> visitorAge;
//
//    if (visitorAge < 0) {
//        cout << "Invalid age" << endl;
//    }
//    else if (visitorAge < 5) {
//        cout << "Free entry" << endl;
//    }
//    else if (visitorAge <= 17) {
//        cout << "Child/Student ticket: Rs. 200" << endl;
//    }
//    else if (visitorAge <= 59) {
//        cout << "Adult ticket: Rs. 500" << endl;
//    }
//    else {
//        cout << "Senior ticket: Rs. 300" << endl;
//    }
//
//    return 0;
// 
// // arranged all conditions proeprly
//}
