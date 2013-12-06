class OIIO_API TextureOpt {
public:
    /// Wrap mode describes what happens when texture coordinates 
    /// describe a value outside the usual [0,1] range
    /// where a texture is defined.
    enum Wrap {
        WrapDefault,        ///< Use the default found in the file
        WrapBlack,          ///< Black outside [0..1]
        WrapClamp,          ///< Clamp to [0..1]
        WrapPeriodic,       ///< Periodic mod 1
        WrapMirror,         ///< Mirror the image
        WrapLast            ///< Mark the end -- don't use this!
    };
}