task main()
{
	float RPM;
	while(1)
	{
		clearTimer(T1);
		nMotorEncoder[motorB] = 0;
		motor[motorB] = 50;
		while(time1[T1] < 30000)
		{
		}
		RPM = (nMotorEncoder[motorB]*20/360);

		writeDebugStreamLine("RPM is %f", RPM);
	}
}
