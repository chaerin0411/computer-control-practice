task main()
{
	nMotorEncoder[motorB] = 0;
	while(nMotorEncoder[motorB] < 360)
	{
		motor[motorB] = 50;
		motor[motorC] = 50;
 	}
}
