# hello-polyscope
Experimenting with https://polyscope.run/

## Setup - system deps
- Install Eigen library (so CMake can find it) (e.g. `pacman -S eigen`)

## Build / Run
### Pure cmake commands
```shell
mkdir build
cd build
cmake ..
cmake --build .
./src/main
```
### Or using `ms-vscode.cmake-tools` vscode extension) (delete build folder if switching from pure cmake above)
- Command Palette: Cmake:Configure 
- Command Palette: Cmake:Build
- Command Palette: Cmake:Run Without Debugging
 