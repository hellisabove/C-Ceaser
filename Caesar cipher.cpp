#include <iostream>
using namespace std;
int i, x,y;
int main()
{
    char y[100];

    cout << "Welcome to Caesar Cipher" << endl;
    cout << endl;
    cout << endl;
CIPHER:
    cout << "Please choose following options:" << endl;
    cout << "1 = Encrypt the string.\n";
    cout << "2 = Decrypt the string.\n";
    cin >> x;

    //using switch case statements
    switch (x)
    {
        //first case for encrypting a string
    case 1:
        cout << "Please Input string" << endl;
        cin >> y;
        for (i = 0; (i < 100 && y[i] != '\0'); i++)
            y[i] = y[i] + 2; //the key for encryption is 3 that is added to ASCII value

        cout << "\nEncrypted string: " << y << endl;
        break;

        //second case for decrypting a string
    case 2:
        cout << "Please Input string" << endl;
        cin >> y;
        for (i = 0; (i < 100 && y[i] != '\0'); i++)
            y[i] = y[i] - 2; //the key for encryption is 3 that is subtracted to ASCII value

        cout << "Decrypted string: " << y << endl;
        break;

    default:
        cout << "Invalid Input !!!";
        system("CLS");
        goto CIPHER;
    }
    return 0;
}