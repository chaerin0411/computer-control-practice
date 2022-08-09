
task main()
{
	motor[motorB] = 20;
	motor[motorC] = 20;

	while(SensorValue[Touch] == 0) { }

	motor[motorB] = 0;
	motor[motorC] = 0;
}
