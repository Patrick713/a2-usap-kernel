cmd_drivers/mtd/parsers/ofpart.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/mtd/parsers/ofpart.ko drivers/mtd/parsers/ofpart.o drivers/mtd/parsers/ofpart.mod.o;  true