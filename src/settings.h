#ifndef __SETTINGS_H_
#define __SETTINGS_H_


enum TracerType
{
	BOTTOM,
	CURSOR
};

namespace Settings
{
	namespace Aimbot
	{
		extern bool enabled;
	}
	
	namespace ESP
	{
		extern bool enabled;
		
		namespace Tracer
		{
			extern TracerType type;
			extern bool enabled;
		}
		
		namespace Walls
		{
			extern bool enabled;
		}
		
		namespace Name
		{
			extern bool enabled;
		}
	}
}

#endif