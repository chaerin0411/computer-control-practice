#pragma config(Sensor, port3,  color,          sensorVexIQ_ColorHue)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	while(1)
	{
		writeDebugStreamLine("color: %d", SensorValue[color]);
		wait1Msec(3000);
	}
}