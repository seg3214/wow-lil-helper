# WoW Lil Helper

A C-based framework for process injection within the **World of Warcraft** environment to deliver gameplay enhancements. Provided as a demonstration of **reverse engineering**, in-process hooking, real-world memory manipulation, **DirectX** overlay techniques, **Lua engine** hooking, **network packet** introspection, and cross-platform build engineering.

## ✨ Features

- **DirectX Overlay**  
  Real-time visual enhancements:
  - Player information panels with role, class, and health information
  - 3D bounding boxes around players, NPCs, and objects
  - Highlighting of rare, hidden, or hard-to-see game objects

- **Automated & Scripted Gameplay**  
  Fully programmable in-game actions and behaviors:
  - Custom scripting via game’s Lua scripting engine
  - Binding game’s action buttons to call C functions
  - Automated fishing

- **Network Packet Manipulation**  
  - Real-time telemetry and alteration of inbound and outbound game’s packets.
  - Sending custom packets to the game server

## 🛠️ Internal Architecture

* **Low-Level Hooking & Assembly:** Uses **inline assembly** to handle various calling conventions (```stdcall```, ```cdecl```), enabling seamless interoperability between C code and game’s engine.
* **Graphics & UI Injection:** Low-latency visual overlay using **Direct3D** and **Direct2D** to render metadata and state information directly over an active process.
* **Network Analysis:** Detours game-engine **TCP packet** handlers to intercept and analyze inbound/outbound network traffic for real-time data processing.
* **Scripting Engine Integration:** Detours game-engine **Lua scripting API**, allowing for interfacing with C functions within DLL.
* **Memory Managment & Caching:** High-performance **Object Cache System** with dedicated Initialization and Update phases to minimize CPU overhead and redundant memory reads/writes.
* **Custom Cross-Platform Build System:** **Clang** and **Makefile** build pipeline that manages platform-specific source sets (DLL for Windows, ELF for Linux) alongside a shared core logic library.


> ## ⚠️ Legal Disclaimer
> 
> **This tool is for educational and research purposes only.** 
>
>### Research Methodology
> Visual demonstrations were captured in a controlled environment for the purpose of validating system stability and latency under real-world conditions. 
> ### Use at Your Own Risk
> The author (and any contributors) are NOT responsible for:
> *   **Account Actions:** Any bans, suspensions, or penalties applied to your accounts by game developers or anti-cheat systems (e.g., VAC, BattlEye, Easy Anti-Cheat).
> *   **System Damage:** Any data loss, hardware failure, or system instability caused by the use of this software.
> *   **Legal Consequences:** Any misuse of this tool that violates local laws or third-party Terms of Service.
> 
> ### License
> This project is licensed under the **GNU Affero General Public License v3.0 (AGPL-3.0)**. 
> THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED. 