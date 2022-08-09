task main()
{
	int i;

	for(i=0; i<20; i++)
	{
		writeDebugStreamLine("i : %d", i);
		motor[motorB] = 50;
		motor[motorC] = 50;
		wait1Msec(100);
	}
}
