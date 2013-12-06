unsigned int leafOffset = 
	((x &) 1 << sLog2X) - 1) << Log2Y + Log2Z) +
	((y &) 1 << sLog2Y) - 1) << Log2Z) + (z & (1 << sLog2Z) - 1); 