float linear3D(const Imath ::V3f &vsP, const VoxelBuffer &buf )
{
    const int fX = static _cast <int >( floor(vsP.x - 0.5));
    const int fY = static _cast <int >( floor(vsP.y - 0.5));
    const int fZ = static _cast <int >( floor(vsP.z - 0.5));
    const float aX = vsP.x - 0.5 - fX;
    const float aY = vsP.y - 0.5 - fY;
    const float aZ = vsP.z - 0.5 - fZ;
    const float bX = 1.0 - aX;
    const float bY = 1.0 - aY;
    const float bZ = 1.0 - aZ;
    return bX * (bY * (bZ * buf .value(fx, fy, fz ) +
                       aZ * buf .value(fx, fy, fz + 1)) +
                 aY * (bZ * buf .value(fx, fy + 1, fz ) +
                       aZ * buf .value(fx, fy + 1, fz + 1))) +
    aX * (bY * (bZ * buf .value(fx + 1, fy, fz ) +
                aZ * buf .value(fx + 1, fy, fz + 1)) +
          aY * (bZ * buf .value(fx + 1, fy + 1, fz ) +
                aZ * buf .value(fx + 1, fy + 1, fz + 1)));
}
