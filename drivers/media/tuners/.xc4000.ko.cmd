cmd_drivers/media/tuners/xc4000.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/media/tuners/xc4000.ko drivers/media/tuners/xc4000.o drivers/media/tuners/xc4000.mod.o;  true