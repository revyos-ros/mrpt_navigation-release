/* +------------------------------------------------------------------------+
   |                             mrpt_navigation                            |
   |                                                                        |
   | Copyright (c) 2014-2024, Individual contributors, see commit authors   |
   | See: https://github.com/mrpt-ros-pkg/mrpt_navigation                   |
   | All rights reserved. Released under BSD 3-Clause license. See LICENSE  |
   +------------------------------------------------------------------------+ */

#include <mrpt_rawlog_play/rawlog_play.h>
#include <mrpt_rawlog_play/rawlog_play_defaults.h>

RawlogPlay::Parameters::Parameters()
	: debug(RAWLOG_PLAY_DEFAULT_DEBUG),
	  rawlog_file(RAWLOG_PLAY_DEFAULT_RAWLOG_FILE)
{
}
