#include <iostream>
#include <vector>


int main () {
  const std::vector<char> letters = {'H','L','P','A'};

  int a = 72;
  char b = a;
  for (size_t i = 0; i < letters.size(); i++)
  {
  std::cout << "[]" << letters[i] << std::endl;
    /* code */
  }
  
}