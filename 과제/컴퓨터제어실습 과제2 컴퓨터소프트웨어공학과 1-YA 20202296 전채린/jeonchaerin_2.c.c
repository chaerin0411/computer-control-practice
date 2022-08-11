task main() 
{
	setLEDColor(ledRed);
	sleep(2000);
	setLEDColor(ledGreenFlash);
	sleep(2000);
	setLEDColor(ledOrangePulse);
	sleep(3000);
	displayCenteredTextLine(1, "Department: ComputerSWEngineer");
	displayCenteredBigTextLine(4, "ID: 20202296");
	displayCenteredBigTextLine(7, "NAME: jeonchaerin");
	sleep(3000);
}