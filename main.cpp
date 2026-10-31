#include <iostream>
#include <string>

int main() {
  while (true) {
  std::string cmd;
  std::cout << "Enter command:\n";
  std::cin >> cmd;
  if (cmd=="exit") {
      return 0;
  }
  else if (cmd == "fetch") {
      std::cout << "The C++ mini terminal";
  }
  }
  return 0;
}

