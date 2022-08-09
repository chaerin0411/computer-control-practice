task main()
{
	motor[motorB] = 50;
	motor[motorC] = 50;
	sleep(1000);
	motor[motorB] = -50;
	motor[motorC] = -50;
	sleep(1000);
}
