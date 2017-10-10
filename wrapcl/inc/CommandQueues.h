/*

OCLADock, an OpenCL implementation of AutoDock 4.2 running a Lamarckian Genetic Algorithm
Copyright (C) 2017 TU Darmstadt, Embedded Systems and Applications Group, Germany. All rights reserved.

AutoDock is a Trade Mark of the Scripps Research Institute.

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.

*/


#ifndef COMMAND_QUEUES_H
#define COMMAND_QUEUES_H

  //#include <stdio.h>
  //#include <CL/opencl.h>
  #include "commonMacros.h"

/*
Create command queue
Inputs:
       	context -
        device_id -

Outputs:
       	command_queue -
*/
  int createCommandQueue(cl_context        context,
                         cl_device_id	   device_id,
                         cl_command_queue* command_queue);

/*
Get devices of the first platform
Inputs:
        cmd_queue -
Outputs:
        none
*/
  int getCommandQueueInfo(cl_command_queue cmd_queue);

// Include code for setCommandQueueProperties()?

#endif /* COMMAND_QUEUES_H */

