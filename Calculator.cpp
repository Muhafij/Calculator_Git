#include "Calculator.h"

// Constructor implementation
Calculator::Calculator()
{
     result = 0.0;
}

// Add implementation
double Calculator::add(double a, double b)
{
     result = a + b;
     return result;
}

// Subtract implementation
double Calculator::subtract(double a, double b)
{
     result = a - b;
     return result;
}

// Getter implementation
double Calculator::getResult() const
{
     return result;
}

// Clear implementation
void Calculator::clear()
{
     result = 0.0;
}
