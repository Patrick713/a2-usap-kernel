cmd_lib/lib-ksyms.o := objdump -h lib/lib.a | sed -ne '/___ksymtab/s/.*+\([^ ]*\).*/EXTERN(\1)/p' >lib/.lib-ksyms.o.lds; rm -f lib/.lib_exports.o; echo | gcc -Wp,-MD,lib/.lib-ksyms.o.d  -nostdinc -isystem /usr/lib/gcc/arm-linux-gnueabihf/8/include -I./arch/arm/include -I./arch/arm/include/generated  -I./include -I./arch/arm/include/uapi -I./arch/arm/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -D__ASSEMBLY__ -fno-PIE -mabi=aapcs-linux -mfpu=vfp -marm -Wa,-mno-warn-deprecated -D__LINUX_ARM_ARCH__=7 -march=armv7-a -include asm/unified.h -msoft-float    -c -o lib/.lib_exports.o -x assembler -; ld  -EL    -r -o lib/lib-ksyms.o -T lib/.lib-ksyms.o.lds lib/.lib_exports.o; rm lib/.lib_exports.o lib/.lib-ksyms.o.lds
