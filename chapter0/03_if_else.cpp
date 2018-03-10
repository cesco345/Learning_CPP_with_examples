
/*
 * @topic S-0210-03-10-18 if-else
 * @brief Yes/No handled by C++ if-else
*/

#include <iostream>
#include <cstdlib>

int main()
{
    char response = 'y';

    if ( response == 'Y' || response == 'y' ) {
        std::cout << "you said yes\n";

    } else if ( response == 'N' || response == 'n' ) {
        std::cout << "you said no\n";

    } else {
        std::cout << "I'll take it as a No...\n";
    }

    std::cout << "Press enter to continue ...";
    std::cin.get();

    return 0;
}

