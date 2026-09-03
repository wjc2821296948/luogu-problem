# 洛谷题库 — AC 题解合集

> 个人学习过程中在各大在线评测平台（Online Judge）上通过（**AC**, Accepted）的 C++ 题解代码仓库。

## 📖 项目简介

本仓库收录了我在刷题过程中**全部通过**（Accepted）的 C++ 源代码，覆盖以下平台：

| 平台 | 文件前缀 | 简介 |
| :--- | :--- | :--- |
| [洛谷](https://www.luogu.com.cn/) | `P` | 国内主流 OJ，题目以 `P` 开头（如 `P1000`、`P1116`） |
| 洛谷基础题库 | `B` | 洛谷官方基础/入门练习题（如 `B2064`、`B2125`） |
| [Codeforces](https://codeforces.com/) | `CF` | 国际知名竞赛 OJ，编号为题目 ID |
| [AtCoder](https://atcoder.jp/) | `AT` | 日本 AtCoder 比赛 OJ，`AT_xxx_y` 格式 |
| 洛谷题单 | `T` | 洛谷题单编号题目 |
| 洛谷民间题 | `U` | 洛谷用户投稿/民间题目 |

> 仓库内**所有 `.cpp` 文件均为已通过评测（AC）的代码**，可直接编译运行。

## 📂 目录结构

```
.
├── P/                  # 洛谷（Luogu）题解，文件名以 P 开头
├── B/                  # 洛谷基础题库（B 系列题目）
├── CF/                 # Codeforces 题解（CF 前缀）
├── T/                  # 洛谷题单/团队题目（T 前缀）
├── U/                  # 洛谷民间题/用户题（U 前缀）
│
├── AT_abc001_1.cpp     # AtCoder 题目（暂仅 1 个，保留在根目录）
├── help.cpp            # 常用算法模板/辅助代码
├── df.cpp              # 其他辅助代码
├── 未命名1.cpp ~ 未命名7.cpp   # 早期未整理的随手练习
│
├── example/            # 部分题目的测试样例（输入/输出）
├── c++API.chm          # C++ API 中文帮助文档（本地查阅用）
└── LICENSE             # Apache License 2.0
```

### 📌 文件分类规则

仓库按 **OJ 平台 → 文件名前缀** 的两级规则组织：

1. **整文件夹归类**：所有 `P*.cpp` 放在 [`P/`](./P)，`CF*.cpp` 放在 [`CF/`](./CF)，依次类推。
2. **根目录兜底**：不属于主流前缀的文件（`AT_*`、`help`、`df`、`未命名*`）暂留在根目录，待积累后归入对应文件夹。

### 🏷️ 文件名后缀说明

部分题解文件名带有额外后缀，含义如下：

| 后缀 | 含义 | 示例 |
| :--- | :--- | :--- |
| `-2` / `-3` | 同一题目的不同实现 / 优化版本 | `P1678-2.cpp`、`P2249-3.cpp` |
| `卡样例` | 当前实现**无法通过全部样例**，仅作思路存档 | `P1002卡样例.cpp`、`P1182卡样例.cpp` |
| `未命名x` | 早期未整理的随手练习（暂留根目录） | `未命名1.cpp` |

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

以 `P/P1116.cpp`（冒泡排序交换次数统计）为例：

```bash
# 使用 g++ 编译
g++ -O2 -std=c++17 -o P1116 P/P1116.cpp

# 运行（按题目要求从标准输入读入）
./P1116
# Windows PowerShell 下：
.\P1116.exe
```

### 使用 example/ 中的样例对拍

仓库的 `example/` 目录存放了部分题目的输入/输出文件，命名格式为 `<题号>_<编号>.in / .out`。可借助以下脚本快速对拍（以 `P/P1002.cpp` 为例）：

```bash
g++ -O2 -std=c++17 -o P1002 P/P1002.cpp

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

- **入门题**（`B/` 下大量题目、`P/P5703` ~ `P/P5739`）：基础语法、输入输出、循环、判断。
- **基础算法**（`P/P1059.cpp`、`P/P1068.cpp`、`P/P1102.cpp`）：排序、模拟、贪心。
- **数据结构**（`P/P3367.cpp`）：并查集、树状数组。
- **搜索/DP**（`P/P10484.cpp`、`P/P2197.cpp`）：BFS、DFS、动态规划。
- **数学/数论**（`P/P1028.cpp`、`P/P2197.cpp`）：质数、GCD、快速幂。
- **字符串**（`P/P1143.cpp`、`P/P1765.cpp`）：进制转换、回文、模拟。
- **图论**（`P/P1330.cpp`、`P/P1803.cpp`）：最短路、最小生成树。
- **Codeforces**（`CF/`）：涵盖 Div.4 ~ Div.2 难度。
- **AtCoder**（根目录 `AT_abc001_1.cpp`）：ABC 入门级题目。

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
