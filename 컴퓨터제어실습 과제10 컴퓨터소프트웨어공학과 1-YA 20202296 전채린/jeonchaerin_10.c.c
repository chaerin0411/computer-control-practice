#pragma config(Sensor, port3,  color,          sensorVexIQ_ColorHue)
#pragma config(Motor,  motor2,          motorB,        tmotorNone, openLoop)
#pragma config(Motor,  motor3,          motorC,        tmotorNone, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#define THRESHOLD 22
task main()
{
	int light_value;

	motor[motorB] = 20;
	motor[motorC] = 20;

	while(true)
	{
		light_value = SensorValue(color);
		if(light_value > THRESHOLD) {
			motor[motorB] = -20;
			motor[motorC] = -20;
			wait1Msec(2000);

			motor[motorB] = 20;
			motor[motorC] = 0;
			wait1Msec(2000);

			motor[motorB] = 20;
			motor[motorC] = 20;
			wait1Msec(2000);
		}
	}
}
