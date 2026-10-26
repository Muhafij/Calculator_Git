#include <iostream>
#include "Calculator.h" // Include your custom header using double quotes

int main()
{
     Calculator calc;

     std::cout << "Adding 5 + 3: " << calc.add(5, 3) << std::endl;
     std::cout << "Current Result: " << calc.getResult() << std::endl;

     std::cout << "Subtracting 10 from current: " << calc.subtract(calc.getResult(), 10) << std::endl;

     return 0;
}
