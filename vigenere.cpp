#include "vigenere.h"
#include "caesar.h"
#include <iostream>

std::string encryptVigenere(std::string plaintext, std::string keyword) 
{
  std::string result;
  for (int i = 0; i < plaintext.length(); i++) 
  {
    result += shiftChar(plaintext[i], (int(keyword[i % keyword.length()]) - 97));
  }
  return result;
}