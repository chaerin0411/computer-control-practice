task main()
{
	int i, speed;


// for�� ���, wait10Msec, 5�� ����, Forward Speed = %
	nMotorEncoder[motorB] = 0;
	for(i=0; i<5; i++)
	{
		motor[motorB] = 50;
		motor[motorC] = 50;
		wait10Msec(100);
	}
	speed = (((nMotorEncoder[motorB]/360)*17.58)/1);
	displayCenteredBigTextLine(3, "Forward Speed = %d cm/s", speed);

// while�� ���, time100, 5�� ����, Backward Speed = %d cm/s",
	i = 0;
	nMotorEncoder[motorB] = 0;
	while(i<5)
	{
		clearTimer(T1);
		motor[motorB] = -50;
		motor[motorC] = -50;
		while(time100[T1] < 10)
		{
		}
		i++;
	}
	speed = ((nMotorEncoder[motorB]/360)*17.58/1);
	displayCenteredBigTextLine(3, "Backward Speed = %d cm/s", speed);
}
