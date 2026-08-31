# 洛谷题库 — AC 题解合集

> 个人学习过程中在各大在线评测平台（Online Judge）上通过（**AC**, Accepted）的 C++ 题解代码仓库。

## 📖 项目简介

本仓库收录了我在刷题过程中**全部通过**（Accepted）的 C++ 源代码，覆盖以下平台：

| 平台 | 文件前缀 | 简介 |
| :--- | :--- | :--- |
| [洛谷](https://www.luogu.com.cn/) | `P` | 国内主流 OJ，题目以 `P` 开头（如 `P1000`、`P1116`） |
| [Codeforces](https://codeforces.com/) | `CF` | 国际知名竞赛 OJ，编号为题目 ID |
| [AtCoder](https://atcoder.jp/) | `AT` | 日本 AtCoder 比赛 OJ，`AT_xxx_y` 格式 |

> 仓库内**所有 `.cpp` 文件均为已通过评测（AC）的代码**，可直接编译运行。

## 📂 目录结构

```
.
├── Pxxxx.cpp              # 洛谷题解（编号即题目 ID）
├── Bxxxx.cpp              # 洛谷入门/基础题（B 开头系列）
├── CFxxxxx.cpp            # Codeforces 题解
├── AT_xxx_y.cpp           # AtCoder 题解
├── Txxxxxx.cpp            # 洛谷团队/题单题目
├── Uxxxxxx.cpp            # 洛谷用户题/民间题目
├── 未命名*.cpp            # 早期无标题练习代码
├── help.cpp / df.cpp      # 算法模板/辅助代码
├── example/               # 部分题目的测试样例（输入/输出）
├── c++API.chm             # C++ API 中文帮助文档（本地查阅用）
└── LICENSE                # Apache License 2.0
```

### 命名约定说明

部分题解文件名带有额外后缀，含义如下：

- **`-2` / `-3`**：同一题目的不同实现/优化版本（如 `P1678-2.cpp`）。
- **`卡样例`**：当前实现**无法通过全部样例**，仅作思路存档（如 `P1002卡样例.cpp`）。
- **`未命名x`**：早期未整理的随手练习。

## ⚙️ 代码风格

所有题解统一使用以下模板风格（便于在 OJ 上快速提交）：

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    // ...
    return 0;
}
```

- 使用万能头 `<bits/stdc++.h>` 以缩短代码；
- 主体函数以 `main()` 为入口；
- 输入输出根据场景选用 `cin/cout` 或 `scanf/printf`；
- 类型定义常用 `long long` 时使用宏 `#define ll long long`。

## 🚀 如何使用

### 编译运行单个题解

以 `P1116.cpp`（冒泡排序交换次数统计）为例：

```bash
# 使用 g++ 编译
g++ -O2 -std=c++17 -o P1116 P1116.cpp

# 运行（按题目要求从标准输入读入）
./P1116
# Windows PowerShell 下：
.\P1116.exe
```

### 使用 example/ 中的样例对拍

仓库的 `example/` 目录存放了部分题目的输入/输出文件，命名格式为 `<题号>_<编号>.in / .out`。可借助以下脚本快速对拍：

```bash
# 以 P1002 为例
g++ -O2 -std=c++17 -o P1002 P1002.cpp
for f in example/P1002_*.in; do
    out_file="${f%.in}.out"
    ./P1002 < "$f" > my_out.txt
    if diff -q my_out.txt "$out_file" > /dev/null; then
        echo "PASS: $f"
    else
        echo "FAIL: $f"
        diff my_out.txt "$out_file"
    fi
done
```

> 💡 **VS Code 用户**：仓库已包含 `.vscode/` 配置，可直接使用 `Code Runner` 等插件一键编译运行。

## 🧮 题目分类速查

按难度/来源粗略分布如下（仅供参考）：

- **入门题**（P5703 ~ P5739 等）：基础语法、输入输出、循环、判断。
- **基础算法**（P1059、P1068、P1102 等）：排序、模拟、贪心。
- **数据结构**（P3367 等）：并查集、树状数组。
- **搜索/DP**（P10484、P2197 等）：BFS、DFS、动态规划。
- **数学/数论**（P1028、P2197 等）：质数、GCD、快速幂。
- **字符串**（P1143、P1765 等）：进制转换、回文、模拟。
- **图论**（P1330、P1803 等）：最短路、最小生成树。

## 📜 许可证

本项目基于 **Apache License 2.0** 开源，详见 [LICENSE](./LICENSE) 文件。

```
Copyright 2024 wjc

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0
```

## ✍️ 作者

- **GitHub**: [wjc2821296948](https://github.com/wjc2821296948)
- 仓库维护中，欢迎 Star ⭐ / Fork 🍴

---

> 📌 **声明**：本仓库代码仅用于个人学习与算法交流，题目版权归原 OJ 平台所有。如发现代码存在错误或可优化之处，欢迎通过 Issue 提出。
