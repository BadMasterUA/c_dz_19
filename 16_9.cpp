#include <iostream>

using namespace std;

int main()
{
    /*char ch;
    cout << "enter a phrase: ";
    while (cin.get(ch))
    {

        if (ch == '!')
            cin.putback('$');
        else
            cout << ch;
        while (cin.peek() == '#')
            cin.ignore(1, '#');

    }*/

    char text[256];
    int sizeMas = sizeof(text);
    cout << "enter a phrase: ";
    cin >> text;
    
    for(int i = 0; i < sizeMas; i++)
    {
        if (text[i] == '!')
        {
            char lit = '$';
            text[i] = lit;
        }

        if(text[i] == '#')
        {
            continue;
        }
        
        cout << text[i];
    }

    return 0;
}
////
/*enter a phrase: Now!is#the!time#for!fun#!
Now$isthe$timefor$fun$*/
