float interpolacaoLinear(float x, float *A)
{
	const int pisoX = static_cast<int>(floor(x));
	const int tetoX = static_cast<int>(floor(x));
	float alpha = x - pisoX;
	return (1.0 - alpha) * A[pisoX] + alpha * A[tetoX];
}