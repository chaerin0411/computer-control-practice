task main()
{
	int wait_time;

	wait_time = random(5000);

	writeDebugStreamLine("random time : %d", wait_time);

	motor[motorB] = 50;
	motor[motorC] = 50;
	wait1Msec(wait_time);
}
