/*!	
	\file    builtinParameterString2.hpp
	\brief   Declaration of BuiltinParameterString2 class
	\author  
	\date    2017-12-7
	\version 1.0
*/

#ifndef _BUILTIN2PARAMETERSSTRING_HPP_
#define _BUILTIN2PARAMETERSSTRING_HPP_

#include <string>
#include <iostream>

#include "builtin.hpp"

/*!	
	\namespace lp
	\brief Name space for the subject Language Processors
*/
namespace lp{


/*! New type definition: TypePointerDoubleFunction_2 */
typedef char* (*TypePointerStringFunction_2)(char* value, int pos);



/*!	
  \class BuiltinParameterString2
  \brief Definition of atributes and methods of BuiltinParameterString2 class
  \note  BuiltinParameterString2 Class publicly inherits from Constant class
*/
class BuiltinParameterString2:public lp::Builtin
{
/*!		
\name Private atributes of BuiltinParameterString2 class
*/
	private:
        lp::TypePointerStringFunction_2 _function; //!< \brief function of the BuiltinParameterString2 

/*!		
\name Public methods of BuiltinParameterString2 class
*/
	public:

/*!	
	\name Constructors
*/
		
/*!		
	\brief Constructor 
	\note  Inline function that uses Constant's constructor as members initializer
	\param name: name of the BuiltinParameterString2
	\param token: token of the BuiltinParameterString2
	\param nParameters: number of parameters of the BuiltinParameterString2
	\param function: numeric function of the BuiltinParameterString2
	\pre   None
	\post  A new BuiltinParameterString2 is created with the functions of the parameters
	\sa    setFunction
*/
	inline BuiltinParameterString2(std::string name, 
							  int token, 
							  int nParameters,
						      lp::TypePointerStringFunction_2 function): 
							  Builtin(name,token,nParameters)
	{
		this->setFunction(function);
	}
		
/*!		
	\brief Copy constructor
	\note  Inline function
	\param f: object of BuiltinParameterString2 class
	\pre   None
	\post  A new BuiltinParameterString2 is created with the functions of an existent BuiltinParameterString2
	\sa    setName, setToken,  setNParameters,  setFunction
*/
	BuiltinParameterString2(const BuiltinParameterString2 & f)
	{
		// Inherited methods
		this->setName(f.getName());

		this->setToken(f.getToken());

		this->setNParameters(f.getNParameters());
		
		// Own method
		this->setFunction(f.getFunction());
	}


/*!	
	\name Observer
*/
	
/*!	
	\brief  Public method that returns the function of the BuiltinParameterString2
	\note   Función inline
	\pre    None
	\post   None
    \return Function of the BuiltinParameterString2
	\sa		getFunction
*/
	lp::TypePointerStringFunction_2 getFunction() const
	{
		return this->_function;
	}



/*!	
	\name Modifier
*/
		
/*!	
	\brief   This functions modifies the function of the BuiltinParameterString2
	\note    Inline function
	\param   function: new function of the BuiltinParameterString2
	\pre     None
	\post    The function of the BuiltinParameterString2 is equal to the parameter 
	\return  void
	\sa 	 setFunction
*/
	inline void setFunction(const lp::TypePointerStringFunction_2 & function)
	{
	    this->_function = function;
	}



/*!	
	\name Operators
*/
	
/*!		
	\brief  Assignment Operator
	\param  f: objectoof BuiltinParameterString2 class
	\post   The atributes of this object are equal to the atributes of the parameter
	\return Reference to this object
*/
	BuiltinParameterString2 &operator=(const BuiltinParameterString2 &f);
	
	
// End of BuiltinParameterString2 class
};

// End of name space lp
}

// End of _BUILTIN2PARAMETERSSTRING_HPP_
#endif
