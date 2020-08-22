/* SPDX-License-Identifier: GPLv3-or-later */
/* Copyright (c) 2019 Project WomoLIN */
/* Author Myron Franze <myronfranze@web.de> */

#pragma once

#include "siguni/interface/ihw.h"

#include "ibirelay.h"
#include "iextrelay.h"

namespace pcsim::driver
{
	class IHal
	{
	public:
      virtual ~IHal() = default;

	   virtual siguni::interface::IControlbus &         GetHandleControlbus() = 0;

	   virtual siguni::interface::IUnitInputGetHwBoardVersion &     GetHandleUnitInputGetHwBoardVersion() = 0;
	   virtual siguni::interface::IUnitInputGetDriverVersion &      GetHandleUnitInputGetDriverVersion() = 0;

	   virtual IUnitOutputSetResetBirelayK1 &    GetHandleUnitOutputSetResetBirelayK1() = 0;
	   virtual IUnitOutputSetResetBirelayK2 &    GetHandleUnitOutputSetResetBirelayK2() = 0;
	   virtual IUnitOutputSetResetBirelayK3 &    GetHandleUnitOutputSetResetBirelayK3() = 0;
	   virtual IUnitOutputSetResetBirelayK4 &    GetHandleUnitOutputSetResetBirelayK4() = 0;

	   virtual IUnitInputGetBirelayK1 &     GetHandleUnitInputGetBirelayK1() = 0;
	   virtual IUnitInputGetBirelayK2 &     GetHandleUnitInputGetBirelayK2() = 0;
	   virtual IUnitInputGetBirelayK3 &     GetHandleUnitInputGetBirelayK3() = 0;
	   virtual IUnitInputGetBirelayK4 &     GetHandleUnitInputGetBirelayK4() = 0;

	   virtual IUnitOutputSetResetExtRelay1 &   GetHandleUnitOutputSetResetExtRelay1() = 0;
	   virtual IUnitOutputSetResetExtRelay2 &   GetHandleUnitOutputSetResetExtRelay2() = 0;
	   virtual IUnitOutputSetResetExtRelay3 &   GetHandleUnitOutputSetResetExtRelay3() = 0;
	   virtual IUnitOutputSetResetExtRelay4 &   GetHandleUnitOutputSetResetExtRelay4() = 0;
	   virtual IUnitOutputSetResetExtRelay5 &   GetHandleUnitOutputSetResetExtRelay5() = 0;
	   virtual IUnitOutputSetResetExtRelay6 &   GetHandleUnitOutputSetResetExtRelay6() = 0;
	   virtual IUnitOutputSetResetExtRelay7 &   GetHandleUnitOutputSetResetExtRelay7() = 0;
	   virtual IUnitOutputSetResetExtRelay8 &   GetHandleUnitOutputSetResetExtRelay8() = 0;

	   virtual IUnitInputGetExtRelay1 &     GetHandleUnitInputGetExtRelay1() = 0;
	   virtual IUnitInputGetExtRelay2 &     GetHandleUnitInputGetExtRelay2() = 0;
	   virtual IUnitInputGetExtRelay3 &     GetHandleUnitInputGetExtRelay3() = 0;
	   virtual IUnitInputGetExtRelay4 &     GetHandleUnitInputGetExtRelay4() = 0;
	   virtual IUnitInputGetExtRelay5 &     GetHandleUnitInputGetExtRelay5() = 0;
	   virtual IUnitInputGetExtRelay6 &     GetHandleUnitInputGetExtRelay6() = 0;
	   virtual IUnitInputGetExtRelay7 &     GetHandleUnitInputGetExtRelay7() = 0;
	   virtual IUnitInputGetExtRelay8 &     GetHandleUnitInputGetExtRelay8() = 0;

	};
}

