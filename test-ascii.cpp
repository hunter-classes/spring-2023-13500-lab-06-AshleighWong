#include <iostream>
#include <string>
#include <cctype>

int main () 
{
  std::string text;
  std::cout << "Input: ";
  std::getline(std::cin,text);

  for (int i = 0; i < text.length(); i++)
  {
    std::cout << (char)text[i] << " " << (int)text[i] << "\n";
  }
  return 0;
}