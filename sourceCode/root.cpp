template<class Value, class Child>
class RootNode {
	struct RootData {
		Child* node; // =NULL if tile
		pair<Value, bool> tile; // value and state
	};
	hash_map<RootKey, RootData, HashFunc> mRootMap;
	mutable Registry<Accessor> mAccessors;
	Value mBackground; // default background value
}