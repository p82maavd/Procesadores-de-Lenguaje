/*!	
	\file    builtinParameterString1.cpp
	\brief   Code of some functions of BuiltinParameterString1 class
	\author 
	\date    2017-10-19
	\version 1.0
*/


#include <iostream>

// Delete the comment if you want to use atof in the operator overload >>
// #include <stdlib.h>

#include "builtinParameterString1.hpp"


lp::BuiltinParameterString1 &lp::BuiltinParameterString1::operator=(const lp::BuiltinParameterString1 &f)
  {
 	// Check that is not the current object
		if (this != &f) 
		{
			// Inherited methods
			this->setName(f.getName());

			this->setToken(f.getToken());

			this->setNParameters(f.getNParameters());

			// Own method
			this->setFunction(f.getFunction());
		}

    // Return the current object
		return *this;
  }






