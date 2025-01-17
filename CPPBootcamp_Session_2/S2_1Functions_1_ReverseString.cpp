#include <iostream>
#include <string>

using namespace std;
void reverseString(string &str) {
    char *start = &str[0];
    char *end = &str[str.length() - 1]; 
    
    // Swap characters from start and end until pointers meet
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        
        start++;  // Move start pointer forward
        end--;    // Move end pointer backward
    }
}

int main() {
    string str = "Hello, World!";
    cout << "Original string: " << str << endl;
    reverseString(str);
    cout << "Reversed string: " << str << endl;
    return 0;
}
