cmd_drivers/mtd/devices/block2mtd.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/mtd/devices/block2mtd.ko drivers/mtd/devices/block2mtd.o drivers/mtd/devices/block2mtd.mod.o;  true