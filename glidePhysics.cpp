#include <string>
#include <iostream>
#include <math.h>
#include "glidePhysics.hpp"

Glider::Glider(double initial_xposition, double initial_yposition, double initial_xvelocity, double initial yvelocity,
               double initial_theta, double initial_propellant_main, double initial_rcs_propellant)
{
  cout << "Simulating Glider Physics" << endl;
  NewtonianState.current_state = Flight;
  
  Flag_sprite = flag_sprite;
  Flag_sprite.setscale(0,0);
  
  
}

