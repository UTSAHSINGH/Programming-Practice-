#include <bits/stdc++.h>
using namespace std;
void printPascal(int n) {
    for (int row = 1; row <= n; row++) {
      
      	// nC0 = 1
        int c = 1; 
        for (int i = 1; i <= row; i++) {

            
          	cout << c << " ";
            c = c * (row - i) / i;
        }
        cout << endl;
    }
}

int main() {
    int n = 5;
    printPascal(n);
    return 0;
}