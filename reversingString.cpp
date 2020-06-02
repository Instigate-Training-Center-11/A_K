#include <iostream>

int main() {		
    std::string original;
    std::cin >> original;
	
    int len = original.length();
    int n = len - 1;

    /*swap symbols of the string */
    for (int i = 0; i < (len / 2); i++) {
        char temp = original[i];
        original[i] = original[n];
        original[n] = temp;
        n = n - 1;
    }
    std::cout << original << std::endl;
}

