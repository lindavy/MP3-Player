#include <stdio.h>

class VS1053_MP3 {

public: 
	VS1053_MP3();
	~VS1053_MP3(); 

	bool begin(); 

	void play(); 
	void pause(); 
	void resume(); 

	int tick; 

protected: 
	bool playing = false; 

/**************************************************************************************
 * When to use 'volatile' as key word: 
 * 
 * Use only when interfacing with hardware with multithreating software
 * Tells compiler not to optimize any variables that are labelled as 'volatile', but will
 * do as the code instructs it to 
 * Prevents: Compiler from rearranging the order in which data & commands are written
 **************************************************************************************/
	
	// Value here should not be optimized by compiler, b/c it's vital to have correct number of bytes for music to play properly
	volatile int bytesLeft; 

}