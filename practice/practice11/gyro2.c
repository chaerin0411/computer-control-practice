#pragma config(Sensor, port2,  gyro,           sensorVexIQ_Gyro)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	while(SensorValue[gyro] <= 360)
	{
		writeDebugStreamLine("Gyro: %d", SensorValue[gyro]);
		motor[motorB] = 30;
		motor[motorC] = -30;
	}
}
