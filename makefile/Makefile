第一部分：调试细节，涉及语法 逻辑等知识块讲解
# Author lzy time 20210209
# 关于编译：make -s 表示静默编译 试验结果：没有echo输出
#
VERSION = 11

U_BOOT_VERSION = $(VERSION)
#
# sed -e s/**/***/，表示用***替换掉**的输出
# | 是管道命令
# = 常量赋值， := 变量赋值
#
HOSTARCH := $(shell uname -m | sed -e s/x86_64/i386/)

# 
# 这两条命令的组合相与，结果就是根目录(/root or /home/usrname)
#
BUILD_DIR := $(shell cd $(BUILD_DIR) && /bin/pwd)

#
#  if语句的用法：
#  if 第一个逗号前是判断条件，第一个逗号后是满足条件的输出结果，
#  第二个逗号后是不满足的输出结果
#  注这里CURDIR是不用赋值直接可以用的输出当前路径的常量
#
OBJTREE := $(if $(CURDIR),$(CURDIR),$(U_BOOT_VERSION))


@debug:
	echo $(HOSTARCH)
	echo $(U_BOOT_VERSION)
	
第二部分 语法
2.1 关于ifneq 和 ifeq 后面紧跟判断语句时，有空格的，否则语法错误!!!!!
2.3 if后面跟的任何语句，也是有空格的!!!!!