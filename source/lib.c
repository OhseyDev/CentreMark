#ifdef __WIN32__
#include "win32.c"
#else
#ifdef USE_WAYLAND
#include "wayland.c"
#else
#include "xcb.c"
#endif
#endif