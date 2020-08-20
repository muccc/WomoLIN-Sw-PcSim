/* SPDX-License-Identifier: GPLv3-or-later */
/* Copyright (c) 2019 Project WomoLIN */
/* Author Myron Franze <myronfranze@web.de> */

#pragma once

#include "siguni/managerbase.h"
#include "siguni/signal.h"
#include "siguni/unit.h"

#include "driver/hal.h"
#include "driver/birelay.h"
#include "driver/controlbus.h"

namespace pcsim
{

   class CManager 
      : public driver::CHal
      , public siguni::CManagerBase 
   {
      public:
         CManager();
         ~CManager() = default;

      private:

         // units versions 
         siguni::CUnitInput         UnitInputGetHwBoardVersion { GetHandleUnitInputGetHwBoardVersion() } ; 
         siguni::CUnitInput         UnitInputGetDriverVersion { GetHandleUnitInputGetDriverVersion() } ; 
 
         // units birelays Kx 
         siguni::CUnitOutput        UnitOutputSetResetK1 { GetHandleUnitOutputSetResetK1() } ; 
         siguni::CUnitOutput        UnitOutputSetResetK2 { GetHandleUnitOutputSetResetK2() } ; 
         siguni::CUnitOutput        UnitOutputSetResetK3 { GetHandleUnitOutputSetResetK3() } ; 
         siguni::CUnitOutput        UnitOutputSetResetK4 { GetHandleUnitOutputSetResetK4() } ; 

         siguni::CUnitInput         UnitInputGetK1 { GetHandleUnitInputGetK1() } ; 
         siguni::CUnitInput         UnitInputGetK2 { GetHandleUnitInputGetK2() } ; 
         siguni::CUnitInput         UnitInputGetK3 { GetHandleUnitInputGetK3() } ; 
         siguni::CUnitInput         UnitInputGetK4 { GetHandleUnitInputGetK4() } ; 

         // units external relays  
         siguni::CUnitOutput        UnitOutputSetResetExtRelay1 { GetHandleUnitOutputSetResetExtRelay1() } ; 
         siguni::CUnitOutput        UnitOutputSetResetExtRelay2 { GetHandleUnitOutputSetResetExtRelay2() } ; 
         siguni::CUnitOutput        UnitOutputSetResetExtRelay3 { GetHandleUnitOutputSetResetExtRelay3() } ; 
         siguni::CUnitOutput        UnitOutputSetResetExtRelay4 { GetHandleUnitOutputSetResetExtRelay4() } ; 
         siguni::CUnitOutput        UnitOutputSetResetExtRelay5 { GetHandleUnitOutputSetResetExtRelay5() } ; 
         siguni::CUnitOutput        UnitOutputSetResetExtRelay6 { GetHandleUnitOutputSetResetExtRelay6() } ; 
         siguni::CUnitOutput        UnitOutputSetResetExtRelay7 { GetHandleUnitOutputSetResetExtRelay7() } ; 
         siguni::CUnitOutput        UnitOutputSetResetExtRelay8 { GetHandleUnitOutputSetResetExtRelay8() } ; 

         siguni::CUnitInput         UnitInputGetExtRelay1 { GetHandleUnitInputGetExtRelay1() } ; 
         siguni::CUnitInput         UnitInputGetExtRelay2 { GetHandleUnitInputGetExtRelay2() } ; 
         siguni::CUnitInput         UnitInputGetExtRelay3 { GetHandleUnitInputGetExtRelay3() } ; 
         siguni::CUnitInput         UnitInputGetExtRelay4 { GetHandleUnitInputGetExtRelay4() } ; 
         siguni::CUnitInput         UnitInputGetExtRelay5 { GetHandleUnitInputGetExtRelay5() } ; 
         siguni::CUnitInput         UnitInputGetExtRelay6 { GetHandleUnitInputGetExtRelay6() } ; 
         siguni::CUnitInput         UnitInputGetExtRelay7 { GetHandleUnitInputGetExtRelay7() } ; 
         siguni::CUnitInput         UnitInputGetExtRelay8 { GetHandleUnitInputGetExtRelay8() } ; 


         // signals versions
         siguni::CSignalGetVersion  GetHwBoardVersion { siguni::CSignalGetVersion() };
         siguni::CSignalGetVersion  GetDriverVersion { siguni::CSignalGetVersion() };

         // signals birelays Kx 
         siguni::CSignalSetReset    SetResetK1 { siguni::CSignalSetReset() };
         siguni::CSignalSetReset    SetResetK2 { siguni::CSignalSetReset() };
         siguni::CSignalSetReset    SetResetK3 { siguni::CSignalSetReset() };
         siguni::CSignalSetReset    SetResetK4 { siguni::CSignalSetReset() };

         siguni::CSignalSetReset    GetK1 { siguni::CSignalSetReset() };
         siguni::CSignalSetReset    GetK2 { siguni::CSignalSetReset() };
         siguni::CSignalSetReset    GetK3 { siguni::CSignalSetReset() };
         siguni::CSignalSetReset    GetK4 { siguni::CSignalSetReset() };

         // signals external relays  
         siguni::CSignalSetReset    SetResetExtRelay1 { siguni::CSignalSetReset() };
         siguni::CSignalSetReset    SetResetExtRelay2 { siguni::CSignalSetReset() };
         siguni::CSignalSetReset    SetResetExtRelay3 { siguni::CSignalSetReset() };
         siguni::CSignalSetReset    SetResetExtRelay4 { siguni::CSignalSetReset() };
         siguni::CSignalSetReset    SetResetExtRelay5 { siguni::CSignalSetReset() };
         siguni::CSignalSetReset    SetResetExtRelay6 { siguni::CSignalSetReset() };
         siguni::CSignalSetReset    SetResetExtRelay7 { siguni::CSignalSetReset() };
         siguni::CSignalSetReset    SetResetExtRelay8 { siguni::CSignalSetReset() };

         siguni::CSignalSetReset    GetExtRelay1 { siguni::CSignalSetReset() };
         siguni::CSignalSetReset    GetExtRelay2 { siguni::CSignalSetReset() };
         siguni::CSignalSetReset    GetExtRelay3 { siguni::CSignalSetReset() };
         siguni::CSignalSetReset    GetExtRelay4 { siguni::CSignalSetReset() };
         siguni::CSignalSetReset    GetExtRelay5 { siguni::CSignalSetReset() };
         siguni::CSignalSetReset    GetExtRelay6 { siguni::CSignalSetReset() };
         siguni::CSignalSetReset    GetExtRelay7 { siguni::CSignalSetReset() };
         siguni::CSignalSetReset    GetExtRelay8 { siguni::CSignalSetReset() };

   };

}
