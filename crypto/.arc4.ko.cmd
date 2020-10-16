cmd_crypto/arc4.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o crypto/arc4.ko crypto/arc4.o crypto/arc4.mod.o;  true
