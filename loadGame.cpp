#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void loadGame()
{
    string usr;
    string usrtxt;
    fstream myFile;
    fstream myFile2;
    string line;
    string line2;

    cout << endl;
    cout << "Please enter username with correct letter case!" << endl;
    cout << "Enter Valid Username ==> ";
    cin >> usr;
    usrtxt = usr + ".txt";

    myFile.open("userName.txt", ios::in);
    {
        if (myFile.is_open())
        {
            while (getline(myFile, line))
            {
                if (line == usrtxt)
                {
                    myFile2.open(usrtxt, ios::in);
                    {
                        cout << endl;
                        while (getline(myFile2, line2))
                        {
                            cout << line2 << endl;
                        }
                        return;
                    }
                }
            }
        }
        if (line != usrtxt)
        {
            cout << "Username is not in the system, please enter correct username!  " << endl;
            loadGame();
        }
    }
}