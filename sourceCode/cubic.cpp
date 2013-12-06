template <class Data_T, class Coord _T>
Data_T interpolacaoCubica1D(Coord _T x, Data_T p[4])
{
    return p [1] + 0.5 *
    x * (p [2] - p [0] +
         x * (2.0 * p [0] - 5.0 * p [1] + 4.0 * p [2] - p [3] +
              x * (3.0 * (p [1] - p [2]) + p [3] - p [0])));
}

template <class Data_T, class Coord _T>
Data_T interpolacaoCubica2D(Coord _T x, Coord _T y, Data _T p[4][4])
{
    Data_T yInterps[4];
    yInterps[0] = interpolacaoCubica1D (y, p [0]);
    yInterps[1] = interpolacaoCubica1D (y, p [1]);
    yInterps[2] = interpolacaoCubica1D (y, p [2]);
    yInterps[3] = interpolacaoCubica1D (y, p [3]);
    return interpolacaoCubica1D (x, yInterps);
}

template <class Data_T, class Coord _T>
Data_T interpolacaoCubica3D(Coord _T x, Coord _T y, Coord _T z, Data _T p[4][4][4])
{
    Data_T yzInterps[4];
    yzInterps[0] = interpolacaoCubica2D (y, z , p [0]);
    yzInterps[1] = interpolacaoCubica2D (y, z , p [1]);
    yzInterps[2] = interpolacaoCubica2D (y, z , p [2]);
    yzInterps[3] = interpolacaoCubica2D (y, z , p [3]);
    return interpolacaoCubica1D (x, yzInterps);
}
