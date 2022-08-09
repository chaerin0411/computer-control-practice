
task main()
{
	while(true)
	{
		while(SensorValue[Touch] == 0) { }
		while(SensorValue[Touch] == 1) { }
		motor[motorB] = 20;
		motor[motorC] = 20;
		while(SensorValue[Touch] == 0) { }
		while(SensorValue[Touch] == 1) { }
		motor[motorB] = 0;
		motor[motorC] = 0;
	}
}
