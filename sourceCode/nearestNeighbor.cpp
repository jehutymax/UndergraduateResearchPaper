float vizinhoMaisProximo_1D(float x, float *A)
{
	const int idx = static_cast<int>(floor(x + 0.5));
	return A[idx];
}