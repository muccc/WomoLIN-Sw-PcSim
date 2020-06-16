/* SPDX-License-Identifier: GPLv3-or-later */
/* Copyright (c) 2019 Project WomoLIN */
/* Author Myron Franze <myronfranze@web.de> */

#include "controlbus.h"

#include <iostream>

namespace pcsim::driver
{

   void error(const char *msg)
   {
      perror(msg);
      exit(1);
   }

   CControlbus::CControlbus()
   {

      sockfd = socket(AF_INET, SOCK_STREAM, 0);
      if (sockfd < 0)   
         perror("ERROR opening socket");
      bzero((char *) &serv_addr, sizeof(serv_addr));
      portno = 20191;
      serv_addr.sin_family = AF_INET;
      serv_addr.sin_addr.s_addr = INADDR_ANY;
      serv_addr.sin_port = htons(portno);
      if (bind(sockfd, (struct sockaddr *) &serv_addr,
               sizeof(serv_addr)) < 0)    
               error("ERROR on binding");
      listen(sockfd,5);
      clilen = sizeof(cli_addr);
      newsockfd = accept(sockfd,
                  (struct sockaddr *) &cli_addr,
                  &clilen);
      if (newsockfd < 0)
           error("ERROR on accept");

   }

	int CControlbus::WriteData( const std::string & attMessage ) 
   { 
      auto writeData =  write(newsockfd, attMessage.c_str(), attMessage.length() );

      if ( static_cast<long unsigned int>(writeData)  == attMessage.length() ) {
         return true;
      }
      else {
         return false;
      }

   }


	int CControlbus::ReadData( std::string & attMessage )
   {

      char buffer[ 256 ];

      auto readcount = 
         read(newsockfd, &buffer, 256 );

      if ( readcount  > 0 ) {
         attMessage = buffer;
         return true;
      }
      else {
         attMessage.clear();
         return false;
      }

   }

}

