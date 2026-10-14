# 把库的源码变成静态库（造砖块）
add_library(unitlib STATIC src/unitlib.cpp)

# 暴露头文件路径：谁链接了我，谁就能找到 unitlib.h（定向快递）
target_include_directories(unitlib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)