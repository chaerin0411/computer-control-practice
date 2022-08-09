
task main()
{
	while(1)
	{
		if(SensorValue[Touch] == 1)
		{
			setLEDColor(2);
		}
		else
		{
			setLEDColor(1);
		}
	}
}
