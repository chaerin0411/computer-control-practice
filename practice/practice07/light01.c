#pragma config(Sensor, port3,  color,          sensorVexIQ_ColorHue)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	while(1)
	{
		writeDebugStreamLine("Reflective light: %d". Sensorvalue[color]);
		wait10Msec(100);
	}
}
