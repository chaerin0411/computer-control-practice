task main()
{
	int speed;
	while(1)
	{
		clearTimer(T1);
		nMotorEncoder[motorB] = 0;
		motor[motorB] = 100;
		while(time1[T1] < 1000)
		{
		}
		speed = ((nMotorEncoder[motorB]/360)*17.58/1);
		writeDebugStreamLine("speed is &d cm/s", speed);
	}

}
