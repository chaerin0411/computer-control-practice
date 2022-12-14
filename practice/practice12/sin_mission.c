#pragma config(Sensor, port2,  gyro,           sensorVexIQ_Gyro)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	int FV = SensorValue[gyro];
	while(SensorValue[gyro] <= 45+FV)
	{
		motor[motorB] = 30;
		motor[motorC] = -30;
	}

	motor[motorB] = 0;
	motor[motorC] = 0;

	float distance = 25/cosDegrees(45);
	writeDebugStreamLine("distance = %f", distance);
	sleep(1000);

	int degree = (360*distance)/17.58;

	moveMotorTarget(motorB, degree, 30);
	moveMotorTarget(motorC, degree, 30);
	waitUntilMotorStop(motorB);
	waitUntilMotorStop(motorC);
}
