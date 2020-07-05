/* SPDX-License-Identifier: GPLv3-or-later */
/* Copyright (c) 2019 Project WomoLIN */
/* Author Myron Franze <myronfranze@web.de> */

#include "birelay.h"

#include <iostream>

namespace pcsim::driver
{

   void CUnitOutputSetResetK1::Set( std::string & attSetOutput, std::map<std::string_view, std::string> & /*attAdditionalSettings*/ )
   {
      std::cout << "Bi Relay K1 set output to " << attSetOutput << std::endl;
   } 
 
   void CUnitOutputSetResetK2::Set( std::string & attSetOutput, std::map<std::string_view, std::string> & /*attAdditionalSettings*/ )
   {
      std::cout << "Bi Relay K2 set output to " << attSetOutput << std::endl;
   } 

   void CUnitInputGetK1::Get( std::string & attGetInput, std::map<std::string_view, std::string> & /*attAdditionalSettings*/ )
   {
      attGetInput = "UNKNOWN";
      std::cout << "Bi Relay K1 Input :" << attGetInput << std::endl;
   } 

   void CUnitInputGetK2::Get( std::string & attGetInput, std::map<std::string_view, std::string> & /*attAdditionalSettings*/ )
   {
      attGetInput = "UNKNOWN";
      std::cout << "Bi Relay K2 Input :" << attGetInput << std::endl;
   } 

}

