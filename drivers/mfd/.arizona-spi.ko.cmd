cmd_drivers/mfd/arizona-spi.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/mfd/arizona-spi.ko drivers/mfd/arizona-spi.o drivers/mfd/arizona-spi.mod.o;  true
