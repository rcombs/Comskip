#ifndef COMSKIP
#define COMSKIP
#endif
#ifdef _WIN32
#define PACKAGE_STRING " Comskip 0.82.011"
#endif
#define _UNICODE

#if defined(_WIN32) && !defined(_WIN64)
#define MAXWIDTH 4096
#define MAXHEIGHT 2160
#else
#define MAXWIDTH	8000
#define MAXHEIGHT	4800
#endif
