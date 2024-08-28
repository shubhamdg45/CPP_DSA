/*   **  Create an array of char types and store ‘a’ to ‘z’ in it. Then print the element of the arrays.**
 *
 *
 *
 */
#include <iostream>
using namespace std;

int main() {
    // Create an array of char with 26 elements
    char alphabet[26];

    
    for (int i = 0; i < 26; i++) {
        alphabet[i] = 'a' + i;
    }

    
    for (int i = 0; i < 26; i++) {
        cout << alphabet[i] << " ";
    }

    cout << endl;
    return 0;
}

