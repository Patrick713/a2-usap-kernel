cmd_drivers/block/nbd.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/block/nbd.ko drivers/block/nbd.o drivers/block/nbd.mod.o;  true
