
task main()
{
	long redValue;
	long greenValue;
	long blueValud;

	while(1)
	{
		getColorRawRGB(color, redValue, greenValue, blueValue);
		writeDebugStreamLine("Color Detected: %d, %d, %d", redValue, greenValue, blueValue);
		sleep(3000);
	}
}
