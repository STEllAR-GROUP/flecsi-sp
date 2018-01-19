/*~--------------------------------------------------------------------------~*
 * Copyright (c) 2016 Los Alamos National Laboratory, LLC
 * All rights reserved
 *~--------------------------------------------------------------------------~*/
////////////////////////////////////////////////////////////////////////////////
/// \file
////////////////////////////////////////////////////////////////////////////////

#include <flecsi/execution/context.h>

void driver_initialization(int argc, char ** argv)
{
  flecsi::execution::context_t::instance().initialize(argc, argv);
}
