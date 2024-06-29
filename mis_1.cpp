#include<iostream>

using namespace std;

int main()
{
    string name;

    cout << "Enter your name: "; // cout
    cin >> name; // cin
    cout << "Yoer name: " << name << endl;
    cerr << "Erorr 404\n"; // cerr
    clog << "Erorr buffer full!\n"; // clog

    return 0;
}