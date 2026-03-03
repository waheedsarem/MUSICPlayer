# Music Player

Created by: Sarem Waheed, M. Mamoon Chishti, M. Saad Zafar, M. Hamza Iqbal

## Overview
Music Player is a desktop audio player built with C++ and Qt. It provides a compact interface for loading local audio files, controlling playback, and inspecting track details.

## Features
- Play, pause, stop, next, and previous track controls
- Shuffle and repeat playback modes
- Volume slider with mute/unmute toggle
- Seekable timeline with live current/total time updates
- Playback speed controls: `0.5x`, `1x`, `1.5x`, `2x`
- Track properties dialog (name, size, duration, format, bitrate)
- Multi-file loading for `.mp3` and `.wav`

## Project Structure
- `project/source/`: Qt project sources (`MusicPlayer.pro`, `.cpp`, `.h`, `.ui`, `.qrc`)
- `project/legacy-windows-runtime/`: Legacy Windows runtime files
- `build/musicplayer/`: Local build output (generated)
- `dist/MusicPlayer.app`: Built macOS app bundle (generated)

## Prerequisites
- Qt 6 (including Qt Multimedia)
- A C++ toolchain
- VS Code (optional, for macOS tasks in this repo)

## Build and Run (macOS)

### Option A: VS Code tasks (recommended in this repo)
1. Open this repository in VS Code.
2. Run `Terminal -> Run Task -> Qt: Build`.
3. Run `Terminal -> Run Task -> Qt: Run`.

Available tasks:
- `Qt: Configure (qmake)`: Generates Makefiles in `build/musicplayer`
- `Qt: Build`: Compiles and copies app bundle to `dist/MusicPlayer.app`
- `Qt: Run`: Launches the app
- `Qt: Clean`: Removes build artifacts and `dist/MusicPlayer.app`

### Option B: Terminal
```bash
mkdir -p build/musicplayer
cd build/musicplayer
qmake6 ../../project/source/MusicPlayer.pro   # or qmake
make -j"$(sysctl -n hw.ncpu)"
./MusicPlayer.app/Contents/MacOS/MusicPlayer
```

## Build and Run (Windows)

### Option A: Qt Creator (simplest)
1. Open `project/source/MusicPlayer.pro` in Qt Creator.
2. Select a Qt 6 kit (MinGW or MSVC).
3. Click **Build**.
4. Click **Run**.

### Option B: Terminal (Qt command prompt / Developer PowerShell)
```powershell
mkdir build\musicplayer
cd build\musicplayer
qmake ..\..\project\source\MusicPlayer.pro
mingw32-make
.\release\MusicPlayer.exe
```

If you are using an MSVC kit, use:
```powershell
nmake
.\release\MusicPlayer.exe
```

## How to Use
1. Launch the app.
2. Load tracks:
- Open the top menu `Open -> Select Audio File`.
- Select one or more `.mp3`/`.wav` files.
3. Start playback:
- Press the main play/pause button to play or pause.
- Use stop, previous, and next buttons for navigation.
4. Control playback behavior:
- Click `Shuffle` to randomize upcoming tracks.
- Click `Repeat` to loop the current track.
- Use `PlayBack Speed` menu for `0.5x`, `1x`, `1.5x`, or `2x`.
5. Seek and adjust audio:
- Drag the timeline slider to jump within the current track.
- Use the volume slider and speaker button to adjust/mute sound.
6. View metadata:
- Open `... -> Properties` to see details for the current track.

## Notes
- `Open -> Select Artist` currently expects a Windows-specific path (`C:/Users/wahee/Music`) in source code, so it may not work out-of-the-box on macOS/Linux.
- Some icon paths in code are also Windows-specific. This does not block core playback features.

## Tech Stack
- C++
- Qt 6 (Qt Widgets + Qt Multimedia)
