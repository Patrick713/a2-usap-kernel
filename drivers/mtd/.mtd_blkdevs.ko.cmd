cmd_drivers/mtd/mtd_blkdevs.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/mtd/mtd_blkdevs.ko drivers/mtd/mtd_blkdevs.o drivers/mtd/mtd_blkdevs.mod.o;  true