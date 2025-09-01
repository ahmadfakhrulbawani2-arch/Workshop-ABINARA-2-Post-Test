#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >> n;
    
    int arr[n];
    for(int i = 0; i < n; i++)  {
        cin >> arr[i];
    }
    
    int x;
    cin >> x;
    
    int y = -1;
    for(int i = 0; i < n; i++) {
        if(arr[i] == x) {
            y = i;
            break;
        }
    }
    
    if(y == -1) {
        cout << "Alamak, Angkanya Gaada!" << endl;
    } else {
        cout << "Angka ditemukan pada index ke-" << y << endl;
    }
    
    return 0;
}
