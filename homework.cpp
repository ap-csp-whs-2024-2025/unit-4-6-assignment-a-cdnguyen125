/**
* listhelpers.hpp has been provided by the instructor as starter code
* contains the following procedures to work with lists:
* display, append, insert, remove, length
*/
#include "listhelpers.hpp"

#include <cstdlib>   // srand, rand
#include <ctime>     // time
#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline
#include <vector>    // std::vector

void compare(int n1, int n2)
    {
        if (n1 > n2)
        {
            std::cout << n1 << " is greater than " << n2;
        }
          else 
               if (n1 < n2)
               {
                 std::cout << n1 << " is smaller than " << n2;
               }
            else
                std::cout << "the inputs are the same";
        

    }


int main()
{
    // Complete your homework here
    compare(1, 5);
    
    return 0;
}
