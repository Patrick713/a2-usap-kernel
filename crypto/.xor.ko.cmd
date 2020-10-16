cmd_crypto/xor.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o crypto/xor.ko crypto/xor.o crypto/xor.mod.o;  true
