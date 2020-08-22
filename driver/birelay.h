/* SPDX-License-Identifier: GPLv3-or-later */
/* Copyright (c) 2019 Project WomoLIN */
/* Author Myron Franze <myronfranze@web.de> */

#pragma once

#include "interface.h"

namespace pcsim::driver
{

	class CUnitOutputSetResetBirelayK1 : public IUnitOutputSetResetBirelayK1 
	{
	  public:
       CUnitOutputSetResetBirelayK1() = default;
		 ~CUnitOutputSetResetBirelayK1() = default;

		 void Set( std::string & attSetOutput, siguni::interface::CAdditionals & additionals ) override final;
	};

	class CUnitOutputSetResetBirelayK2 : public IUnitOutputSetResetBirelayK2 
	{
	  public:
       CUnitOutputSetResetBirelayK2() = default;
		 ~CUnitOutputSetResetBirelayK2() = default;

		 void Set( std::string & attSetOutput, siguni::interface::CAdditionals & additionals ) override final;
	};

	class CUnitOutputSetResetBirelayK3 : public IUnitOutputSetResetBirelayK3 
	{
	  public:
       CUnitOutputSetResetBirelayK3() = default;
		 ~CUnitOutputSetResetBirelayK3() = default;

		 void Set( std::string & attSetOutput, siguni::interface::CAdditionals & additionals ) override final;
	};

	class CUnitOutputSetResetBirelayK4 : public IUnitOutputSetResetBirelayK4 
	{
	  public:
       CUnitOutputSetResetBirelayK4() = default;
		 ~CUnitOutputSetResetBirelayK4() = default;

		 void Set( std::string & attSetOutput, siguni::interface::CAdditionals & additionals ) override final;
	};



	class CUnitInputGetBirelayK1 : public IUnitInputGetBirelayK1 
	{
	  public:
       CUnitInputGetBirelayK1() = default;
		 ~CUnitInputGetBirelayK1() = default;

		 void Get( std::string & attGetInput, siguni::interface::CAdditionals & additionals ) override final;
	};

	class CUnitInputGetBirelayK2 : public IUnitInputGetBirelayK2 
	{
	  public:
       CUnitInputGetBirelayK2() = default;
		 ~CUnitInputGetBirelayK2() = default;

		 void Get( std::string & attGetInput, siguni::interface::CAdditionals & additionals ) override final;
	};

	class CUnitInputGetBirelayK3 : public IUnitInputGetBirelayK3 
	{
	  public:
       CUnitInputGetBirelayK3() = default;
		 ~CUnitInputGetBirelayK3() = default;

		 void Get( std::string & attGetInput, siguni::interface::CAdditionals & additionals ) override final;
	};

	class CUnitInputGetBirelayK4 : public IUnitInputGetBirelayK4 
	{
	  public:
       CUnitInputGetBirelayK4() = default;
		 ~CUnitInputGetBirelayK4() = default;

		 void Get( std::string & attGetInput, siguni::interface::CAdditionals & additionals ) override final;
	};


}

