/*! 
  \file alphaNumericFunction.hpp
  \brief Prototypes of strings functions 
*/

#ifndef _ALPHANUMERICFUNCTION_HPP_
#define _ALPHANUMERICFUNCTION_HPP_

#include <string>

/////////////////////////////////
/*!	
	\brief   Get the length of a string.
	\param	 value: char *
	\return  int
	\sa		 
*/
int GetLength(char * value);


////////////////////////////////

/*!	
	\brief   Get the n letter of a string
	\param	 value: char *
	\param	 pos: int
	\return  char *
	\sa		 
*/
char* GetNLetter(char * value, int pos);

#endif
