#pragma once // Prevents the header from being included multiple times

class Calculator
{
private:
     double result;

public:
     // Constructor
     Calculator();

     // Member functions
     double add(double a, double b);
     double subtract(double a, double b);
     double getResult() const;
     void clear();
};
