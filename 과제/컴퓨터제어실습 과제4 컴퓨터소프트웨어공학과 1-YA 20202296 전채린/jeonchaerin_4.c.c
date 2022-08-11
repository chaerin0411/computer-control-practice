task main()
{
	nMotorEncoder[motorB] = 0;
	while(nMotorEncoder[motorB] < 1431.81818)
	{
		motor[motorB] = 50;
		motor[motorC] = 50;
	}
	motor[motorB] = 0;
	motor[motorC] = 0;

	moveMotorTarget(motorB, 90, 50);
	moveMotorTarget(motorC, 90, 0);
	waitUntilMotorStop(motorB);
	waitUntilMotorStop(motorC);

	nMotorEncoder[motorB] = 0;
	while(nMotorEncoder[motorB] < 1564.77273)
	{
		motor[motorB] = 50;
		motor[motorC] = 50;
	}
	motor[motorB] = 0;
	motor[motorC] = 0;

	moveMotorTarget(motorB, 90, 50);
	moveMotorTarget(motorC, 90, 0);
	waitUntilMotorStop(motorB);
	waitUntilMotorStop(motorC);

	nMotorEncoder[motorB] = 0;
	while(nMotorEncoder[motorB] < 368.181818)
	{
		motor[motorB] = 50;
		motor[motorC] = 50;
	}
	motor[motorB] = 0;
	motor[motorC] = 0;

	moveMotorTarget(motorB, 90, 50);
	moveMotorTarget(motorC, 90, -50);
	waitUntilMotorStop(motorB);
	waitUntilMotorStop(motorC);

	nMotorEncoder[motorB] = 0;
	while(nMotorEncoder[motorB] < 1564.77273)
	{
		motor[motorB] = 50;
		motor[motorC] = 50;
	}
	motor[motorB] = 0;
	motor[motorC] = 0;

}
