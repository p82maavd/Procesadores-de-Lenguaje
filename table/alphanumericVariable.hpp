/*!	
	\file    numericVariable.hpp
	\brief   Declaration of NumericVariable class
	\author  
	\date    2017-12-1
	\version 1.0
*/

#ifndef _ALPHANUMERICVARIABLE_HPP_
#define _ALPHANUMERICVARIABLE_HPP_

#include <string>
#include <string.h>
#include <iostream>
#include <stdlib.h>

#include "variable.hpp"

/*!	
	\namespace lp
	\brief Name space for the subject Language Processors
*/
namespace lp{

/*!	
  \class NumericVariable
  \brief Definition of atributes and methods of NumericVariable class
  \note  NumericVariable Class publicly inherits from Variable class
*/
class AlphaNumericVariable:public lp::Variable
{
/*!		
\name Private atributes of NumericVariable class
*/
	private:
		char*      _value;   //!< \brief Numeric value of the NumericVariable

/*!		
\name Public methods of NumericVariable class
*/
	public:

/*!	
	\name Constructors
*/
		
/*!		
	\brief Constructor with arguments with default values
	\note  Inline function that uses Variable's constructor as members initializer
	\param name: name of the NumericVariable
	\param token: token of the NumericVariable
	\param type: type of the NumericVariable
	\param value: numeric value of the NumericVariable
	\pre   None
	\post  A new NumericVariable is created with the values of the parameters
	\sa   setName, setValue
*/
	inline AlphaNumericVariable(std::string name="", int token = 0, int type = 0, std::string value=""): 
 	Variable(name,token,type)
	{
		
		char * cadena = new char[value.length()+1];
		strcpy(cadena,value.c_str());
		this->setValue(cadena);
		
	}
		
/*!		
	\brief Copy constructor
	\note  Inline function
	\param n: object of NumericVariable class
	\pre   None
	\post  A new NumericVariable is created with the values of an existent NumericVariable
	\sa    setName, setValue
*/
	AlphaNumericVariable(const AlphaNumericVariable & n)
	{
		// Inherited methods
		this->setName(n.getName());

		this->setToken(n.getToken());

		this->setType(n.getType());
		
		// Own method
		this->setValue(n.getValue());

		
	}


/*!	
	\name Observer
*/
	
/*!	
	\brief  Public method that returns the value of the AlphaNumericVariable
	\note   Función inline
	\pre    None
	\post   None
    \return Value of the NumericVariable
	\sa		getValue
*/
	inline char* getValue() const
	{
		return this->_value;
	}

/*!	
	\brief  Public method that returns the length of the AlphaNumericVariable value
	\note   Función inline
	\pre    None
	\post   None
    \return Value of the AlphaNumericVariable
	\sa		getLength
*/
	inline int getLength() const
	{
		return strlen(this->_value);
	}

/*!	
	\brief  Public method that returns the n letter of the AlphaNumericVariable value
	\note   Función inline
	\pre    None
	\post   None
    \return N letter of the AlphaNumericVariable
	\sa		getNLetter
*/
	inline char getNLetter(int posicion) const
	{
		return (this->_value)[posicion];
	}


/*!	
	\name Modifier
*/
		
/*!	
	\brief   This functions modifies the value of the NumericVariable
	\note    Inline function
	\param   value: new value of the NumericVariable
	\pre     None
	\post    The value of the NumericVariable is equal to the parameter 
	\return  void
	\sa 	 setValue
*/
	inline void setValue(char* value)
	{
	    this->_value = value;
	}



		
/*!	
	\name I/O Functions
*/
		
/*!		
	\brief Read a NumericVariable
	\pre   None
	\post  The atributes of the NumericVariable are modified with the read values
    \sa    write
*/
	void read();

	
/*!		
	\brief Write a NumericVariable
	\pre   None
	\post  None
    \sa    read
*/
	void write() const;


/*!	
	\name Operators
*/
	
/*!		
	\brief  Assignment Operator
	\param  n: objectoof NumericVariable class
	\post   The atributes of this object are equal to the atributes of the parameter
	\return Reference to this object
*/
	AlphaNumericVariable &operator=(const AlphaNumericVariable &n);
	

 //! \name Friend functions
/*!		
	\brief  Insertion operator
	\param  i: input stream
	\param  n: object of NumericVariable class
	\pre    nome
	\post   The atributes of the NumericVariable are modified with the inserted values from the input stream
	\return The input stream
*/
	friend std::istream &operator>>(std::istream &i, AlphaNumericVariable &n);

/*!		
	\brief  Extraction operator
	\param  o: output stream
	\param  n: object of NumericVariable class
	\pre    nome
	\post   The atributes of the NumericVariable are written in the output stream
	\return The output stream
*/
	friend std::ostream &operator<<(std::ostream &o, AlphaNumericVariable const &n);
	
// End of NumericVariable class
};

// End of name space lp
}

// End of _NUMERICVARIABLE_HPP_
#endif
