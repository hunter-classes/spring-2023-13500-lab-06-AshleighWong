#include "caesar.h"
#include "decrypt.h"
#include "vigenere.h"
#include <iostream>

std::string decryptCaesar(std::string ciphertext, int rshift) 
{
  return encryptCaesar(ciphertext, 26 - rshift);
}

int charIndex(char c) 
{
  int ascii = (int)c;
  if ((isupper(c))) 
  {
    ascii -= (int)'A';
  } 
  else 
  {
    ascii -= (int)'a';
  }
  return ascii % 26;
}

std::string decryptVigenere(std::string plaintext, std::string keyword) 
{
  std::string result = "";
  int i = -1;
  int index = -1;

  while (plaintext[++i]) 
  {
    if (!isalpha(plaintext[i])) 
    {
      result = result + plaintext[i];
    } 
    else 
    {
    result = result + shiftChar(plaintext[i], -charIndex(keyword[++index % keyword.length()]));
    }
  }
  return result;
}