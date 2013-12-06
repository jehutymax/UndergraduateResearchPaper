openvdb::FloatGrid grid = ...;
openvdb::FloatGrid::Accessor accessor = grid.getAccessor();
openvdb::Coord ijk(1,2,3);
float value = accessor.getValue(ijk);