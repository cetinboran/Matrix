#ifndef WINDOW_H
#define WINDOW_H

#include "data.h"

class Window{
	public:
		void loop();
		
		// Commands
		void help();
		void create(Data &data);
		void add(Data &data);
		void multiply(Data &data);
		void det(Data &data);
};

#endif
