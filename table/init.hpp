/*!	
	\file   init.hpp
	\brief   Prototype of the function for the initialization of table of symbols
	\author  
	\date    2017-12-5
	\version 1.0
*/

#ifndef _INIT_HPP_
#define _INIT_HPP_

// sin, cos, atan, fabs, ...
#include <math.h>

#include "table.hpp"

// IMPORTANT: This file must be before y.tab.h
#include "../ast/ast.hpp"
///////////////////////////////////////

//  interpreter.tab.h contains the number values of the tokens produced by the parser
#include "../parser/interpreter.tab.h"

///////////////////////////////////////
// NEW in example 13
#include "mathFunction.hpp"
#include "alphaNumericFunction.hpp"

#include "builtinParameter0.hpp"
#include "builtinParameter1.hpp"
#include "builtinParameter2.hpp"

#include "builtinParameterString1.hpp"
#include "builtinParameterString2.hpp"
///////////////////////////////////////

/*!
  \ brief Predefined numeric constants
*/
static struct {
          std::string name ;
	      double value;
	      } numericConstant[] = {
	                    {"pi",    3.14159265358979323846},
	                    {"e",     2.71828182845904523536},
	                    {"gamma", 0.57721566490153286060},
	                    {"deg",  57.29577951308232087680},
	                    {"phi",   1.61803398874989484820},
	                    {"",      0}
	                   };

/*!
  \ brief Predefined logical constants
*/
// NEW in example 16
static struct {
          std::string name ;
	      bool value;
	      } logicalConstant[] = { 
	                    {"verdadero", true},
	                    {"falso", false},
	                    {"",      0}
	                   };


/*!
  \ brief Predefined keywords
*/
static struct {
          std::string name ;
	      int token;
	      } keyword[] = { 
	                    {"escribir", PRINT},
	                    {"escribir_cadena", PRINT_STRING},
	                    {"leer",  READ},
	                    {"leer_cadena",  READ_STRING},

						//Sentencia Condicional
						{"si",	  IF},   	
						{"entonces",	  THEN},   	
						{"si_no",  ELSE}, 	
						{"fin_si",  ENDIF}, 	

						//Sentencia de bucle Mientras
						{"mientras", WHILE},	
						{"hacer", DO},	
						{"fin_mientras", ENDWHILE},	

						//Sentencia de bucle Repetir
						{"repetir", REPEAT},	
						{"hasta", TILL},	

						//Sentencia de bucle Para
						{"para", FOR},	
						{"desde", FROM},	
						{"paso", STEP},	
						{"fin_para", ENDFOR},	

						//Sentencia de Selección Multiple
						//{"segun", SWITCH},	
						//{"valor", VALUES},	
						//{"defecto", DEFAULT},	
						//{"fin_segun", ENDSWITCH},	

						//Macros
						{"borrar_pantalla", CLEAR},	
						{"lugar",PLACE},
	                    {"",      0}
	                   };



// NEW in example 13

static struct {    /* Predefined functions names */ 
                std::string name ;
				lp::TypePointerDoubleFunction_1 function;
              } function_1 [] = {
	                   {"sin",     sin},
		               {"cos",     cos},
		               {"atan",    atan},
		               {"log",     Log},
		               {"log10",   Log10},
		               {"exp",     Exp},
		               {"sqrt",    Sqrt},
		               {"integer", integer},
		               {"abs",     fabs},
		               {"",       0}
		              };

// NEW in example 14
static struct {   
                std::string name ;
				lp::TypePointerDoubleFunction_0 function;
              } function_0 [] = {
						{"random", Random},
		                {"",       0}
		              };


// NEW in example 14

static struct {    /* Nombres predefinidos de funciones con 2 argumentos */ 
                std::string name ;
				lp::TypePointerDoubleFunction_2 function;
              } function_2 [] = {
	                   {"atan2",   Atan2},
		               {"",       0}
		              };

static struct {    /* Predefined functions names */ 
                std::string name ;
				lp::TypePointerStringFunction_1 function;
              } function_3 [] = {
					   {"getlength", GetLength},   
		               {"",       0}
		              };

static struct {    /* Predefined functions names */ 
                std::string name ;
				lp::TypePointerStringFunction_2 function;
              } function_4 [] = {
					   {"getnletter", GetNLetter},   
		               {"",       0}
		              };







/*!		
	\brief   Initialize the table of symbols
	\return  void 
*/

void init(lp::Table &t);

// End of _INIT_HPP_
#endif
