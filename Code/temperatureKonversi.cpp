#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    float c;
    cin >> c;
    float r, f, k;
    
    r = (0.8) * c;
    cout << fixed << setprecision(2) << r << endl;
    
    k = c + 273.15;
    cout << k << endl;
    
    f = (1.8 * c) + 32;
    cout << fixed << setprecision(2) << f << endl;
    
    return 0;
}
