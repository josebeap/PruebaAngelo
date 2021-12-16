/**********************************************/
/* flap.c */
/* UDF for specifying a time-varying omega */
/* */
/* Simulates +/- 8 deg flapping with cycle of */
/* of 1 sec. */
/* */
/* Version 13.0 */
/* */
/**********************************************/
#include "udf.h"
#define PI 3.141592654
DEFINE_TRANSIENT_PROFILE(speed_1, time_1)
{
  
real ampl_1 = 2.0*PI/15.0;
real freq_1 = 2.*PI;
real omega_1;
omega_1 = 2.0*PI*ampl_1*freq_1*cos(2*PI*freq_1*time_1);

return omega_1;
}
  
DEFINE_TRANSIENT_PROFILE(speed_2, time_2)
{
  
real ampl_2 = 2.0*PI/15.0;
real freq_2 = 2.*PI;
real omega_2;
omega_2 = 2.0*PI*ampl_2*freq_2*cos(2*PI*freq_2*time_2);

return omega_2;
}

DEFINE_TRANSIENT_PROFILE(speed_3, time_3)
{
  
real ampl_3 = 2.0*PI/15.0;
real freq_3 = 2.*PI;
real omega_3;
omega_3 = 2.0*PI*ampl_3*freq_3*cos(2*PI*freq_3*time_3);

return omega_3;
}