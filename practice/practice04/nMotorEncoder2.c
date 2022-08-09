task main()
{
	nMotorEncoder[motorB] = 0;
	while(nMotorEncoder[motorB] < 466.894)
	{
		motor[motorB] = 50;
		motor[motorC] = 50;
	}
}
