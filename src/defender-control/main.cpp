#include "dcontrol.h"

// to-do:
// write argument parser
// create cli program
// maybe make a ui for this

// entrypoint
//
int main()
{
  printf(DCONTROL::check_defender() ?
    "Windows defender is ACTIVE\n" :
    "Windows defender is OFF\n");

  printf(DCONTROL::disable_defender() ?
    "Defender disabled\n" :
    "Failed to disable\n");

  system("pause");

  return 0;
}
