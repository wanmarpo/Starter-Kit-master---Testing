#include <iostream>
#include <fstream>
#include <string>
#include "boardSetting.cpp"
using namespace std;

void newGame()
{
    string usr;
    string usrtxt;
    fstream myFile;
    fstream myFile2;
    string line;

    cout << endl;
    cout << "Welcome new user, please enter your name." << endl;
    cout << "Enter Username ==> ";
    cin >> usr;

    usrtxt = usr + ".txt";

    myFile.open("userName.txt", ios::app); // Usr.txt to store users name
    {
        if (myFile.is_open())
        {
            myFile << usrtxt << endl;
            myFile.close();
        }
    }

    int x_axis;
    int y_axis;
    int zombie;
    myFile.open("userName.txt", ios::in);
    {
        if (myFile.is_open())
        {
            while (getline(myFile, line))
            {
                if (line == usrtxt)
                {
                    myFile2.open(usrtxt, ios::out);
                    {
                        if (myFile2.is_open())
                        {
                            changeSettings(x_axis, y_axis, zombie);
                            displayMainMenu(x_axis, y_axis, zombie);
                            myFile2 << "No of rows: " << x_axis << endl;
                            myFile2 << "No of colomn: " << y_axis << endl;
                            myFile2.close();
                            return;
                        }
                    }
                }
            }
        }
    }
}
