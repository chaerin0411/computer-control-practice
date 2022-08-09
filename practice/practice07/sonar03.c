
task main()
{
	int distance;
	while(1)
	{
		distance = SensorValue[sonar];

		writeDebugStreamLine("distance: %d", distance);

		if(distance > 10)
		{
			motor[motorB] = 20;
			motor[motorC] = 20;
		}
		else if(distance < 10)
		{
			motor[motorB] = -20;
			motor[motorC] = -20;
		}
		else
		{
			motor[motorB] = 0;
			motor[motorC] = 0;
	}
}
