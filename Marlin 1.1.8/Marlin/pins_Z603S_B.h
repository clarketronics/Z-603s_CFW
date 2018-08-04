/****************************************************************************************
* JGAurora Z-603S pins
*
****************************************************************************************/

#if !defined(__AVR_ATmega2560__)
  #error Oops!  Make sure you have 'Arduino Mega 2560' selected from the 'Tools -> Boards' menu.
#endif

#define DEFAULT_MACHINE_NAME    "JG Aurora Z-603S"
#define DEFAULT_SOURCE_CODE_URL "http://jgaurorawiki.com/Z-603S"
#define BOARD_NAME              "JGA_Z603S_B"

#define LARGE_FLASH true

	//x axis pins
	#define X_STEP_PIN         54
	#define X_DIR_PIN          55
	#define X_ENABLE_PIN       38

	//y axis pins
	#define Y_STEP_PIN         60
	#define Y_DIR_PIN          61
	#define Y_ENABLE_PIN       56

	//z axis pins
	#define Z_STEP_PIN         46
	#define Z_DIR_PIN          48
	#define Z_ENABLE_PIN       62
    #define Z_PROBE_PIN        -1

	//endstops
  #define X_MIN_PIN          -1 //5 //2
  #define X_MAX_PIN          4
  #define Y_MIN_PIN          -1 //3 //5
  #define Y_MAX_PIN          2
  #define Z_MIN_PIN          19
  #define Z_MAX_PIN          -1 //18 //19

  #define SERVO0_PIN 3

	//extruder pins
	#define E0_STEP_PIN        26
	#define E0_DIR_PIN         28
	#define E0_ENABLE_PIN      24
	#define E1_STEP_PIN        -1 // 36
	#define E1_DIR_PIN         -1 // 34
	#define E1_ENABLE_PIN      -1 // 3

	#define TEMP_0_PIN         13 // ANALOG NUMBERING
        #define TEMP_1_PIN         -1 // 15 for extruder #2 // ANALOG NUMBERING
        #define TEMP_2_PIN         -1 // ANALOG NUMBERING
        #define TEMP_BED_PIN       14 // ANALOG NUMBERING

	#define HEATER_0_PIN       8 // extruder 0
        #define HEATER_1_PIN       -1 // 9  extruder 1   
        #define HEATER_BED_PIN     7    

        #define LCD_PINS_RS 16
        #define LCD_PINS_ENABLE 17
        #define LCD_PINS_D4 23
        #define LCD_PINS_D5 25
        #define LCD_PINS_D6 27
        #define LCD_PINS_D7 29


        #define BTN_EN1 33
        #define BTN_EN2 31
        #define BTN_ENC 35

        #define SDPOWER            -1
        #define SD_DETECT_PIN      49
        #define SDSS               53
        
        #define FAN_PIN            10  
        #define LED_PIN            -1
        #define PS_ON_PIN          -1
        #define KILL_PIN           -1
        #define BEEPER_PIN         37

#ifndef SDSUPPORT
  // these pins are defined in the SD library if building with SD support
  #define SCK_PIN          52
  #define MISO_PIN         50
  #define MOSI_PIN         51
#endif

