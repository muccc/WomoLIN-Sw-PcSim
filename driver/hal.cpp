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
      , UnitOutputSetResetK1()
      , UnitOutputSetResetK2()
      , UnitOutputSetResetK3()
      , UnitOutputSetResetK4()
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

	IUnitOutputSetResetK1 & CHal::GetHandleUnitOutputSetResetK1() { return UnitOutputSetResetK1; }
	IUnitOutputSetResetK2 & CHal::GetHandleUnitOutputSetResetK2() { return UnitOutputSetResetK2; }
	IUnitOutputSetResetK3 & CHal::GetHandleUnitOutputSetResetK3() { return UnitOutputSetResetK3; }
	IUnitOutputSetResetK4 & CHal::GetHandleUnitOutputSetResetK4() { return UnitOutputSetResetK4; }

	IUnitInputGetK1 & CHal::GetHandleUnitInputGetK1() { return UnitInputGetK1; }
	IUnitInputGetK2 & CHal::GetHandleUnitInputGetK2() { return UnitInputGetK2; }
	IUnitInputGetK3 & CHal::GetHandleUnitInputGetK3() { return UnitInputGetK3; }
	IUnitInputGetK4 & CHal::GetHandleUnitInputGetK4() { return UnitInputGetK4; }


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

