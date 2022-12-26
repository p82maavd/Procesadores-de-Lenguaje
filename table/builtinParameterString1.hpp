/*!	
	\file    builtinParameterString1.hpp
	\brief   Declaration of BuiltinParameterString1 class
	\author  
	\date    2017-12-7
	\version 1.0
*/

#ifndef _BUILTINPARAMETERSTRING1_HPP_
#define _BUILTINPARAMETERSTRING1_HPP_

#include <string>
#include <iostream>

#include "builtin.hpp"

/*!	
	\namespace lp
	\brief Name space for the subject Language Processors
*/
namespace lp{


/*! New type definition: TypePointerDoubleFunction_1 */
typedef int (*TypePointerStringFunction_1)(char * x);


/*!	
  \class BuiltinParameter1
  \brief Definition of atributes and methods of BuiltinParameter1 class
  \note  BuiltinParameter1 Class publicly inherits from Constant class
*/
class BuiltinParameterString1:public lp::Builtin
{
/*!		
\name Private atributes of BuiltinParameter1 class
*/
	private:
        lp::TypePointerStringFunction_1 _function; //!< \brief function of the BuiltinParameter1 

/*!		
\name Public methods of BuiltinParameter1 class
*/
	public:

/*!	
	\name Constructors
*/
		
/*!		
	\brief Constructor 
	\note  Inline function that uses Constant's constructor as members initializer
	\param name: name of the BuiltinParameter1
	\param token: token of the BuiltinParameter1
	\param nParameters: número de parámetros of the BuiltinParameter1
	\param function: numeric function of the BuiltinParameter1
	\pre   None
	\post  A new BuiltinParameter1 is created with the functions of the parameters
	\sa    setFunction
*/
	inline BuiltinParameterString1(std::string name, 
							  int token, 
							  int nParameters,
						      lp::TypePointerStringFunction_1 function): 
							  Builtin(name,token,nParameters)
	{
		this->setFunction(function);
	}
		
/*!		
	\brief Copy constructor
	\note  Inline function
	\param f: object of BuiltinParameter1 class
	\pre   None
	\post  A new BuiltinParameter1 is created with the functions of an existent BuiltinParameter1
	\sa    setName, setToken,  setNParameters,  setFunction
*/
	BuiltinParameterString1(const BuiltinParameterString1 & f)
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
	\brief  Public method that returns the function of the BuiltinParameter1
	\note   Función inline
	\pre    None
	\post   None
    \return Function of the BuiltinParameter1
	\sa		getFunction
*/
	lp::TypePointerStringFunction_1 getFunction() const
	{
		return this->_function;
	}



/*!	
	\name Modifier
*/
		
/*!	
	\brief   This functions modifies the function of the BuiltinParameter1
	\note    Inline function
	\param   function: new function of the BuiltinParameter1
	\pre     None
	\post    The function of the BuiltinParameter1 is equal to the parameter 
	\return  void
	\sa 	 setFunction
*/
	inline void setFunction(const lp::TypePointerStringFunction_1 & function)
	{
	    this->_function = function;
	}


/*!	
	\name Operators
*/
	
/*!		
	\brief  Assignment Operator
	\param  f: objectoof BuiltinParameter1 class
	\post   The atributes of this object are equal to the atributes of the parameter
	\return Reference to this object
*/
	BuiltinParameterString1 &operator=(const BuiltinParameterString1 &f);
	
	
// End of BuiltinParameter1 class
};

// End of name space lp
}

// End of _BUILTINPARAMETER1_HPP_
#endif
