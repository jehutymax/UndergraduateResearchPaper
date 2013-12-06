int rootKey[3] = {x & ~((1 << Child::sLog2X) - 1),
				  	y & ~((1 << Child::xLog2Y) - 1),
				  	z & ~((1 << Child::sLog2Z) - 1)};