#pragma config(Sensor, port3,  color,          sensorVexIQ_ColorHue)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#define THRESHOLD 30
task main()
{
	setSensorMode(color, 0);
	motor[motorB] = 20;
	motor[motorB] = 20;

	while(SensorValue[color] > THRESHOLD) {};
}
