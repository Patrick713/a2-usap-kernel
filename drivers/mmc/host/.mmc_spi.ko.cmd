cmd_drivers/mmc/host/mmc_spi.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/mmc/host/mmc_spi.ko drivers/mmc/host/mmc_spi.o drivers/mmc/host/mmc_spi.mod.o;  true
