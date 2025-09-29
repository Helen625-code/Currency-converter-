#include <iostream>
#include <string>
using namespace std;

// Function to display currency menu 
void currencyMenu() {
    cout << "Select the currency you want to convert to PKR:" << endl;
    cout << "1. USD (US Dollar)" << endl;
    cout << "2. EUR (Euro)" << endl;
    cout << "3. GBP (British Pound)" << endl;
    cout << "4. INR (Indian Rupee)" << endl;
    cout << "5. SAR (Saudi Riyal)" << endl;
    cout << "6. AED (UAE Dirham)" << endl;
    cout << "7. CNY (Chinese Yuan)" << endl;
    cout << "8. JPY (Japanese Yen)" << endl;
    cout << "9. BTC (Bitcoin)" << endl;
    cout << "10. ETH (Ethereum)" << endl;
    cout << "11. Pi (Pi Network)" << endl;
}

int main() {
    int choice;
    double amount, pkr;
    char again;

    // ===== Module 1: Header Display =====
    cout << "===== C++ Program for Currency Converter =====" << endl << endl;
    cout << "Group Members:\n" << "Mesum\n" << "Kamran\n" << "Humaira\n"
         << "Masuma\n" << "Masuma Ibrahim\n" << "Urooj\n" << endl;

    // ===== Main Loop =====
    do {
        cout << endl;

        // ===== Module 2: User Input =====
        do {
            currencyMenu();
            cout << "Enter your choice (1 to 11): ";
            cin >> choice;

            if (cin.fail()) {
                cin.clear();
                cin.ignore(10000, '\n');
                cout << "Invalid input. Please enter a number between 1 to 11.\n\n";
                choice = -1;
            } else if (choice < 1 || choice > 11) {
                cout << "Invalid choice. Please choose between 1 to 11.\n\n";
            }

        } while (choice < 1 || choice > 11);

        cout << "Enter the amount you want to convert: ";
        cin >> amount;

        // ===== Module 3: Currency Conversion Logic =====
        switch (choice) {
            case 1: pkr = amount * 282.08; cout << amount << " USD = " << pkr << " PKR" << endl; break;
            case 2: pkr = amount * 321.6;  cout << amount << " EUR = " << pkr << " PKR" << endl; break;
            case 3: pkr = amount * 381.7;  cout << amount << " GBP = " << pkr << " PKR" << endl; break;
            case 4: pkr = amount * 3.29;   cout << amount << " INR = " << pkr << " PKR" << endl; break;
            case 5: pkr = amount * 75.22;  cout << amount << " SAR = " << pkr << " PKR" << endl; break;
            case 6: pkr = amount * 76.81;  cout << amount << " AED = " << pkr << " PKR" << endl; break;
            case 7: pkr = amount * 39.23;  cout << amount << " CNY = " << pkr << " PKR" << endl; break;
            case 8: pkr = amount * 1.95;   cout << amount << " JPY = " << pkr << " PKR" << endl; break;
            case 9: pkr = amount * 29780000.0; cout << amount << " BTC = " << pkr << " PKR" << endl; break;
            case 10: pkr = amount * 709000.0;  cout << amount << " ETH = " << pkr << " PKR" << endl; break;
            case 11: pkr = amount * 177.0;     cout << amount << " Pi = " << pkr << " PKR" << endl; break;
            default: cout << "Invalid choice. Please choose between 1 to 11." << endl; break;
        }

        // ===== Ask User to Run Again =====
        cout << "Do you want to convert another amount? (Y/N): ";
        cin >> again;

        while (cin.fail() || (again != 'Y' && again != 'y' && again != 'N' && again != 'n')) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input. Please enter Y or N: ";
            cin >> again;
        }

    } while (again == 'Y' || again == 'y');

    cout << "Thank you for using the currency converter. Goodbye!" << endl;

    return 0;
}

