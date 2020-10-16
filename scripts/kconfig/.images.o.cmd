cmd_scripts/kconfig/images.o := gcc -Wp,-MD,scripts/kconfig/.images.o.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer -std=gnu89 -D_LARGEFILE_SOURCE -D_FILE_OFFSET_BITS=64      -c -o scripts/kconfig/images.o scripts/kconfig/images.c

source_scripts/kconfig/images.o := scripts/kconfig/images.c

deps_scripts/kconfig/images.o := \
  /usr/include/stdc-predef.h \
  scripts/kconfig/images.h \

scripts/kconfig/images.o: $(deps_scripts/kconfig/images.o)

$(deps_scripts/kconfig/images.o):
