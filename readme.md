# 使用方法

## `git clone https://gitee.com/lenchu/Ctrl-JS.git` 

## `cd Ctrl-JS && npm link`

## 然后cd到自己项目里`npm link ctrl-js`

## 把`HIDCtrl.dll`拷贝到自己项目根目录

## 调用示例
```JS
const c = require('ctrl-js')
c.powerOn1() // 开锁
c.powerOff1() // 关锁
```
