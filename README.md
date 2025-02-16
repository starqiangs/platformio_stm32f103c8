# platformio stm32example

## arduino框架中main函数(arduio框架学习待补充)
**如果需要高度掌握单片机中运行的所有程序**\
**势必要掌握每一个文件编译的过程以及应用**
```c++
/*
 * \brief Main entry point of Arduino application
 */
int main(void)
{
  initVariant();

  setup();

  for (;;) {
#if defined(CORE_CALLBACK)
    CoreCallback();
#endif
    loop();
    serialEventRun();
  }

  return 0;
}
```

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

## 运行环境
- macos
- vscode+platformio插件