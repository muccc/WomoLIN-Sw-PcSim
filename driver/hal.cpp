/* SPDX-License-Identifier: GPLv3-or-later */
/* Copyright (c) 2019 Project WomoLIN */
/* Author Myron Franze <myronfranze@web.de> */

#include "hal.h"

#include <iostream>

namespace pcsim::driver
{

   CHal::CHal()
      : Controlbus()
      , UnitInputGetHwBoardVersion()
      , UnitInputGetDriverVersion()
      , UnitOutputSetResetBirelayK1()
      , UnitOutputSetResetBirelayK2()
      , UnitOutputSetResetBirelayK3()
      , UnitOutputSetResetBirelayK4()
      , UnitInputGetBirelayK1()
      , UnitInputGetBirelayK2()
      , UnitInputGetBirelayK3()
      , UnitInputGetBirelayK4()
      , UnitOutputSetResetExtRelay1()
      , UnitOutputSetResetExtRelay2()
      , UnitOutputSetResetExtRelay3()
      , UnitOutputSetResetExtRelay4()
      , UnitOutputSetResetExtRelay5()
      , UnitOutputSetResetExtRelay6()
      , UnitOutputSetResetExtRelay7()
      , UnitOutputSetResetExtRelay8()
      , UnitInputGetExtRelay1()
      , UnitInputGetExtRelay2()
      , UnitInputGetExtRelay3()
      , UnitInputGetExtRelay4()
      , UnitInputGetExtRelay5()
      , UnitInputGetExtRelay6()
      , UnitInputGetExtRelay7()
      , UnitInputGetExtRelay8()

   {
   }

   siguni::interface::IControlbus & CHal::GetHandleControlbus() { return Controlbus; }

	siguni::interface::IUnitInputGetHwBoardVersion & CHal::GetHandleUnitInputGetHwBoardVersion() { return UnitInputGetHwBoardVersion; }

	siguni::interface::IUnitInputGetDriverVersion & CHal::GetHandleUnitInputGetDriverVersion() { return UnitInputGetDriverVersion; }

	IUnitOutputSetResetBirelayK1 & CHal::GetHandleUnitOutputSetResetBirelayK1() { return UnitOutputSetResetBirelayK1; }
	IUnitOutputSetResetBirelayK2 & CHal::GetHandleUnitOutputSetResetBirelayK2() { return UnitOutputSetResetBirelayK2; }
	IUnitOutputSetResetBirelayK3 & CHal::GetHandleUnitOutputSetResetBirelayK3() { return UnitOutputSetResetBirelayK3; }
	IUnitOutputSetResetBirelayK4 & CHal::GetHandleUnitOutputSetResetBirelayK4() { return UnitOutputSetResetBirelayK4; }

	IUnitInputGetBirelayK1 & CHal::GetHandleUnitInputGetBirelayK1() { return UnitInputGetBirelayK1; }
	IUnitInputGetBirelayK2 & CHal::GetHandleUnitInputGetBirelayK2() { return UnitInputGetBirelayK2; }
	IUnitInputGetBirelayK3 & CHal::GetHandleUnitInputGetBirelayK3() { return UnitInputGetBirelayK3; }
	IUnitInputGetBirelayK4 & CHal::GetHandleUnitInputGetBirelayK4() { return UnitInputGetBirelayK4; }


	IUnitOutputSetResetExtRelay1 & CHal::GetHandleUnitOutputSetResetExtRelay1() { return UnitOutputSetResetExtRelay1; }
	IUnitOutputSetResetExtRelay2 & CHal::GetHandleUnitOutputSetResetExtRelay2() { return UnitOutputSetResetExtRelay2; }
	IUnitOutputSetResetExtRelay3 & CHal::GetHandleUnitOutputSetResetExtRelay3() { return UnitOutputSetResetExtRelay3; }
	IUnitOutputSetResetExtRelay4 & CHal::GetHandleUnitOutputSetResetExtRelay4() { return UnitOutputSetResetExtRelay4; }
	IUnitOutputSetResetExtRelay5 & CHal::GetHandleUnitOutputSetResetExtRelay5() { return UnitOutputSetResetExtRelay5; }
	IUnitOutputSetResetExtRelay6 & CHal::GetHandleUnitOutputSetResetExtRelay6() { return UnitOutputSetResetExtRelay6; }
	IUnitOutputSetResetExtRelay7 & CHal::GetHandleUnitOutputSetResetExtRelay7() { return UnitOutputSetResetExtRelay7; }
	IUnitOutputSetResetExtRelay8 & CHal::GetHandleUnitOutputSetResetExtRelay8() { return UnitOutputSetResetExtRelay8; }

	IUnitInputGetExtRelay1 & CHal::GetHandleUnitInputGetExtRelay1() { return UnitInputGetExtRelay1; }
	IUnitInputGetExtRelay2 & CHal::GetHandleUnitInputGetExtRelay2() { return UnitInputGetExtRelay2; }
	IUnitInputGetExtRelay3 & CHal::GetHandleUnitInputGetExtRelay3() { return UnitInputGetExtRelay3; }
	IUnitInputGetExtRelay4 & CHal::GetHandleUnitInputGetExtRelay4() { return UnitInputGetExtRelay4; }
	IUnitInputGetExtRelay5 & CHal::GetHandleUnitInputGetExtRelay5() { return UnitInputGetExtRelay5; }
	IUnitInputGetExtRelay6 & CHal::GetHandleUnitInputGetExtRelay6() { return UnitInputGetExtRelay6; }
	IUnitInputGetExtRelay7 & CHal::GetHandleUnitInputGetExtRelay7() { return UnitInputGetExtRelay7; }
	IUnitInputGetExtRelay8 & CHal::GetHandleUnitInputGetExtRelay8() { return UnitInputGetExtRelay8; }

}

