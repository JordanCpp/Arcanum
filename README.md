## How to run locally

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
