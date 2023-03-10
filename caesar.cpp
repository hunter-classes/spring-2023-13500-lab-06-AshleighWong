#include "caesar.h"
#include <iostream>

char shiftChar(char c, int rshift) 
{
  if (isalpha(c)) 
  {

    if (c <= 'Z') 
    {

      if (c + rshift > 'Z') 
      {
        rshift -= ('Z' - c) + 1;
        c = shiftChar('A', rshift);
      } else 
      {
        c += rshift;
      }

    } 
    else 
    {
      if (c + rshift > 'z') 
      {
        rshift -= ('z' - c) + 1;
        c = shiftChar('a', rshift);
      } 
      else 
      {
        c += rshift;
      }
    }
  }

  return c;
}

std::string encryptCaesar(std::string plaintext, int rshift) {

  std::string encrypted;
  for (int i = 0; i < plaintext.size(); i++) {
    encrypted += shiftChar(plaintext[i], rshift);
  }
  return encrypted;
}