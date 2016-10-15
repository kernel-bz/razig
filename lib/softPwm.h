/*
 * softPwm.h:
 *	Provide 2 channels of software driven PWM.
 *	Copyright (c) 2012 Gordon Henderson
 ***********************************************************************
 * This file is part of wiringPi:
 *	https://projects.drogon.net/raspberry-pi/wiringpi/
 *
 *    wiringPi is free software: you can redistribute it and/or modify
 *    it under the terms of the GNU Lesser General Public License as
 *    published by the Free Software Foundation, either version 3 of the
 *    License, or (at your option) any later version.
 *
 *    wiringPi is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU Lesser General Public License for more details.
 *
 *    You should have received a copy of the GNU Lesser General Public
 *    License along with wiringPi.
 *    If not, see <http://www.gnu.org/licenses/>.
 ***********************************************************************
 */

#ifndef __SOFTPWM_H
#define __SOFTPWM_H

#define MODE_DC_MOTOR       0
#define MODE_STEP_MOTOR     1

#ifdef __cplusplus
extern "C" {
#endif

extern int  softPwmCreate (int pin, int value, int range, int motor) ;
extern void softPwmWrite  (int pin, int value) ;
extern void softPwmStop   (int pin) ;

#ifdef __cplusplus
}
#endif

#endif