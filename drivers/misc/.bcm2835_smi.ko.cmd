cmd_drivers/misc/bcm2835_smi.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/misc/bcm2835_smi.ko drivers/misc/bcm2835_smi.o drivers/misc/bcm2835_smi.mod.o;  true