
#define THRESHOLD 22

task main()
{
	int light_value;
	while (1)
	{
		light_value = SensorValue(color);
		if (light_value > THRESHOLD)
		{
			motor[motorB] = 20;
			motor[motorC] = 0;
		}
		else
		{
			motor[motorB] = 0;
			motor[motorC] = 20;
		}
	}
}
