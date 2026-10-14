# UnitConverter 单位转换器

## 项目简介

UnitConverter 是一个基于 C++ 和 CMake 构建的命令行单位换算工具，支持温度、长度、重量三类常见单位之间的互相转换。项目采用现代 CMake 模块化构建方式，将转换逻辑封装为独立静态库，主程序通过链接库完成交互。

本项目为哈工大（威海）CMake 实践任务示例。

## 功能特性

- ✅ 摄氏度 ⇌ 华氏度
- ✅ 米 ⇌ 英尺
- ✅ 磅 ⇌ 千克
- ✅ 命令行交互式菜单
- ✅ 模块化设计：转换逻辑封装为独立静态库 `unitlib`
- ✅ 现代 CMake 构建（源码外构建，无全局 `include_directories`）

## 项目结构

UnitConverter/

├── CMakeLists.txt              # 根目录构建文件

├── README.md                   # 项目说明文档

├── src/

│   └── main.cpp                # 主程序（交互菜单）

└── unitlib/                    # 转换库子模块

├── CMakeLists.txt          # 库的构建文件

├── include/

│   └── unitlib.h           # 公共头文件（函数声明）

└── src/

└── unitlib.cpp         # 转换函数实现

## 环境要求

| 依赖 | 版本 |
| :--- | :--- |
| 操作系统 | Linux / macOS / Windows（WSL 推荐） |
| 编译器 | g++（支持 C++11 及以上） |
| CMake | 3.10 及以上 |
| 构建工具 | make |

### 安装依赖（Ubuntu/Debian）
bash

sudo apt update

sudo apt install build-essential cmake

验证安装：
bash

g++ --version

cmake --version