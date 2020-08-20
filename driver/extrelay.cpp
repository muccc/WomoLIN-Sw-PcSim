/* SPDX-License-Identifier: GPLv3-or-later */
/* Copyright (c) 2019 Project WomoLIN */
/* Author Myron Franze <myronfranze@web.de> */

#include "extrelay.h"

#include <iostream>

namespace pcsim::driver
{

   void CUnitOutputSetResetExtRelay1::Set( std::string & attSetOutput, siguni::interface::CAdditionals & /*attAdditionals*/ )
   {
      std::cout << "ExtRelay1 set output to " << attSetOutput << std::endl;
   } 
 
   void CUnitOutputSetResetExtRelay2::Set( std::string & attSetOutput, siguni::interface::CAdditionals & /*attAdditionals*/ )
   {
      std::cout << "ExtRelay2 set output to " << attSetOutput << std::endl;
   } 

   void CUnitOutputSetResetExtRelay3::Set( std::string & attSetOutput, siguni::interface::CAdditionals & /*attAdditionals*/ )
   {
      std::cout << "ExtRelay3 set output to " << attSetOutput << std::endl;
   } 

   void CUnitOutputSetResetExtRelay4::Set( std::string & attSetOutput, siguni::interface::CAdditionals & /*attAdditionals*/ )
   {
      std::cout << "ExtRelay4 set output to " << attSetOutput << std::endl;
   } 

   void CUnitOutputSetResetExtRelay5::Set( std::string & attSetOutput, siguni::interface::CAdditionals & /*attAdditionals*/ )
   {
      std::cout << "ExtRelay5 set output to " << attSetOutput << std::endl;
   } 

   void CUnitOutputSetResetExtRelay6::Set( std::string & attSetOutput, siguni::interface::CAdditionals & /*attAdditionals*/ )
   {
      std::cout << "ExtRelay6 set output to " << attSetOutput << std::endl;
   } 

   void CUnitOutputSetResetExtRelay7::Set( std::string & attSetOutput, siguni::interface::CAdditionals & /*attAdditionals*/ )
   {
      std::cout << "ExtRelay7 set output to " << attSetOutput << std::endl;
   } 

   void CUnitOutputSetResetExtRelay8::Set( std::string & attSetOutput, siguni::interface::CAdditionals & /*attAdditionals*/ )
   {
      std::cout << "ExtRelay8 set output to " << attSetOutput << std::endl;
   } 



   void CUnitInputGetExtRelay1::Get( std::string & attGetInput, siguni::interface::CAdditionals & /*attAdditionals*/ )
   {
      attGetInput = "UNKNOWN";
      std::cout << "ExtRelay1 Input :" << attGetInput << std::endl;
   } 

   void CUnitInputGetExtRelay2::Get( std::string & attGetInput, siguni::interface::CAdditionals & /*attAdditionals*/ )
   {
      attGetInput = "UNKNOWN";
      std::cout << "ExtRelay2 Input :" << attGetInput << std::endl;
   } 

   void CUnitInputGetExtRelay3::Get( std::string & attGetInput, siguni::interface::CAdditionals & /*attAdditionals*/ )
   {
      attGetInput = "UNKNOWN";
      std::cout << "ExtRelay3 Input :" << attGetInput << std::endl;
   } 

   void CUnitInputGetExtRelay4::Get( std::string & attGetInput, siguni::interface::CAdditionals & /*attAdditionals*/ )
   {
      attGetInput = "UNKNOWN";
      std::cout << "ExtRelay4 Input :" << attGetInput << std::endl;
   } 

   void CUnitInputGetExtRelay5::Get( std::string & attGetInput, siguni::interface::CAdditionals & /*attAdditionals*/ )
   {
      attGetInput = "UNKNOWN";
      std::cout << "ExtRelay5 Input :" << attGetInput << std::endl;
   } 

   void CUnitInputGetExtRelay6::Get( std::string & attGetInput, siguni::interface::CAdditionals & /*attAdditionals*/ )
   {
      attGetInput = "UNKNOWN";
      std::cout << "ExtRelay6 Input :" << attGetInput << std::endl;
   } 

   void CUnitInputGetExtRelay7::Get( std::string & attGetInput, siguni::interface::CAdditionals & /*attAdditionals*/ )
   {
      attGetInput = "UNKNOWN";
      std::cout << "ExtRelay7 Input :" << attGetInput << std::endl;
   } 

   void CUnitInputGetExtRelay8::Get( std::string & attGetInput, siguni::interface::CAdditionals & /*attAdditionals*/ )
   {
      attGetInput = "UNKNOWN";
      std::cout << "ExtRelay8 Input :" << attGetInput << std::endl;
   } 

}

