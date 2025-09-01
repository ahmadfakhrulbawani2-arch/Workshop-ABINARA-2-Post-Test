#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
// remaining problem ==> 31 9 2025 should be invalid

int cekKabisat(int year) {
    
    if(year % 400 == 0) {
        return 1;
    } else if(year % 400 != 0 && year % 100 == 0) {
        return 2;
    } else if(year % 400 != 0 && year % 100 != 0 && year % 4 == 0) {
        return 1;
    } else {
        return 2;
    }
}
string zellerCogruence(int day, int month, int year) {
    int kabisat = cekKabisat(year);
    string target;
    if(kabisat == 1) {
        if((month == 2) && (day > 29)) {
            cout << "Invalid day" << endl;
        } else if(month <= 7 && (month % 2 == 0) && day > 30) {
            cout << "Invalid day" << endl;
        } else if((month == 9 || month == 11) && day > 30) {
            cout << "Invalid day" << endl;
        } else {
            if(month < 3) {
                month += 12;
                year -= 1;
            }

            int q = day;
            int m = month;
            int k = year % 100;
            int j = floor(year / 100);
            int h;
            h = q + floor((13 * (m + 1)) / 5) + k + floor(k / 4) + floor(j / 4) - (2 * j);
            h = h % 7;

            string days[] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
            target = days[h % 7];
        }
    } else if(kabisat == 2) {
        if((month == 2) && (day > 28)) {
            cout << "Invalid day" << endl;
        } else if(month <= 7 && (month % 2 == 0) && day > 30) {
            cout << "Invalid day" << endl;
        } else if((month == 9 || month == 11) && day > 30) {
            cout << "Invalid day" << endl;
        } else {
            if(month < 3) {
                month += 12;
                year -= 1;
            }

            int q = day;
            int m = month;
            int k = year % 100;
            int j = floor(year / 100);
            int h;
            h = q + floor((13 * (m + 1)) / 5) + k + floor(k / 4) + floor(j / 4) - (2 * j);
            h = h % 7;

            string days[] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
            target = days[h % 7];
        }
    }
    return target;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int day, month, year;
    cin >> day;
    cin >> month;
    cin >> year;

    // check year
    if((year < 1 || year > 9999) && !(month < 1 || month > 12) && !(day < 1 || day > 31)) {
        cout << "Invalid year" << endl;
    } else if((month < 1 || month > 12) && !(year < 1 || year > 9999) && !(day < 1 || day > 31)) {
        cout << "Invalid month" << endl;
    } else if((day < 1 || day > 31) && !(month < 1 || month > 12) && !(year < 1 || year > 9999)) {
        cout << "Invalid day" << endl;
    } else if((year < 1 || year > 9999) && (month < 1 || month > 12)) {
        cout << "Invalid year & month" << endl;
    } else if((year < 1 || year > 9999) && (day < 1 || day > 31)) {
        cout << "Invalid year & day" << endl;
    } else if((month < 1 || month > 12) && (day < 1 || day > 31)) {
        cout << "Invalid month & day" << endl;
    } else if((year < 1 || year > 9999) && (month < 1 || month > 12) && (day < 1 || day > 31)) {
        cout << "Invalid year, month & day" << endl;
    } else {
        cout << zellerCogruence(day, month, year);
    }

    return 0;
}
