// CheatLoaderV1.cpp : This file contains the 'main' function. Program execution begins and ends there.

//MIT License
//
//Copyright(c) 2022 DotTabz
//
//Permission is hereby granted, free of charge, to any person obtaining a copy
//of this softwareand associated documentation files(the "Software"), to deal
//in the Software without restriction, including without limitation the rights
//to use, copy, modify, merge, publish, distribute, sublicense, and /or sell
//copies of the Software, and to permit persons to whom the Software is
//furnished to do so, subject to the following conditions :
//
//The above copyright noticeand this permission notice shall be included in all
//copies or substantial portions of the Software.
//
//THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
//AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//SOFTWARE.

#include <Windows.h>
#include <conio.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    //UserData
    string Username;
    string Password;

    string UsernameC = "test";
    string PasswordC = "123";

    int i = 0;

    SetConsoleTitleA("Cheat Loader V1");
    system("Color 4");

    char x[10];

    std::cout << "Cheat Loader V1\n";
    cout << "------------------------" << endl;
    std::cout << "Username: ";
    std::cin >> Username;
    std::cout << "Password: ";
    for (int i = 0; i < 10; i++) {
        x[i] = _getch();
        cout << "*";

        if (x[i] == '\r')
            break;

        else if (x[i] == '\b') {

            if (i == 0)
                cout << "\b" << " " << "\b";
            else if (i >= 1) {
                x[i - 1] = '\0';
                i = i - 2;
                cout << "\b" << " " << "\b\b" << " " << "\b";
            }

        }
    }

    cout << endl << "------------------------" << endl;

    while (i != 3){

        std::cout << "\b\b\b\b\b\b\b\b\b\bLoading   " << std::flush;
        Sleep(100);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLOading   " << std::flush;
        Sleep(100);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoAding   " << std::flush;
        Sleep(100);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoaDing   " << std::flush;
        Sleep(100);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoadIng   " << std::flush;
        Sleep(100);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoadiNg   " << std::flush;
        Sleep(100);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoadinG   " << std::flush;
        Sleep(100);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoading.  " << std::flush;
        Sleep(100);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoading.." << std::flush;
        Sleep(100);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoading..." << std::flush;
        Sleep(100);
        i++;
    }

    Password = x;

    cout << endl;

    if (Username == UsernameC || Password == PasswordC)
    {
        std::cout << "Login details correct!";

        system("CLS");

        int choice;
        bool MenuOn = true;
        while (MenuOn != false) {
            cout << "------------------------\n";
            cout << " 1 - Inject cheat.\n";
            cout << " 2 - Repair.\n";
            cout << " 3 - Update.\n";
            cout << " 4 - Exit.\n";
            cout << " Enter your choice and press return: ";
            cout << endl << "------------------------\n";

            cin >> choice;

            switch (choice)
            {
            case 1:
                cout << "Injecting cheat ...\n";
                // rest of code here
                break;
            case 2:
                cout << "Repairing ...\n";
                // rest of code here
                break;
            case 3:
                cout << "Updating ...\n";
                // rest of code here
                break;
            case 4:
                cout << "End of Program ...\n";
                MenuOn = false;
                break;
            default:
                cout << "Not a Valid Choice. \n";
                cout << "Choose again.\n";
                cin >> choice;
                break;
            }

        }
        return 0;
    }
    else
    {
        std::cout << "Login details are wrong! Exiting ...";
        return 0;
    }

    return 0;
}

//MIT License
//
//Copyright(c) 2022 DotTabz
//
//Permission is hereby granted, free of charge, to any person obtaining a copy
//of this softwareand associated documentation files(the "Software"), to deal
//in the Software without restriction, including without limitation the rights
//to use, copy, modify, merge, publish, distribute, sublicense, and /or sell
//copies of the Software, and to permit persons to whom the Software is
//furnished to do so, subject to the following conditions :
//
//The above copyright noticeand this permission notice shall be included in all
//copies or substantial portions of the Software.
//
//THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
//AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//SOFTWARE.

