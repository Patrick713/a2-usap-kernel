cmd_drivers/spi/spi-bcm2835aux.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/spi/spi-bcm2835aux.ko drivers/spi/spi-bcm2835aux.o drivers/spi/spi-bcm2835aux.mod.o;  true
