/* SPDX-License-Identifier: GPLv3-or-later */
/* Copyright (c) 2019 Project WomoLIN */
/* Author Myron Franze <myronfranze@web.de> */

#pragma once

#include "interface.h"

#include "version.h"
#include "controlbus.h"
#include "birelay.h"
#include "extrelay.h"


namespace pcsim::driver
{

	class CHal : public IHal
	{
	public:
       CHal();
	    ~CHal() = default;
	    siguni::interface::IControlbus &          GetHandleControlbus() override final;

	    siguni::interface::IUnitInputGetHwBoardVersion &     GetHandleUnitInputGetHwBoardVersion() override final;
	    siguni::interface::IUnitInputGetDriverVersion &      GetHandleUnitInputGetDriverVersion() override final;

	    IUnitOutputSetResetK1 &    GetHandleUnitOutputSetResetK1() override final;
	    IUnitOutputSetResetK2 &    GetHandleUnitOutputSetResetK2() override final;
	    IUnitOutputSetResetK3 &    GetHandleUnitOutputSetResetK3() override final;
	    IUnitOutputSetResetK4 &    GetHandleUnitOutputSetResetK4() override final;

	    IUnitInputGetK1 &     GetHandleUnitInputGetK1() override final;
	    IUnitInputGetK2 &     GetHandleUnitInputGetK2() override final;
	    IUnitInputGetK3 &     GetHandleUnitInputGetK3() override final;
	    IUnitInputGetK4 &     GetHandleUnitInputGetK4() override final;

	    IUnitOutputSetResetExtRelay1 &    GetHandleUnitOutputSetResetExtRelay1() override final;
	    IUnitOutputSetResetExtRelay2 &    GetHandleUnitOutputSetResetExtRelay2() override final;
	    IUnitOutputSetResetExtRelay3 &    GetHandleUnitOutputSetResetExtRelay3() override final;
	    IUnitOutputSetResetExtRelay4 &    GetHandleUnitOutputSetResetExtRelay4() override final;
	    IUnitOutputSetResetExtRelay5 &    GetHandleUnitOutputSetResetExtRelay5() override final;
	    IUnitOutputSetResetExtRelay6 &    GetHandleUnitOutputSetResetExtRelay6() override final;
	    IUnitOutputSetResetExtRelay7 &    GetHandleUnitOutputSetResetExtRelay7() override final;
	    IUnitOutputSetResetExtRelay8 &    GetHandleUnitOutputSetResetExtRelay8() override final;

	    IUnitInputGetExtRelay1 &     GetHandleUnitInputGetExtRelay1() override final;
	    IUnitInputGetExtRelay2 &     GetHandleUnitInputGetExtRelay2() override final;
	    IUnitInputGetExtRelay3 &     GetHandleUnitInputGetExtRelay3() override final;
	    IUnitInputGetExtRelay4 &     GetHandleUnitInputGetExtRelay4() override final;
	    IUnitInputGetExtRelay5 &     GetHandleUnitInputGetExtRelay5() override final;
	    IUnitInputGetExtRelay6 &     GetHandleUnitInputGetExtRelay6() override final;
	    IUnitInputGetExtRelay7 &     GetHandleUnitInputGetExtRelay7() override final;
	    IUnitInputGetExtRelay8 &     GetHandleUnitInputGetExtRelay8() override final;

   private:
       CControlbus                   Controlbus; 

	    CUnitInputGetHwBoardVersion   UnitInputGetHwBoardVersion;
	    CUnitInputGetDriverVersion    UnitInputGetDriverVersion;

       CUnitOutputSetResetK1         UnitOutputSetResetK1; 
       CUnitOutputSetResetK2         UnitOutputSetResetK2; 
       CUnitOutputSetResetK3         UnitOutputSetResetK3; 
       CUnitOutputSetResetK4         UnitOutputSetResetK4; 

       CUnitInputGetK1               UnitInputGetK1; 
       CUnitInputGetK2               UnitInputGetK2; 
       CUnitInputGetK3               UnitInputGetK3; 
       CUnitInputGetK4               UnitInputGetK4; 

       CUnitOutputSetResetExtRelay1         UnitOutputSetResetExtRelay1; 
       CUnitOutputSetResetExtRelay2         UnitOutputSetResetExtRelay2; 
       CUnitOutputSetResetExtRelay3         UnitOutputSetResetExtRelay3; 
       CUnitOutputSetResetExtRelay4         UnitOutputSetResetExtRelay4; 
       CUnitOutputSetResetExtRelay5         UnitOutputSetResetExtRelay5; 
       CUnitOutputSetResetExtRelay6         UnitOutputSetResetExtRelay6; 
       CUnitOutputSetResetExtRelay7         UnitOutputSetResetExtRelay7; 
       CUnitOutputSetResetExtRelay8         UnitOutputSetResetExtRelay8; 

       CUnitInputGetExtRelay1               UnitInputGetExtRelay1; 
       CUnitInputGetExtRelay2               UnitInputGetExtRelay2; 
       CUnitInputGetExtRelay3               UnitInputGetExtRelay3; 
       CUnitInputGetExtRelay4               UnitInputGetExtRelay4; 
       CUnitInputGetExtRelay5               UnitInputGetExtRelay5; 
       CUnitInputGetExtRelay6               UnitInputGetExtRelay6; 
       CUnitInputGetExtRelay7               UnitInputGetExtRelay7; 
       CUnitInputGetExtRelay8               UnitInputGetExtRelay8; 
	};
}

