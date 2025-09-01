#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    float x;
    cin >> x;
    
    if(x < 100000) {
        cout << fixed << setprecision(2) << x << endl;
    } else if(x >= 100000 && x < 300000) {
        x = x * 0.9;
        cout << fixed << setprecision(2) << x << endl;
    } else if(x >= 300000 && x < 500000) {
        x = x * 0.8;
        cout << fixed << setprecision(2) << x << endl;
    } else if(x >= 500000) {
        x = x * 0.7;
        cout << fixed << setprecision(2) << x << endl;
    }
    
    return 0;
}
