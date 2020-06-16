/* SPDX-License-Identifier: GPLv3-or-later */
/* Copyright (c) 2020 Project WomoLIN */
/* Author Myron Franze <myronfranze@web.de> */

#pragma once

#include "interface.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

namespace pcsim::driver
{
	class CControlbus : public IControlbus
	{
	  public:
       CControlbus(); 
		 ~CControlbus() = default;

		 int WriteData( const std::string & attMessage ) override final;
		 int ReadData( std::string & attMessage ) override final;

     private:
         int sockfd, newsockfd, portno;
         socklen_t clilen;
         char buffer[256];
         struct sockaddr_in serv_addr, cli_addr;
         int n;
	};
}

