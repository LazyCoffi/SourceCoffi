# SourceCoffi总览

该工程的最终目的是开发一个多平台多交互方式的卡牌战棋策略游戏，目前工程准备推进的主要项目如下

## CoffiGameKernel

- 游戏的内核，用以完成游戏内部逻辑与整体游戏内容，并通过向外开发接口，在用户交互模块的配合下实现整个游戏的基本功能
- [CoffiGameKernel仓库](https://github.com/LazyCoffi/CoffiGameKernel)

## CoffiInterface

- 游戏的交互节目，基于kernel开放的接口设计用户交互，实现用户与内核的交流

## CoffiWebServer

- 为实现游戏的线上部署与多人游戏而设计的webserver
