
task main()
{
	int light_value;
	int bright;
	int dark;
	int threshold;

	while (SensorValue[Touch] == 0) {};
	while (SensorValue[Touch] == 1) {};
	bright = SensorValue[color];
	while (SensorValue[Touch] == 0) {};
	while (SensorValue[Touch] == 1) {};
	dark = SensorValue[color];
	threshold = (bright + dark) / 2;
	while (SensorValue[Touch] == 0) {};
	while (SensorValue[Touch] == 1) {};

	while (1)
	{
		light_value = SensorValue(color);
		if (light_value > threshold)
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
