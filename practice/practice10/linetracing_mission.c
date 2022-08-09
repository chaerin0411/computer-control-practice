
#define THRESHOLD 22
task main()
{
	clearTimer(T1);

	while (true)
	{
		if (SensorValue[touch] ==0)
		{
			if (SensorValue[color] > THRESHOLD)
			{
				motor[motorB] = 30;
				motor[motorC] = 0;
			}
			else
			{
				motor[motorB] = 0;
				motor[motorC] = 30;
			}
		}
		motor[motorB] = 0;
		motor[motorC] = 0;

		wrightDebugSreamLine("time = %f", time1[T1] / 1000);
		sleep(1000);
	}
}
