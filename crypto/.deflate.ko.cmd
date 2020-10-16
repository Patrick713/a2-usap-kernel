cmd_crypto/deflate.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o crypto/deflate.ko crypto/deflate.o crypto/deflate.mod.o;  true
