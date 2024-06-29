#include<iostream>

using namespace std;

int main()
{
    string FirstName, LastName; // переменные для хранения имени и фамилии
    cout << "Enter first name and last name: ";
    cin >> FirstName >> LastName;
    cout << "Full name: " << FirstName << " " << LastName;

    return 0;
}