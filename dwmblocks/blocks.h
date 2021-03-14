//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/	
	{"  ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	10,		0},
	
	/* {"",	  "battery",							1,		0}, */

	{" ", "date '+%m, %d %Y %H:%M:%S'",					1,		0},

	{"",      "xset -q | grep Caps | awk '{ print $2, $3, $4 }'", 		1,		0},

	{" ", "volctrl view | awk '{print $1}'",				1,		0},
	
	{" ",   "pacman -Qu | wc -l",					300,	        0},
	
	{"",	  "echo -ne 'dwm-6.2'",						0,		0},

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " / ";
static unsigned int delimLen = 5;
