cmd_arch/arm/crypto/sha1-arm-neon.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o arch/arm/crypto/sha1-arm-neon.ko arch/arm/crypto/sha1-arm-neon.o arch/arm/crypto/sha1-arm-neon.mod.o;  true
