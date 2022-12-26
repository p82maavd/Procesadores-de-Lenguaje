/*!	
	\file    builtinParameterString2.cpp
	\brief   Code of some functions of BuiltinParameterString2 class
	\author 
	\date    2017-10-19
	\version 1.0
*/


#include <iostream>

// Delete the comment if you want to use atof in the operator overload >>
// #include <stdlib.h>

#include "builtinParameterString2.hpp"


/*
 Definitions of the read and write functions of the BuiltinParameterString2 class 
*/


lp::BuiltinParameterString2 &lp::BuiltinParameterString2::operator=(const lp::BuiltinParameterString2 &f)
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






