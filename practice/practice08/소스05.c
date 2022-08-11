
task main()
{
	playTone(1000, 100);
	while (bSoundActive) {};
	sleep(100);

	playTone(500, 50);
	while (bSoundActive) {};
	sleep(100);

	playTone(50, 100);
	while (bSoundActive) {};
	sleep(100);
}