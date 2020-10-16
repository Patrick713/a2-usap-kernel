cmd_crypto/md5.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o crypto/md5.ko crypto/md5.o crypto/md5.mod.o;  true
