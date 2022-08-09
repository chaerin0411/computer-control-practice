task main()
{
	int i = 0;

	while(i < 10)
	{
		writeDebugStreamLine("1 : %d", i);
		motor[motorB] = 50;
		motpr[motorC] = 50;
		wait1Msec(100);
		i++;
	}
}
