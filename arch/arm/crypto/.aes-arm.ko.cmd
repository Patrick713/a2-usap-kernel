cmd_arch/arm/crypto/aes-arm.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o arch/arm/crypto/aes-arm.ko arch/arm/crypto/aes-arm.o arch/arm/crypto/aes-arm.mod.o;  true
