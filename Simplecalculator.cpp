#include <iostream>

using namespace std;

void displayMenubutton () // function for menubutton 
 {
    cout << "Select an operation which you want to perform:" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "Enter your choice (1/2/3/4): ";
}

int main() 
  {
    double num1, num2, result; //here we take double beacuse in calculator we get decimal digit.
    int choice;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    displayMenubutton ();
    cin >> choice;
    switch(choice)
	 {
        case 1:
            result = num1 + num2;
            cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
            break;
        case 2:
            result = num1 - num2;
            cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
            break;
        case 3:
            result = num1 * num2;
            cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
            break;
        case 4:
            if (num2 != 0) 
			{
                result = num1 / num2;
                cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
            } else {
                cout << " dividing by zero gives zero value so it is not allowed." << endl;
            }
            break;
        default:
            cout << "worng choice, Please run the program again and select a right operation." << endl;
    }

    return 0;
}
