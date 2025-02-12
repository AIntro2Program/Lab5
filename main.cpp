#include <iostream>

using namespace std;

int main() {
    // //Problem 1.1
    // for (int i = 1; i <= 10; i++) {
    //     cout << i << " ";
    // }
    // cout << endl;
    //
    // //Problem 1.2
    // int n_number;
    // cout << "Enter a number: "; cin >> n_number;
    // for (int i = 1; i <= n_number; i++) {
    //     cout << i << " ";
    // }
    // cout << endl;
    //
    // //Problem 1.3
    // int sum = 0;
    // for (int i = 1; i <= 10; i++) {
    //     sum += i;
    // }
    // cout << "The sum of first 10 natural numbers is: " << sum << endl;
    //
    // //Problem 1.4
    // int n_number2;
    // int sum_2 = 0;
    // cout << "Enter a number: "; cin >> n_number2;
    // for (int i = 1; i <= n_number2; i++) {
    //     sum_2 += i;
    // }
    // cout << "The sum of first natural numbers is to the N number is: " << sum_2 << endl;
    //
    // //Problem 1.5
    // int sum_3 = 0;
    // for (int i = 1; i <= 10; i++) {
    //     sum_3 += i;
    // }
    // cout << "The average of 10 numbers is: " << sum_3/10 << endl;
    //
    // //Problem 1.6
    // int n_number3;
    // cout << "Enter a number: "; cin >> n_number3;
    // int sum_4 = 0;
    // for (int i = 1; i <= n_number3; i++) {
    //     sum_4 += i;
    // }
    // cout << "The average of 10 numbers is: " << sum_4/n_number3 << endl;
    //
    // //Problem 2.1
    // for (int i = 1; i <= 10; i++) {
    //     if (i % 2 == 0) {
    //         cout << i << " ";
    //     }
    //
    // }
    // cout << endl;
    //
    // //Problem 2.2
    // for (int i = 1; i <= 10; i++) {
    //     if (i % 2 != 0) {
    //         cout << i << " ";
    //     }
    // }
    // cout << endl;
    //
    // //Problem 2.3
    // int odd_number;
    // cout << "Enter a number: "; cin >> odd_number;
    // for (int i = 1; i <= odd_number; i++) {
    //     if (i % 2 == 0) {
    //         cout << i << " ";
    //     }
    // }
    // cout << endl;
    //
    // //Problem 2.4
    // int even_number;
    // cout << "Enter a number: "; cin >> even_number;
    // for (int i = 1; i <= 10; i++) {
    //     if (i % 2 != 0) {
    //         cout << i << " ";
    //     }
    // }
    // cout << endl;
    //
    // //Problem 2.5
    // for (int i = 1; i <= 100; i++) {
    //     if (i % 10 == 0) {
    //         cout << i << " ";
    //     }
    // } cout << endl;
    //
    // //Problem 2.6
    // int to_hundred;
    // cout << "Enter a number: "; cin >> to_hundred;
    // for (int i = 1; i <= to_hundred; i++) {
    //     if (i % 10 == 0) {
    //         cout << i << " ";
    //     }
    // } cout << endl;
    //
    //
    // Problem 3
    // int counter = 0;
    // for (char i = 'A'; i <= 'Z'; i++) {
    //     cout << i << " ";
    //     counter++;
    //     if (counter % 5 == 0) {
    //         cout << endl;
    //     }
    // }
    // if (counter % 5 != 0) {
    //     cout << endl;
    // }

    // //Problem 4
    // int f_number;
    // int numbers_sum = 1;
    // cout << "Enter a number: "; cin >> f_number;
    // if (f_number < 0) {
    //     cout << "Error, positive number should be entered" << endl;
    // } else {
    //     for (int i = 1; i <= f_number; i++) {
    //         numbers_sum *= i;
    //     }
    //     cout << f_number << "! = " << numbers_sum << endl;
    // // }
    //
    // //Problem 5
    // int number_of_classes;
    // cout << "Enter number of classes: "; cin >> number_of_classes;
    // float total_QualityPoints = 0;
    // float total_credits = 0;
    //
    // for (int i = 0; i < number_of_classes; i++) {
    //     float credits, mark;
    //     cout << "Enter total credits: "; cin >> credits;
    //     cout << "Enter marks for class: "; cin >> mark;
    //
    //     total_QualityPoints += (mark*credits);
    //     total_credits += credits;
    // }
    // double overallGPA = 0.0;
    // if (total_credits > 0) {
    //     overallGPA = total_QualityPoints / total_credits;
    // }
    // cout << "\nYour total GPA on a 4.5 scale is: " << overallGPA << endl;

    // //Problem 6
    // int number_of_classes1, number_of_students;
    // cout << "Enter number of students: "; cin >> number_of_students;
    // cout << "Enter number of classes: "; cin >> number_of_classes1;
    // float total_QualityPoints1 = 0;
    // float total_credits1 = 0;
    //
    // for (int i = 1; i < number_of_students; i++) {
    //     cout << "Student #" << i << ": ";
    //     for (int i = 1; i < number_of_classes1; i++) {
    //         float credits, mark;
    //         cout << "Enter total credits: "; cin >> credits;
    //         cout << "Enter marks for class: "; cin >> mark;
    //
    //         total_QualityPoints1 += (mark*credits);
    //         total_credits1 += credits;
    //     }
    //
    // }
    // double overallGPA1 = 0.0;
    // if (total_credits1 > 0) {
    //     overallGPA1 = total_QualityPoints1 / total_credits1;
    // }
    // cout << "\nYour total GPA on a 4.5 scale is: " << overallGPA1 << endl;
    // //
    // //Problem 7
    // int square;
    // cout << "Enter a number: "; cin >> square;
    // for (int i = 1; i <= square; i++) {
    //     for (int j = 1; j <= square; j++) {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    //
    // //Problem 8
    // int triangle;
    // cout << "Enter the number of triangles: "; cin >> triangle;
    // for (int i = 1; i <= triangle; i++) {
    //     for (int j = 1; j <= i; j++) {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    //
    //
    // //Problem 9
    // int prime_number;
    // cout << "Enter a number: "; cin >> prime_number;
    // if (prime_number < 0) {
    //     cout << "Invalid input" << endl;
    // }
    // bool isPrime = true;
    //     for (int i = 2; i * i <= prime_number; i++) {
    //         if (prime_number % i == 0) {
    //             isPrime = false;
    //             break;
    //             }
    //         }
    // if (isPrime == true) {
    //     cout << prime_number << " is a prime number" << endl;
    // }
    // else {
    //     cout << prime_number << " is not a prime number" << endl;
    // }

    // //Problem 10
    //
    // int number_of_numbers;
    // int sum = 0;
    // int sum_of_squares = 0;
    // cout << "Enter number: " ;cin >> number_of_numbers;
    // for (int i = 1; i <= number_of_numbers; i++) {
    //     cout << i << "*" << i << " = " << i*i << endl;
    //     sum_of_squares = i*i;
    //     sum += sum_of_squares;
    // }
    // cout << sum << endl;
    //
    //Problem 11







    // //Problem SWITCH
    // int number_a, number_b, option;
    //
    // cout << "Please enter number a: "; cin >> number_a;
    // cout << "Please enter number b: "; cin >> number_b;
    // cout << "Please choose one of the options: \n (1) for addition (a+b) \n (2) for addition (a-b) \n (3) for multiplication (a*b) \n (4) for devision (a/b)\n " << endl; cin >> option;
    // switch (option) {
    //     case 1: cout << number_a + number_b << endl;
    //     case 2: cout << number_a - number_b << endl;
    //     case 3: cout << number_a * number_b << endl;
    //     case 4: cout << number_a / number_b << endl;
    //     default: cout << "You entered wrong option!";
    // }
    //





    return 0;
}