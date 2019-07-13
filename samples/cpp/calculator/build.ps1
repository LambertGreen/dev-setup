
# Set vsvcvars env params
Set-VsCmd 2017

cmake -B build -G Ninja .
ninja -C build
