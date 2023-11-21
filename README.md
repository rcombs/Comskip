## Comskip

Commercial detector
http://www.kaashoek.com/comskip/

![Example Comskip image](https://github.com/essandess/etv-comskip/blob/master/example.png)
*Commercials are marked and skipped using [associated projects](https://github.com/essandess/etv-comskip).*

### Requirements

- This is version is specifically build for MacOS ARM64 with FFmpeg6 with headers and shared libraries
- libargtable2 for option parsing
- Optional: SDL for building the Comskip GUI

### Setting up a build environment

First install Xcode (freely available from the Mac OS X App Store). After it's installed, install the Xcode command-line tools by executing `xcode-select --install` from a terminal.

Recommended way to install dependencies is MacPorts. 
```
sudo port -v install autoconf automake libtool pkgconfig argtable ffmpeg6 libsdl coreutils
```

Some libraries have incomplete or incorrect dependencies listed in their pkgconfig files. If static linking fails on your system, you'll need to override these by manually specifying the `argtable2_LIBS`, `ffmpeg_LIBS`, and `sdl_LIBS` environment variables with the required list of libraries and their locations.

### Ini file

You can find ini files at:
http://www.kaashoek.com/comskip/
