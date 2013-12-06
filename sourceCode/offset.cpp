unsigned int internalOffset = 
(((x & (1 << sLog2X) - 1) >> Child::sLog2X) << Log2YZ) +
(((y & (1 << sLog2Y) - 1) >> Child::sLog2Y) << Log2Z) +
((z & (1 << sLog2Z) - 1) >> Child::sLog2Z);