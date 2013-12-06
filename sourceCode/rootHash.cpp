unsigned int rootHash = ( (1 << Log2N) - 1) &
						(rootKey[0] * 73856093 ^
							rootKey[1] * 19349663 ^ 
							rootKey[2] * 83492791);  