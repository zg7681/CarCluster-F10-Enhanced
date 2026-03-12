# CarCluster-F10-Enhanced

**Enhanced GPL-3.0 fork of r00li/CarCluster focused on BMW F10 cluster improvements.**  
**基于 r00li/CarCluster 的 GPL-3.0 增强版分支，主要针对 BMW F10 仪表进行功能改进。**

Forked from / 原项目：  
https://github.com/r00li/CarCluster

Thanks to r00li for the original CarCluster project.  
感谢 r00li 创建原始 CarCluster 项目。

---

## What is this? / 项目简介

CarCluster-F10-Enhanced allows you to control a real BMW F10 instrument cluster using an ESP32 and CAN interface.  
CarCluster-F10-Enhanced 允许你使用 ESP32 和 CAN 接口驱动真实的 BMW F10 仪表。

This fork introduces a rewritten BMW F10 adaptation layer and extended LCD functionality while preserving compatibility with the original project structure.  
该分支在保留原项目结构兼容性的基础上，对 BMW F10 仪表适配层进行了重写，并扩展了 LCD 信息功能。

The project is primarily designed for **bench testing, simulation environments, and instrument cluster experimentation**.  
该项目主要用于 **桌面测试、模拟环境以及仪表研究实验**。

---

![Main image](https://github.com/JackieZ123430/CarCluster-F10-Enhanced/blob/main/Misc/main_display.jpeg?raw=true)

---

# Key Enhancements / 主要功能改进

Compared to the original CarCluster project, this fork introduces multiple functional improvements and behavioral fixes specifically for BMW F-series instrument clusters.  

与原始 CarCluster 项目相比，本分支针对 BMW F 系列仪表增加了多项功能改进和行为优化。

Main additions include:  
主要新增功能包括：

---

### Auto Hold 支持
Added support for **Auto Hold status handling and indicator behavior** on the cluster.  

增加 **Auto Hold 状态识别与图标显示支持**。

---

### 爆胎 / 胎压报警检测 (TPMS)
Implemented **tire pressure monitoring warning logic**.  

实现 **胎压监测报警逻辑**，可显示爆胎或胎压异常提示。

---

### 车门开启检测
Added **door open detection logic** for instrument cluster warnings.  

增加 **车门状态检测**，可在仪表显示车门未关闭警告。

---

### D档显示修复
Fixed gear mapping so the cluster correctly displays **D mode**.  

修复档位映射逻辑，使仪表正确显示 **D档**。

---

### N档警告
Added warning behavior when the vehicle remains in **Neutral (N)**.  

增加 **N档警告提示逻辑**。

---

### 转速表逻辑优化
Improved tachometer update logic for smoother RPM movement.  

优化转速表刷新逻辑，使 **转速变化更加平滑自然**。

---

### 点火自检模拟
Implemented **dashboard warning light self-test** when ignition is on but engine is not started.  

实现 **点火状态下未启动发动机时的仪表自检模拟**。

---

### S档 / M档显示支持
Added correct display logic for **Sport (S) and Manual (M) modes**.  

增加 **S档和M档显示逻辑支持**。

---

### 定速巡航图标
Added support for **cruise control indicator display**.  

增加 **定速巡航图标显示**。

---

### 发动机温度提示
Implemented **engine temperature warning messages**.  

增加 **发动机温度报警提示**。

---

### Web方向盘按钮修复
Fixed the issue where **steering wheel button controls did not work correctly in the original web interface**.  

修复原项目 **Web界面方向盘按钮无法正常工作的 bug**。

---

# Behavior Improvements / 行为优化

Additional refinements include:  

额外优化包括：

- Improved stability of CAN message handling  
  提升 CAN 消息处理稳定性

- More consistent LCD alert behavior  
  优化 LCD 警告信息显示逻辑

- Improved cluster behavior for bench simulation scenarios  
  优化桌面模拟环境下的仪表行为

---

# Integration with Better_CAN / 与 Better_CAN 集成

This project can optionally work together with:  

该项目可以与以下项目配合使用：

https://github.com/JackieZ123430/Better_CAN

Better_CAN provides an extensible **telemetry-to-CAN bridge** for BeamNG and other simulation environments.  

Better_CAN 提供 **遥测数据 → CAN 总线** 的桥接功能，可用于 BeamNG 等模拟器。

Architecture overview / 架构示意：


BeamNG → Better_CAN → CarCluster-F10-Enhanced → BMW F10 Cluster


Better_CAN is a separate project and licensed independently.  

Better_CAN 为独立项目，并使用独立许可证。

---

# Differences from Original Project / 与原项目区别

Compared to upstream CarCluster:

与原版 CarCluster 相比：

- Refactored BMW F10 adaptation logic  
  重构 BMW F10 适配逻辑

- Extended LCD message handling  
  扩展 LCD 信息处理

- Refined CAN mapping logic  
  优化 CAN 映射逻辑

- Added multiple dashboard behaviors and warning simulations  
  增加多种仪表行为模拟与警告逻辑

Other cluster platforms remain unchanged unless explicitly modified.  

除非特别说明，其他仪表平台保持原始项目实现。

---

# Hardware Requirements / 硬件需求

Same hardware requirements as the original CarCluster project:

与原始 CarCluster 项目相同的硬件需求：

- ESP32 development board  
  ESP32 开发板

- MCP2515 CAN module  
  MCP2515 CAN 模块

- 12V power supply  
  12V 电源

- Supported BMW F10 instrument cluster  
  BMW F10 仪表

- Wiring harness and optional simulation components  
  连接线束及可选模拟组件

Refer to upstream documentation for detailed wiring and setup instructions.  

详细接线和配置方法请参考原项目文档。

---

# Installation / 安装方法

Installation process is identical to the upstream project:

安装流程与原项目相同：

1. Install ESP32 support in Arduino IDE  
   在 Arduino IDE 中安装 ESP32 支持

2. Open `CarCluster.ino`  
   打开 `CarCluster.ino`

3. Select BMW F cluster configuration  
   选择 BMW F 系列仪表配置

4. Upload firmware to ESP32  
   上传固件到 ESP32

5. Configure network or serial communication  
   配置网络或串口通信

---

# License / 许可证

This project is a derivative work of:  

该项目基于以下项目：

https://github.com/r00li/CarCluster

It remains licensed under **GNU GPL v3**.  

本项目仍遵循 **GNU GPL v3 开源协议**。

See the LICENSE file for details.  

详细信息请查看 LICENSE 文件。
