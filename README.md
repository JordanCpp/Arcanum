## How to run locally

### Windows

1. Create dir dependencies in project
2. Unpack SDL2-devel-2.28.1 to folder dependencies
3. Unpack zlib-1.2.13 to folder dependencies
4. Build

### Linux

1. sudo apt-get libsdl2-dev
2. cmake CMakeLists

### MacOS

1. Install Xcode command-line tools
```
sudo xcode-select --install
```
2. Go to a folder inside a project where `CMakeLists.txt` is located
3. Run
```
cmake -G Xcode .
```
4. Upon successful build, open `.xcodeproj` file in Xcode
5. Select macOS target
6. Build & run!

### Install game
Copy ArcanumProject to folder game