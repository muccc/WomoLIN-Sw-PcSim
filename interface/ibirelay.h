/* SPDX-License-Identifier: GPLv3-or-later */
/* Copyright (c) 2019 Project WomoLIN */
/* Author Myron Franze <myronfranze@web.de> */

#pragma once

#include "siguni/interface/iunit.h"

namespace pcsim::driver
{

   // outputs

	class IUnitOutputSetResetK1 : public siguni::interface::IUnitOutput 
	{
	  public:
		 virtual ~IUnitOutputSetResetK1() = default;

		 void Set( std::string & attSetOutput, siguni::interface::CAdditionals & additionals ) override = 0;
	};

	class IUnitOutputSetResetK2 : public siguni::interface::IUnitOutput 
	{
	  public:
		 virtual ~IUnitOutputSetResetK2() = default;

		 void Set( std::string & attSetOutput, siguni::interface::CAdditionals & additionals ) override = 0;
	};

	class IUnitOutputSetResetK3 : public siguni::interface::IUnitOutput 
	{
	  public:
		 virtual ~IUnitOutputSetResetK3() = default;

		 void Set( std::string & attSetOutput, siguni::interface::CAdditionals & additionals ) override = 0;
	};

	class IUnitOutputSetResetK4 : public siguni::interface::IUnitOutput 
	{
	  public:
		 virtual ~IUnitOutputSetResetK4() = default;

		 void Set( std::string & attSetOutput, siguni::interface::CAdditionals & additionals ) override = 0;
	};


   // inputs

	class IUnitInputGetBirelayK1 : public siguni::interface::IUnitInput
	{
	  public:
		 virtual ~IUnitInputGetBirelayK1() = default;

		 void Get( std::string & attGetInput, siguni::interface::CAdditionals & additionals ) override = 0;
	};

	class IUnitInputGetBirelayK2 : public siguni::interface::IUnitInput
	{
	  public:
		 virtual ~IUnitInputGetBirelayK2() = default;

		 void Get( std::string & attGetInput, siguni::interface::CAdditionals & additionals ) override = 0;
	};

	class IUnitInputGetBirelayK3 : public siguni::interface::IUnitInput
	{
	  public:
		 virtual ~IUnitInputGetBirelayK3() = default;

		 void Get( std::string & attGetInput, siguni::interface::CAdditionals & additionals ) override = 0;
	};

	class IUnitInputGetBirelayK4 : public siguni::interface::IUnitInput
	{
	  public:
		 virtual ~IUnitInputGetBirelayK4() = default;

		 void Get( std::string & attGetInput, siguni::interface::CAdditionals & additionals ) override = 0;
	};



}

