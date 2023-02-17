/**
 * @file example.cpp
 * @brief An example implementation file for documenting code with Doxygen
 *
 * This file provides an example of how to use Doxygen-style comments to document
 * your code.
 */

#include <iostream>

/**
 * @class MyClass
 * @brief A simple example class
 *
 * This class demonstrates how to document a class and its members with Doxygen.
 */
class MyClass {
 public:
  /**
   * @brief Constructor for MyClass
   *
   * This constructor the object of MyClass.
   */
  MyClass();

  /**
   * @brief Prints a message to the console
   *
   * This function prints a message to the console.
   */
  void PrintMessage();
};

MyClass::MyClass() {}

void MyClass::PrintMessage() {
  std::cout << "Hello, World!" << std::endl;
}

int main() {
  MyClass my_object;
  my_object.PrintMessage();
  return 0;
}
