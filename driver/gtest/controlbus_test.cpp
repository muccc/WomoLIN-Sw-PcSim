/* SPDX-License-Identifier: GPLv3-or-later */
/* Copyright (c) 2020 Project WomoLIN */
/* Author Myron Franze <myronfranze@web.de> */

#include "../controlbus.h"

#include <gtest/gtest.h>

namespace pcsim::driver::gtest
{

class CControlbusTest  : public ::testing::Test { };


TEST_F( CControlbusTest, WriteReadData ) {

   auto controlbus = pcsim::driver::CControlbus();

   //ASSERT_STREQ( writeMessage, readMessage );

}

}
