// transformar coordenadas de voxel de ponto flutuante em coordenadas inteiras
int continuosToDiscrete(float continuousCoordinate)
{
	return static_cast<int>(std::floor(continuousCoordinate));
}

// vizinho mais proximo, caso tridimensional
float vizinhoMaisProximo_3D(const Imath::v3f &vsP, const VoxelBuffer &buf)
{
	V3i dvsP = continuosToDiscrete(vsP);
	return buf.value(dvsP.x, dvsP.y, dvsP.z);
}