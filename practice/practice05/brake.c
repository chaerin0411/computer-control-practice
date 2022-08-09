task main()
{
	setMotorBrakeMode(motorB, 0);
	motor[motorB] = 100;
	writeDebugStreamLine("%d", getMotorBrakeMode(motorB));
	wait1Msec(1000);
}
