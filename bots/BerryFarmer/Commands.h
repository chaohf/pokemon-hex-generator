#include "../Joystick.h"
#include <avr/pgmspace.h>

static const Command m_command[] PROGMEM = {
	//----------Setup [0,2]----------
	// Press A once to connect
	{NOTHING, 30},
	{A, 1},
	{NOTHING, 1},

	//----------Sync and unsync time, goto change date [3,40]----------
	// To System Settings
	{HOME, 1},
	{NOTHING, 30},
	{DOWN, 1},
	{NOTHING, 1},
	{RIGHT, 1},
	{NOTHING, 1},
	{RIGHT, 1},
	{NOTHING, 1},
	{RIGHT, 1},
	{NOTHING, 1},
	{RIGHT, 1},
	{NOTHING, 1},
	{A, 1},
	{NOTHING, 1},

	// To Date and Time
	{DOWN, 80},
	{NOTHING, 1},
	{A, 1},
	{NOTHING, 1},
	{DOWN, 1},
	{NOTHING, 1},
	{DOWN, 1},
	{NOTHING, 1},
	{DOWN, 1},
	{NOTHING, 1},
	{DOWN, 1},
	{NOTHING, 1},
	{A, 1},
	{NOTHING, 8},

	// Sync and unsync time
	{A, 1},
	{NOTHING, 4},
	{A, 1},
	{NOTHING, 8},

	// To actually Date and Time
	{DOWN, 1},
	{NOTHING, 1},
	{DOWN, 1},
	{NOTHING, 1},
	{A, 1},
	{NOTHING, 7},

	//----------Plus 1 year [41,56]----------
	{RIGHT, 1},		// EU/US start
	{NOTHING, 1},
	{RIGHT, 1},
	{NOTHING, 1},
	{UP, 1},		// JP start
	{NOTHING, 1},
	{RIGHT, 1},
	{NOTHING, 1},
	{RIGHT, 1},
	{NOTHING, 1},
	{RIGHT, 1},
	{NOTHING, 1},	// EU end
	{RIGHT, 1},
	{NOTHING, 1},	// US end
	{RIGHT, 1},
	{NOTHING, 1},	// JP end

	//----------Back to game [57,62]----------
	{A, 1},
	{NOTHING, 4},
	{HOME, 1},
	{NOTHING, 30},
	{HOME, 1},
	{NOTHING, 30},

	//----------Collect Berry [63,80]----------
	{A, 14},		// It's a Berry tree. Do you want to shake it?
	{NOTHING, 1},
	{A, 12},
	{NOTHING, 1},
	{A, 170},		// Yes
	{NOTHING, 1},
	{B, 30},		// X fell from the tree!
	{NOTHING, 1},
	{B, 65},		// There are X Berries on the ground. Quit
	{NOTHING, 1},
	{B, 16},		// You picked up the Betties that fell from the tree!
	{NOTHING, 1},
	{B, 16},
	{NOTHING, 1},
	{B, 16},
	{NOTHING, 1},
	{B, 16},
	{NOTHING, 14},

	//----------Save Game [81,86]----------
	{X, 1},
	{NOTHING, 20},
	{R, 1},
	{NOTHING, 50},
	{A, 1},
	{NOTHING, 140}
};
