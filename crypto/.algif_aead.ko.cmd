cmd_crypto/algif_aead.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o crypto/algif_aead.ko crypto/algif_aead.o crypto/algif_aead.mod.o;  true
