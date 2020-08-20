/* SPDX-License-Identifier: GPLv3-or-later */
/* Copyright (c) 2019 Project WomoLIN */
/* Author Myron Franze <myronfranze@web.de> */

#pragma once

#include "interface.h"

namespace pcsim::driver
{

	class CUnitOutputSetResetK1 : public IUnitOutputSetResetK1 
	{
	  public:
       CUnitOutputSetResetK1() = default;
		 ~CUnitOutputSetResetK1() = default;

		 void Set( std::string & attSetOutput, siguni::interface::CAdditionals & additionals ) override final;
	};

	class CUnitOutputSetResetK2 : public IUnitOutputSetResetK2 
	{
	  public:
       CUnitOutputSetResetK2() = default;
		 ~CUnitOutputSetResetK2() = default;

		 void Set( std::string & attSetOutput, siguni::interface::CAdditionals & additionals ) override final;
	};

	class CUnitOutputSetResetK3 : public IUnitOutputSetResetK3 
	{
	  public:
       CUnitOutputSetResetK3() = default;
		 ~CUnitOutputSetResetK3() = default;

		 void Set( std::string & attSetOutput, siguni::interface::CAdditionals & additionals ) override final;
	};

	class CUnitOutputSetResetK4 : public IUnitOutputSetResetK4 
	{
	  public:
       CUnitOutputSetResetK4() = default;
		 ~CUnitOutputSetResetK4() = default;

		 void Set( std::string & attSetOutput, siguni::interface::CAdditionals & additionals ) override final;
	};



	class CUnitInputGetK1 : public IUnitInputGetK1 
	{
	  public:
       CUnitInputGetK1() = default;
		 ~CUnitInputGetK1() = default;

		 void Get( std::string & attGetInput, siguni::interface::CAdditionals & additionals ) override final;
	};

	class CUnitInputGetK2 : public IUnitInputGetK2 
	{
	  public:
       CUnitInputGetK2() = default;
		 ~CUnitInputGetK2() = default;

		 void Get( std::string & attGetInput, siguni::interface::CAdditionals & additionals ) override final;
	};

	class CUnitInputGetK3 : public IUnitInputGetK3 
	{
	  public:
       CUnitInputGetK3() = default;
		 ~CUnitInputGetK3() = default;

		 void Get( std::string & attGetInput, siguni::interface::CAdditionals & additionals ) override final;
	};

	class CUnitInputGetK4 : public IUnitInputGetK4 
	{
	  public:
       CUnitInputGetK4() = default;
		 ~CUnitInputGetK4() = default;

		 void Get( std::string & attGetInput, siguni::interface::CAdditionals & additionals ) override final;
	};


}

