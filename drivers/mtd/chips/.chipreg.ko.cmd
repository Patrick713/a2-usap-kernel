cmd_drivers/mtd/chips/chipreg.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/mtd/chips/chipreg.ko drivers/mtd/chips/chipreg.o drivers/mtd/chips/chipreg.mod.o;  true
