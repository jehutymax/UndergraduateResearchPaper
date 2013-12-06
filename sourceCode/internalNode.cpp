template <class Value, class Child, int Log2X, int Log2Y=Log2X, int Log2Z=Log2Y>
class InternalNode {
	static const int sLog2X=Log2X+Child::sLog2X,
					 sLog2Y=Log2Y+Child::sLog2Y,
					 sLog2Z=Log2Z+Child::sLog2Z,
					 sSize=1<<Log2X+Log2Y+Log2Z;
	union InternalData {
		Child* child; //child node pointer
		Value value; //tile value
	} mInternalDAT[sSize];
	BitMask<sSize> mValueMask; //active states
	BitMask<sSize> mChildMask; //node topology
	int32_t mX, mY, mZ; //origin of node
}