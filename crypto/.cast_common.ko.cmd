cmd_crypto/cast_common.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o crypto/cast_common.ko crypto/cast_common.o crypto/cast_common.mod.o;  true
