/* SPDX-License-Identifier: GPLv3-or-later */
/* Copyright (c) 2019 Project WomoLIN */
/* Author Myron Franze <myronfranze@web.de> */

#pragma once

#include "siguni/interface/iunit.h"

namespace pcsim::driver
{

	class IUnitOutputSetResetK1 : public siguni::interface::IUnitOutput 
	{
	  public:
		 virtual ~IUnitOutputSetResetK1() = default;

		 void Set( std::string & attSetOutput, std::map<std::string_view, std::string> & attAdditionalSettings ) override = 0;
	};

	class IUnitOutputSetResetK2 : public siguni::interface::IUnitOutput 
	{
	  public:
		 virtual ~IUnitOutputSetResetK2() = default;

		 void Set( std::string & attSetOutput, std::map<std::string_view, std::string> & attAdditionalSettings ) override = 0;
	};

	class IUnitInputGetK1 : public siguni::interface::IUnitInput
	{
	  public:
		 virtual ~IUnitInputGetK1() = default;

		 void Get( std::string & attGetInput, std::map<std::string_view, std::string> & attAdditionalSettings ) override = 0;
	};

	class IUnitInputGetK2 : public siguni::interface::IUnitInput
	{
	  public:
		 virtual ~IUnitInputGetK2() = default;

		 void Get( std::string & attGetInput, std::map<std::string_view, std::string> & attAdditionalSettings ) override = 0;
	};



}

