cmd_crypto/echainiv.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o crypto/echainiv.ko crypto/echainiv.o crypto/echainiv.mod.o;  true
