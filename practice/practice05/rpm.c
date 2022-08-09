task main()
{
	float RPM;
	while(1)
	{
		clearTimer(T1);
		nMotorEncoder[motorB] = 0;
		motor[motorB] = 50;
		while(time1[T1] < 60000)
		{
		}
		RPM = (nMotorEncoder[motorB]/360.0);

		writeDebugStreamLine("RPM is %f", RPM);
	}
}
