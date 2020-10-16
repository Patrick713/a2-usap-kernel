cmd_crypto/crypto_user.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o crypto/crypto_user.ko crypto/crypto_user.o crypto/crypto_user.mod.o;  true
