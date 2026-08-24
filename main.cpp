#include <iostream>  // including output/input header
#include <memory>    // including dynamic memory header

int main() {  // making 'body' of code
  int a;   // declaring a as int variable
  std::cin >> a;  // making user type the value of a
  std::unique_ptr<int> memoryInt = std::make_unique<int>(a);  //making smart pointer to borrow RAM to use it as varibale 'a' storage
  std::cout << "adress:\n " << memoryInt.get() << std::endl << "value:\n " << *memoryInt << std::endl;  // output of adress and the value of variable 'a'
  return 0; // returning a good siganl
}  // closing int main() function
// all done!
