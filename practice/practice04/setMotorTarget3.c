task main()
{
	setMotorTarget(motorB, 360, 50);
	setMotorTarget(motorC, 360, 50);
	waitUntilMotorStop(motorB);
	waitUntilMotorStop(motorC);

	setMotorTarget(motorB, 720, 50);
	setMotorTarget(motorC, 720, 50);
	waitUntilMotorStop(motorB);
	waitUntilMotorStop(motorC);
}
