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
2.2 if后面跟的任何语句，也是有空格的!!!!!
2.3 Makefile中 export CROSS_COMPILE等，是将变量传到下一级的Makefile 
2.4 Makefile中 例如：include $(TOPDIR)/config.mk 
include是包含其他的Makefile或者.mk文件, 从而可以包含文件中的变量
注：cskyToBoya的uboot-asic工程，ar,ld,objdump等交叉工具赋值放在了
主Makefile; Samsumg的x210提供的uboot则放在了工程根目录下的config.mk.
2.5 .PHONY,伪目标
 .PHONY: build clean tool lint help
 声明为伪目标后：在执行对应的命令时，
 make 就不会去检查是否存在build /clean /tool /lint /help 【其对应的文件】，而是每次都会运行标签对应的命令；
 若不声明：恰好存在对应的文件，则 make 将会认为 xx 文件已存在，没有重新构建的必要了