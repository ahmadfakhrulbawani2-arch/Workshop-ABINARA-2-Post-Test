#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int tahun;
    cin >> tahun;
    
    if(tahun % 400 == 0) {
        cout << tahun << " merupakan Tahun Kabisat" << endl;
    } else if(tahun % 400 != 0 && tahun % 100 == 0) {
        cout << tahun << " bukan merupakan Tahun Kabisat" << endl;
    } else if(tahun % 400 != 0 && tahun % 100 != 0 && tahun % 4 == 0) {
        cout << tahun << " merupakan Tahun Kabisat" << endl;
    } else {
        cout << tahun << " bukan merupakan Tahun Kabisat" << endl;
    }
    return 0;
}
