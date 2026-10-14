# 指定最低 CMake 版本
cmake_minimum_required(VERSION 3.10)

# 设置项目名称和语言
project(UnitConverter CXX)

# 进入子目录，编译 unitlib 库
add_subdirectory(unitlib)

# 生成主程序可执行文件
add_executable(app src/main.cpp)

# 将主程序和 unitlib 库链接在一起
target_link_libraries(app PRIVATE unitlib)