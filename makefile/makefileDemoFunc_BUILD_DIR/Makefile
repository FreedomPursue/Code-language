# lzy time 20210209
# 这是一个测试过的demo，当 BUILD_DIR的赋值语句开启时，打印BUILD_DIR的路径
# 当关闭时，打印CURDIR
# 可以直接拿来嵌套到自己的主Makefile
#
#BUILD_DIR := $(shell pwd)/hello

ifneq ($(BUILD_DIR),)
saved_output := $(BUILD_DIR)

#BUILD_DIR := $(shell pwd)/hello

#attempt to build dir
$(shell [ -d ${BUILD_DIR}] || mkdir -p ${BUILD_DIR})

BUILD_DIR := $(shell cd $(BUILD_DIR) && /bin/pwd)

$(if $(BUILD_DIR),,$(error))

endif

OBJTREE := $(if $(BUILD_DIR),$(BUILD_DIR),$(CURDIR))

@debug:
	echo $(OBJTREE)
