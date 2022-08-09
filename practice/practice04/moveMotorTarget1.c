task main()
{
	moveMotorTarget(motorB, 180, 50);
	moveMotorTarget(motorC, 180, 50);
	waitUntilMotorStop(motorB);
	waitUntilMotorStop(motorC);

	moveMotorTarget(motorB, 360, 50);
	moveMotorTarget(motorC, 360, 50);
	waitUntilMotorStop(motorB);
	waitUntilMotorStop(motorC);
}
