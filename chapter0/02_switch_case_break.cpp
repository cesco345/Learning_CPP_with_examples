
/*
 * @topic S-0210-03-10-18 switch, case, and break
 * @brief Yes/No handled by C++ switch
*/

#include <iostream>
#include <cstdlib>

int main()
{
    char response = 'y';

    switch (response) {
    default:
        std::cout << "I'll take it as a No...\n";
        break;

    case 'Y': case 'y':
        std::cout << "you said yes\n";
        break;

    case 'N': case 'n':
        std::cout << "you said no\n";
        break;
    }//switch

    std::cout << "Press enter to continue ...";
    std::cin.get();

    return 0;
}

