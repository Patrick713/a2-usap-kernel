cmd_crypto/tgr192.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o crypto/tgr192.ko crypto/tgr192.o crypto/tgr192.mod.o;  true
