#include <iostream>

int main()
{

    /* declaring variables for input number, loops horizontal, vertically steps and spaces) */
    int n, i, j, space;
    char ch = '*';

    std::cout << "Enter n: ";
    std::cin >> n;

    /* loop for moving in lines */
    for (i = n; i >= 1; i--) {

        /* loop to put space in pyramid */
        for (space = i; space < n; space++) {
            std::cout << " ";
        }
        /* loop to print symbol in pyramid */
        for (j = 1; j <= 2 * i - 1; j++) {
            if (i == n || j == 1 || j == 2 * i - 1) {
                std::cout << ch;
            }
            else {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }
    return 0;
}
