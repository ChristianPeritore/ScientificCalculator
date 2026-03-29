#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <sstream>
#include <algorithm>

using namespace std;

// Constants
const double PI = 3.14159265358979323846;

// Utility functions for base conversion
string toHex(long n) {
    stringstream ss;
    ss << hex << uppercase << n;
    return ss.str();
}

string toBin(long n) {
    if (n == 0) return "0";
    string r = "";
    while (n > 0) {
        r = (n % 2 == 0 ? "0" : "1") + r;
        n /= 2;
    }
    return r;
}

void printMenu() {
    cout << "\n--- Scientific Calculator Menu ---" << endl;
    cout << "Basic Ops: +, -, *, /" << endl;
    cout << "Advanced Ops: ^ (power), root (n-th root)" << endl;
    cout << "Functions: sin, cos, tan, asin, acos, atan, ln, log10, sqrt, %" << endl;
    cout << "Conversions: base (dec to hex/bin), conv (deg <-> rad)" << endl;
    cout << "System: mode (switch DEG/RAD), clear, menu, exit" << endl;
    cout << "----------------------------------" << endl;
}

int main() {
    string command;
    double result = 0;
    bool isRad = false;

    cout << "Scientific Calculator Initialized. Type 'menu' for commands." << endl;

    while (true) {
        cout << (isRad ? "[RAD] " : "[DEG] ") << "> ";
        cin >> command;

        // Transform command to lowercase for easier handling
        transform(command.begin(), command.end(), command.begin(), ::tolower);

        if (command == "exit") break;
        if (command == "menu") { printMenu(); continue; }
        if (command == "clear") { result = 0; cout << "Cleared." << endl; continue; }
        if (command == "mode") { 
            isRad = !isRad; 
            cout << "Mode switched to " << (isRad ? "RADIANS" : "DEGREES") << "." << endl; 
            continue; 
        }

        if (command == "base") {
            long n; cout << "Enter Decimal Number: "; cin >> n;
            cout << "HEX: " << toHex(n) << endl;
            cout << "BIN: " << toBin(n) << endl;
            continue;
        }

        if (command == "conv") {
            double n; cout << "Value to convert: "; cin >> n;
            if (isRad) cout << n << " RAD = " << n * (180.0 / PI) << " DEG" << endl;
            else cout << n << " DEG = " << n * (PI / 180.0) << " RAD" << endl;
            continue;
        }

        // Mathematical Operations
        if (command == "sin" || command == "cos" || command == "tan") {
            double n; cin >> n;
            double angle = isRad ? n : n * (PI / 180.0);
            if (command == "sin") result = sin(angle);
            else if (command == "cos") result = cos(angle);
            else if (command == "tan") result = tan(angle);
        } 
        else if (command == "sqrt") { double n; cin >> n; result = sqrt(n); }
        else if (command == "ln") { double n; cin >> n; result = log(n); }
        else if (command == "log10") { double n; cin >> n; result = log10(n); }
        else if (command == "root") {
            double base, index; 
            cout << "Base: "; cin >> base;
            cout << "Index: "; cin >> index;
            result = pow(base, 1.0/index);
        }
        else if (command == "+") { double n; cin >> n; result += n; }
        else if (command == "-") { double n; cin >> n; result -= n; }
        else if (command == "*") { double n; cin >> n; result *= n; }
        else if (command == "/") { 
            double n; cin >> n; 
            if(n != 0) result /= n; 
            else { cout << "Error: Division by zero!" << endl; continue; }
        }
        else {
            try {
                result = stod(command);
            } catch (...) {
                cout << "Invalid Command. Type 'menu' for help." << endl;
                continue;
            }
        }

        cout << "RESULT: " << fixed << setprecision(6) << result << endl;
    }

    return 0;
}