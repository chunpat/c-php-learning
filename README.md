# 本项目为PHP源码学习代码案例

## 环境Docker Ubuntu18.04
启动容器
```
docker-compose up -d
```

查看启动的容器
```
docker ps
```

进入容器
```
docker exec -it 775c7c9ee1e1 /bin/bash
```

## gcc
```
gcc -o a a.c -g
```
-o选项的作用是：对命令输出结果进行导入操作，这里是把gcc –o a a.c -g的操作结果输出到文件a(文件名可以自定义)中进行保存。

-g选项的作用是：在可执行文件中加入源码信息，比如：可执行文件中第几条机器指令对应源代码的第几行，但并不是把整个源文件都嵌入到可执行文件中，而是在调试时必须保证gdb能找到源文件。

## gdb 是 gcc编译后debug工具
gcc记得带上-g参数，才能gdb

start: 开始debug

p a: 打印a字段

l : 列出源码

n : 下一步

bt : 看栈

f 1 : 看第一层栈信息

x/3d 0x7fffffffde1c ： 在0x7fffffffde1c地址后以十进制显示往后3个内容

x/6cb 0x7fffffffde1c ： 例如打印hello,6是指5个字符末尾以\0结尾，c是字符串打印，b是字节单位。



