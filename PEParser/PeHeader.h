// Copyright (c) 2021 onein528
// Licensed under the MIT License.

#include <stdio.h>
#include <Windows.h>
#include <winnt.h>

// 
// IMAGE_DOS_HEADER:
// 
//          +-----+-----+-----+-----+-----+-----+-----+-----++-----+-----+-----+-----+-----+-----+-----+-----+
//          | 0x1 | 0x2 | 0x3 | 0x4 | 0x5 | 0x6 | 0x7 | 0x8 || 0x1 | 0x2 | 0x3 | 0x4 | 0x5 | 0x6 | 0x7 | 0x8 |
// +--------+-----+-----+-----+-----+-----+-----+-----+-----++-----+-----+-----+-----+-----+-----+-----+-----+
// | 0x0000 |   magic   |    cblp   |     cp    |    crlc   ||  cparhdr  |  minalloc |  maxalloc |     ss    |
// +--------+-----+-----+-----+-----+-----+-----+-----+-----++-----+-----+-----+-----+-----+-----+-----+-----+
// | 0x0010 |     sp    |    csum   |     ip    |     cs    ||   lfarlc  |    ovno   |         res[4]        |
// +--------+-----+-----+-----+-----+-----+-----+-----+-----++-----+-----+-----+-----+-----+-----+-----+-----+
// | 0x0020 |         res[4]        |   oemid   |  oeminfo  ||                    res2[10]                   |
// +--------+-----+-----+-----+-----+-----+-----+-----+-----++-----+-----+-----+-----+-----+-----+-----+-----+
// | 0x0030 |                                res2[10]                                |         lfanew        |
// +--------+-----+-----+-----+-----+-----+-----+-----+-----++-----+-----+-----+-----+-----+-----+-----+-----+
// 