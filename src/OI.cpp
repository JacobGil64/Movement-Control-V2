/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "OI.h"

#include <WPILib.h>

//member initialization list
//basically where you declare all your private variables
//name(new oturnType(port_number));

OI::OI(): leftStick(new Joystick(0)), rightStick(new Joystick(1)), armStick(new Joystick(3))
{
	// Process operator interface input here.
}

//where to define methods aka functions
Joystick* OI::getLeftStick()
{
	return leftStick;
}

Joystick* OI::getRightStick()
{
	return rightStick;
}

Joystick* OI::getArmStick()
{
	return armStick;
}

// Notes

/* only code inside main function is executed main(){executed code}
 *
 * print starts with cout <<		cout  = console out
 * and ends with << endl  		endl = end line
 * << replaces + when concatinating strings
 * character variable char can be used to contain one character char exChar = 'c'; 	use single quotes
 *  bool not boolean dataype
 *
 * namespaces group things (div in html)
 * to refrence something outside the namespace use the : : operator (namespace : : var)
 *
 * namespace std is the "standard" namespace
 * 	allow for multiple vars with same name to be declared in other namespaces in large project
 *
 * return 0 (or whatever number) checks that the program completed (bc it is the last thing run)
 *
 *
 *
 */
