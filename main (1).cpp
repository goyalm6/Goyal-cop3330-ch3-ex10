/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Mayank Goyal
 */
 
#include <iostream>
#include <string>

using namespace std;

int main()
{

  try
  {

    string oper;

    double v1 = 0;

    double v2 = 0;

    cout << "Please enter an operation (+, -, *, /, plus, minus, mul, div) followed by two floating-point values separated by a space: ";


    while(cin >> oper >> v1 >> v2) 

    {

      double res = 0;

      if (oper == "plus" || oper == "+")

      {

        res = v1+v2;

      }

      else if (oper == "minus" || oper == "-") 

      {

        res = v1-v2;

      }

      else if (oper == "mul" || oper == "*") 

      {

        res = v1*v2;

      }

      else if (oper == "div" || oper == "/") 

      {

        if (v2 == 0) cout << "trying to divide by zero";

        res = v1/v2;

      }

      else cout << "sorry: bad operator: " << oper;



      cout << v1 << oper << v2 << " == " << res <<'\n';

      cout << "Please try again: ";

    }

      cout << "exit because of bad input\n";

  }

  catch (runtime_error e) 
  {

    cout << e.what() << '\n';

  }
}