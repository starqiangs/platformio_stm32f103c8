# platformio stm32example

## 运行步骤
```c++
// clean target
pio run --target clean 

// build
pio run

//赋予firmware.bin权限
chmod 644 .pio/build/genericSTM32F103C8/firmware.bin

//upload
/usr/local/bin/st-flash \
--reset \
--format=binary \
write \
.pio/build/genericSTM32F103C8/firmware.bin \
0x8000000
```