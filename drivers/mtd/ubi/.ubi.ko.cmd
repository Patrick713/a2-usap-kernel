cmd_drivers/mtd/ubi/ubi.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/mtd/ubi/ubi.ko drivers/mtd/ubi/ubi.o drivers/mtd/ubi/ubi.mod.o;  true
