/* SPDX-License-Identifier: GPLv3-or-later */
/* Copyright (c) 2019 Project WomoLIN */
/* Author Myron Franze <myronfranze@web.de> */

#include "birelay.h"

#include <iostream>

namespace pcsim::driver
{

   void CUnitOutputSetResetBirelayK1::Set( std::string & attSetOutput, siguni::interface::CAdditionals & /*attAdditionals*/ )
   {
      std::cout << "Bi Relay K1 set output to " << attSetOutput << std::endl;
   } 
 
   void CUnitOutputSetResetBirelayK2::Set( std::string & attSetOutput, siguni::interface::CAdditionals & /*attAdditionals*/ )
   {
      std::cout << "Bi Relay K2 set output to " << attSetOutput << std::endl;
   } 

   void CUnitOutputSetResetBirelayK3::Set( std::string & attSetOutput, siguni::interface::CAdditionals & /*attAdditionals*/ )
   {
      std::cout << "Bi Relay K3 set output to " << attSetOutput << std::endl;
   } 

   void CUnitOutputSetResetBirelayK4::Set( std::string & attSetOutput, siguni::interface::CAdditionals & /*attAdditionals*/ )
   {
      std::cout << "Bi Relay K4 set output to " << attSetOutput << std::endl;
   } 


   void CUnitInputGetBirelayK1::Get( std::string & attGetInput, siguni::interface::CAdditionals & /*attAdditionals*/ )
   {
      attGetInput = "UNKNOWN";
      std::cout << "Bi Relay K1 Input :" << attGetInput << std::endl;
   } 

   void CUnitInputGetBirelayK2::Get( std::string & attGetInput, siguni::interface::CAdditionals & /*attAdditionals*/ )
   {
      attGetInput = "UNKNOWN";
      std::cout << "Bi Relay K2 Input :" << attGetInput << std::endl;
   } 

   void CUnitInputGetBirelayK3::Get( std::string & attGetInput, siguni::interface::CAdditionals & /*attAdditionals*/ )
   {
      attGetInput = "UNKNOWN";
      std::cout << "Bi Relay K3 Input :" << attGetInput << std::endl;
   } 

   void CUnitInputGetBirelayK4::Get( std::string & attGetInput, siguni::interface::CAdditionals & /*attAdditionals*/ )
   {
      attGetInput = "UNKNOWN";
      std::cout << "Bi Relay K4 Input :" << attGetInput << std::endl;
   } 

}

