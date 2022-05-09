### 编译

```bash
mkdir build && cd build
cmake ..
make
```

生成动态库libyolov5.so，可执行文件main

### 执行

执行目录需包含backup/images/ backup/names/ backup/weights

```bash
./main
```

当前目录下输出result.jpg
