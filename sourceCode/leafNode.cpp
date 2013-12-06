template<class Value, int Log2X, int Log2Y=Log2X, int Log2Z=Log2Y>
class LeafNode {
	static const int sSize=1<<Log2X+Log2Y+Log2Z, 
	sLog2X=Log2X, sLog2Y=Log2Y, sLog2Z=Log2Z;
	union LeafData {
		streamoff offset; //out of core streaming
		Value* values; //temp buffers
	} mLeafDAT; //direct access table

	BitMask<sSize> mValueMask; //active states
	[BitMask <sSize> mInsideMask]; //optional for level sets
	uint64_t mFlags; //64 bit flags
};