//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
      /* Icon 	Command 		 	Interval    Signal */
				
	{"",	"volume.sh",		  	0,	    8},
	{"",	"battery.sh",		     	5,	    0},
	{"",	"date '+%a %d/%m/%y %H:%M'",	1,	    0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
