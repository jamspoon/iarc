/**
@author Daniel Sidlauskas Miller with advice from Gary Miller

This header file includes contants and prototype functions for flightcontrol.c
Source for functions prototyped here found in aux.c
*/

#define CPU_SPEED 2000000

//imu constants
#define ACCEL (0xA6 >> 1)
#define BAUDRATE 100000
#define TWI_BAUDSETTING TWI_BAUD(CPU_SPEED, BAUDRATE)

//IMU static values
#define AXNORM 0
#define AZNORM 266

//initial motor constants
#define SERVOINI 3000
#define MOTORINI 2000
#define MOTORNORM 3250

//Change constants
#define SERVORAX -10
#define SERVOLAX 10
#define MOTORRAX 0
#define MOTORLAX 0

#define SERVORAY 10
#define SERVOLAY 10
#define MOTORRAY 0
#define MOTORLAY 0

#define SERVORAZ 10
#define SERVOLAZ 10
#define MOTORRAZ 0
#define MOTORLAZ 0

//TC overflow flag stuff
#define TC_GetOverflowFlag( _tc ) ( (_tc)->INTFLAGS & TC0_OVFIF_bm )
#define TC_ClearOverflowFlag( _tc ) ( (_tc)->INTFLAGS = TC0_OVFIF_bm )

//Servo L new value calculator
int ServoLValueFunk(int accelx, int accely, int accelz);

//Servo R new value calculator
int ServoRValueFunk(int accelx, int accely, int accelz);

int MotorLValueFunk(int accelx, int accely, int accelz);

int MotorRValueFunk(int accelx, int accely, int accelz);
