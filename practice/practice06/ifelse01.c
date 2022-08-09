
task main()
{
	displayCenteredTextLine(1, "pressed button:");
	displayCenteredBigTextLine(4, "Any");

	while(true)
	{
		if(getButtonPress(buttonUp))
			displayCenteredBigTextLine(4, "Up");
		else if(getButtonPress(buttonEnter))
			displayCenteredBigTextLine(4, "Enter");
		else if(getButtonPress(buttonDown))
			displayCenteredBigTextLine(4, "Down");
		else if(getButtonPress(buttonRight))
			displayCenteredBigTextLine(4, "Right");
		else if(getButtonPress(buttonLeft))
			displayCenteredBigTextLine(4, "Left");

		sleep(20);
	}
}
