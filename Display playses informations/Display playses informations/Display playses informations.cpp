

#include <iostream>
using namespace std;

int main()
{
    cout << "player 1 \n";

    int number;
    cout << "Enter Registration number : " << endl;
    cin >> number; 
    cout << "Registration number is: "<< number <<endl;

    string firstName;
    cout << "Enter First name: "<< endl;
    cin >> firstName;
    cout << "First name is: " << firstName << endl;

    string lastName;
    cout << "Enter last name: " << endl;
    cin >> lastName;
    cout << "Last name is: " << lastName << endl;

    double birthday;
    cout << "Entar birthDate: " << endl;
    cin >> birthday;
    cout << "Date of birth: " << birthday << endl;

    int runscored;
    cout << "Player run scored: " << endl;
    cin >> runscored;
    cout << firstName << " Run Scored is: "<< runscored << endl;
    return 0;

}


