#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    char choice;
    int num1, num2;
    int n;
    int* array;
    int sum, product;
    double quotient;
    bool exit = false;

    while (!exit)
    {
        cout << "CALCULATOR:" << endl;
        cout << "1. ADDITION" << endl;
        cout << "2. SUBTRACTION" << endl;
        cout << "3. MULTIPLICATION" << endl;
        cout << "4. DIVISION" << endl;
        cout << "5. CLEAR SCREEN" << endl;
        cout << "6. EXIT" << endl;
        cout << "COMMAND: ";
        cin >> choice;

        switch (choice)
        {
            case '1':
                cout << "Enter the size of the array: ";
                cin >> n;
                array = new int[n];
                cout << "Enter the array elements: ";
                for (int i = 0; i < n; i++)
                {
                    cin >> array[i];
                }
                sum = 0;
                for (int i = 0; i < n; i++)
                {
                    sum += array[i];
                }
                cout << "The sum of the array is: " << sum << endl;
                delete[] array;
                break;
            case '2':
                cout << "Enter two integers: ";
                cin >> num1 >> num2;
                cout << "The difference of the two integers is: " << num1 - num2 << endl;
                break;
            case '3':
                cout << "Enter the size of the array: ";
                cin >> n;
                array = new int[n];
                cout << "Enter the array elements: ";
                for (int i = 0; i < n; i++)
                {
                    cin >> array[i];
                }
                product = 1;
                for (int i = 0; i < n; i++)
                {
                    product *= array[i];
                }
                cout << "The product of the array is: " << product << endl;
                delete[] array;
                break;
            case '4':
                cout << "Enter two integers: ";
                cin >> num1 >> num2;
                if (num2 == 0)
                {
                    cout << "Error: cannot divide by zero." << endl;
                    break;
                }
                quotient = (double)num1 / num2;
                cout << "The quotient of the two integers is: " << quotient << endl;
                break;
            case 5:
                system("CLS");
                break;
            case 6:
                exit = true;
                break;
            default:
                cout << "Error: invalid option." << endl;
        }
    }

    return 0;
}
