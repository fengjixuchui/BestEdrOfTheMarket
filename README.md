
# Best EDR Of The Market (BEOTM) 🐲
<i>Little AV/EDR Evasion Lab for training & learning purposes.</i> (🏗️ under construction..)​

```
 ____            _     _____ ____  ____     ___   __   _____ _
| __ )  ___  ___| |_  | ____|  _ \|  _ \   / _ \ / _| |_   _| |__   ___
|  _ \ / _ \/ __| __| |  _| | | | | |_) | | | | | |_    | | | '_ \ / _ \
| |_) |  __/\__ \ |_  | |___| |_| |  _ <  | |_| |  _|   | | | | | |  __/
|____/_\___||___/\__| |_____|____/|_| \_\  \___/|_|     |_| |_| |_|\___|
|  \/  | __ _ _ __| | _____| |_
| |\/| |/ _` | '__| |/ / _ \ __|
| |  | | (_| | |  |   <  __/ |_           Yazidou - github.com/Xacone
|_|  |_|\__,_|_|  |_|\_\___|\__|
```

<br>BestEDROfTheMarket is a naive user-mode EDR (Endpoint Detection and Response) project, designed to serve as a testing ground for understanding and bypassing EDR's user-mode detection methods that are frequently used by these security solutions.
<br>These techniques are mainly based on a dynamic analysis of the target process state (memory, API calls, etc.), 

## Defensive Techniques ⚔️​
- [x] <a href="#"> Multi-Levels API Hooking </a> <br>
- [x] <a href="#"> SSN Hooking/Crushing </a> <br>
- [x] <a href="#"> IAT Hooking </a> <br>
- [x] <a href="#"> Shellcode Injection Detection </a> <br>
- [x] <a href="#"> Reflective Module Loading Detection</a> <br>
- [x] <a href="#"> Call Stack Monitoring </a> <br>

<i>In progress</i>:
- [ ] <a href="#"> Heap Monitoring </a> <br>
- [ ] <a href="#"> ROP Mitigation </a> <br>
- [ ] <a href="#"> AMSI Patching Mitigation </a> <br>
- [ ] <a href="#"> ETW Patching Mitigation </a> <br>
<br>
<!--<a href="#"> Performance brief </a> <br>-->

<img src="Assets/beotmgif1.gif">

## Releases 📦


## Structure & Config files ⚙️
```
📁 BestEdrOfTheMarket/
    📄 BestEdrOfTheMarket.exe
    📁 DLLs/
        📄 Kernel32.dll
        📄 ntdll.dll
        📄 iat.dll
    📝 TrigerringFunctions.json
    📝 YaroRules.json
```

## Usage 📜
```
        Usage: BestEdrOfTheMarket.exe [args]
 
                 /help Shows this help message and quit
                 /v Verbosity                 
                 /iat IAT hooking
                 /stack Threads call stack monitoring
                 /nt Inline Nt-level hooking
                 /k32 Inline Kernel32/Kernelbase hooking
                 /ssn SSN crushing
                 
```

## <a href="Docs/Setup.md"> Project Setup 🛠️​ </a>

## Disclaimer ⚠️​
- Don't link the EDR to programs that are too CPU-intensive/thread-creating, as some detection techniques such as call stack analysis constantly monitor the stack state of each thread and this can quickly increase the load on EDR, it's more relevant (that's also the point) that you link the tool to your own artifacts and keep in mind that a good evasive artifact tries to be as discrete as possible.