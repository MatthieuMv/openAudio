mkdir -p Build
cd Build
cmake ..
make
cd ..
cp Build/libopenAudio.* ${OPENAPP_ROOT}