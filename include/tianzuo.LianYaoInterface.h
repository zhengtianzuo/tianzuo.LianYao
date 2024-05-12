
// *@file tianzuo_LianYaoInterface.h
// *@brief 天佐.炼妖壶 (tianzuo.LianYao)
// *@version 1.0
// *@section LICENSE Copyright © 2003-2103 郑天佐 Corporation
// *@author 郑天佐 (zhengtianzuo)
// *@date 2024-1-1
#pragma once

//!@brief 导出函数定义(define dllexport)
#undef tianzuo_LianYao_lib
#if defined (WIN32)
#define tianzuo_LianYao_atr
#if defined (tianzuo_LianYao_dllexport)
#define tianzuo_LianYao_lib _declspec(dllexport)
#else
#define tianzuo_LianYao_lib _declspec(dllimport)
#endif
#else
#define tianzuo_LianYao_atr __attribute__((visibility("default")))
#define tianzuo_LianYao_lib
#endif

//!@brief 炼妖壶模块类 for c++
//!@class tianzuo_LianYaoInt for c++
class tianzuo_LianYao_lib tianzuo_LianYaoInt {
public:
    tianzuo_LianYaoInt() {}
    ~tianzuo_LianYaoInt() {}

    /*!
    *@name initialize
    *@brief 组件初始化
    *@param[in] init_mem_size 初始化内存块数量
    *@param[in] memory_leak_log 内存泄漏输出文件
    *@param[in] app_path 当前应用程序路径
    *@param[in] language 语言 0: 简体中文 1: English
    *@return int 0:() -1:(错误)
    *@author 郑天佐
    *@date 2024-1-1
    */
    static int initialize(int const init_mem_size, char* const memory_leak_log, char* const app_path, int const language);

    /*!
    *@name terminate
    *@brief 组件销毁
    *@param[in] 无
    *@return void
    *@author 郑天佐
    *@date 2024-1-1
    */
    static void terminate();

    /*!
    *@name mem_get
    *@brief 获取内存块
    *@param[in] data_length 内存块长度
    *@return void* 内存块指针
    *@author 郑天佐
    *@date 2024-1-1
    */
    static void* mem_get(int const data_length);

    /*!
    *@name mem_del
    *@brief 删除内存块
    *@param[in] data 内存块指针
    *@return int
    *@author 郑天佐
    *@date 2024-1-1
    */
    static int mem_del(void* const data);
};
