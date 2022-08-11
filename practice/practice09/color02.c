
task main()
{
	while(1)
	{
		switch(SensorValue[color])
		{
			case 5:
			setLEDColor(ledRed);
			writeDebugStreamLine("color: %d", SensorValue[color]);
			wait1Msec(3000);
			break;

			case 4:
			setLEDColor(ledOrange);
			writeDebugStreamLine("color: %d", SensorValue[color]);
			wait1Msec(3000);
			break;

			case 3:
			setLEDColor(ledGreen);
			writeDebugStreamLine("color: %d", SensorValue[color]);
			wait1Msec(3000);
			break;

			default:
			setLEDColor(ledOff);
			break;
		}
	}
}
