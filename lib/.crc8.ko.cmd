cmd_lib/crc8.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o lib/crc8.ko lib/crc8.o lib/crc8.mod.o;  true
