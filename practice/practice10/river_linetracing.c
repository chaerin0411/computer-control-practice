
#define THRESHOLD 22

task main()
{
	int C_V = 30;
	float Gain = 0.7;

	while (true)
	{
		int Light_vlue = SensorValue[color];
		motor[motorB] = C_V + (Light_Value - THRESHOLD) * Gain;
		motor[motorC] = C_V - (Light_Value - THRESHOLD) * Gain;
	}
}
