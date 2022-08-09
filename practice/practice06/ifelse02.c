
task main()
{
	int num;

	num = random(50);
	writeDebugStreamLine("num : %d", num);

	if(num > 25)
	{
		motor[motorB] = 50;
		motor[motorC] = 50;
		wait1Msec(1000);
	}
	else
	{
		motor[motorB] = -50;
		motor[motorC] = -50;
		wait1Msec(1000);
	}
}
