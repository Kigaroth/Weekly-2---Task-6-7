/* Weekly 2 - Task 6+7.cpp
Make a program that asks the user what grade they want in Programming 1.
If the answer is A, write "Outstanding".
If the answer is B, write "Very good".
If the answer is C, write "Good".
If the answer is D, write "Some flaws".
If the answer is E, write "Not very good...".
If the answer is F, write "Fail".
If the answer is something else, write "That is not a grade!". (Use switch - case)
Update task 7 to accept both capital and lower case letters.Both 'A' and ‘a’, etc.are valid answers(use char as the variable type).
*/

#include <iostream>
#include <string>

using namespace std;
char grade;
bool proper_grade;

int main()
{
    do { 
        proper_grade = true;

        std::cout << std::endl;
            
        std::cout << "Please enter the grade you want in Programming 1:  ";
        std::cin >> grade;
        std::cout << std::endl;

    //using ascii value of letters for the cases//
 
    switch ((int)grade) {
        
        //Grade A//
        case 65:
        case 97:
           std::cout << "Outstanding." << std::endl;
           break;

        //Grade B//
        case 66:
        case 98:
            std::cout << "Very good." << std::endl;
            break;

        //Grade C//
        case 67:
        case 99:
            std::cout << "Good." << std::endl;
            break;

        //Grade D//
        case 68:
        case 100:
            std::cout << "Some flaws." << std::endl;
            break;

         //Grade E//
        case 69:
        case 101:
            std::cout << "Not very good..." << std::endl;
            break;
   
        //Grade F//
        case 70:
        case 102:
            std::cout << "Fail." << std::endl;
            break;

        default:
            system("CLS");
            std::cout << "That is not a grade! Try again!" << std::endl;
            proper_grade = false;
        }
    } while (proper_grade == false);
}
