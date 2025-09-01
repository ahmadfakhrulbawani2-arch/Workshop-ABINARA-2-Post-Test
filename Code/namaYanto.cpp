#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char arr[100];
    gets(arr);
    
    for(int i = 1; i <= strlen(arr); i++) {
        for(int j = strlen(arr); j > i; j--) {
            cout << " ";
        }
        for(int k = 0; k < i; k++) {
            cout << arr[k];
        }
        cout << endl;
    }

    return 0;
}