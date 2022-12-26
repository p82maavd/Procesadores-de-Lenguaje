/*! 
  \file alphaNumericFunction.cpp
  \brief Code of string functions 
*/


#include <iostream>

#include <string.h>


#include "alphaNumericFunction.hpp"

// errcheck
#include "../error/error.hpp"

int GetLength(char * value)
{
  return strlen(value);
 }


char* GetNLetter(char * value, int pos)
{
  
  char * result= new char[2];
  result[0] = value[pos-1];
  result[1] = '\0';
  return result;

}








