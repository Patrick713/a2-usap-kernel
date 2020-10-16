cmd_drivers/spi/spidev.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/spi/spidev.ko drivers/spi/spidev.o drivers/spi/spidev.mod.o;  true
