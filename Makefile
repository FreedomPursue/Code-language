VERSION = 11

U_BOOT_VERSION = $(VERSION)
HOSTARCH := $(shell uname -m)

@debug:
	echo $(HOSTARCH)
	echo $(U_BOOT_VERSION)

