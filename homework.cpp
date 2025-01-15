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
#include <cmath>

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
                std::cout << "the inputs are equal";
        
        
        std::cout << std::endl;
    }

void quadForm (double a, double b, double c)
{
    double posAns = (b*-1 + sqrt(b*b -(4*a*c)))/2*a;
    double negAns = (b*-1 - sqrt(b*b -(4*a*c)))/2*a;
    std::cout << "the two factors of the quadratic function " << a <<"x^2 +" << b << "x +" << c << " is: " << posAns << ", and " << negAns << std::endl;
}

void minList (std::vector<int> List)
{
    int index = 0;
    int min = List[0];
    while (index < List.size())
    {
        if (List[index] < min)
        {
            min = List[index];
        }
        index = index+1;
    }
    std::cout << "The minimum value of the list is: " << min << std::endl;
}


int main()
{
    // 1.
    int compare1;
    int compare2;
    std::cout << "type in two numbers to compare." << std::endl;
    std:: cin >> compare1 >> compare2;
    compare(compare1, compare2);
    std::cout << std::endl;

    // 2.
    double quadForm_a;
    double quadForm_b;
    double quadForm_c;
    std::cout << "type in three values for a, b, and c for the formula y = ax^2 + bx + c to find its two x values." << std::endl;
    std::cin >> quadForm_a >> quadForm_b >> quadForm_c; 
    quadForm(quadForm_a, quadForm_b, quadForm_c);
    std::cout << std::endl;

    //3. 
    std::vector <int> listA = {1, 2, 3};
    std::vector <int> listB = {4, 5, 6};
    std::vector <int> listC = {7, 8, 9};
    minList(listA);
    minList(listB);
    minList(listC);

    return 0;
}
