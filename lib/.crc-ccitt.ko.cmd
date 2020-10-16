cmd_lib/crc-ccitt.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o lib/crc-ccitt.ko lib/crc-ccitt.o lib/crc-ccitt.mod.o;  true
